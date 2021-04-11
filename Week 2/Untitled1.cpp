#include<bits/stdc++.h>
#define N 8
using namespace std;
struct mem;
unordered_set<int> s;
struct process{
    int mem_req;
    int bt; 
    int at; 
    int rt; 
    int et; 
    struct mem* alloc;
    bool iscompleted; 
} processes[8];

 

struct mem{
    int size;
    struct process* p_ptr;
};
struct mem blocks[100];
int no_of_blocks = 1;
void split(int i,int x){
    for(int j=no_of_blocks-1;j>i;j--){
        blocks[j+1] = blocks[j];
        struct process* ptr = blocks[j+1].p_ptr;
        if(blocks[j+1].p_ptr != NULL){
            blocks[j+1].p_ptr->alloc = &blocks[j+1];
        }
    }
    blocks[i+1].size = blocks[i].size - x;
    blocks[i].size = x;
    blocks[i+1].p_ptr = NULL;
    no_of_blocks++;
}

 

void merge(int i){
    blocks[i].size += blocks[i+1].size;
    blocks[i].p_ptr = NULL;
    for(int j=i+2;j<no_of_blocks;j++){
        blocks[j-1] = blocks[j];
        if(blocks[j-1].p_ptr != NULL){
            blocks[j-1].p_ptr->alloc = &blocks[j-1];
        }
    }
    no_of_blocks--;
}

 

bool allCompleted(){
    bool are = true;
    for(int i=1;i<N;i++){
        if(!processes[i].iscompleted){
            return false;
        }
    }
    return true;
}

 

bool iswaiting(int i){
    if(s.find(i) == s.end()){
        return false;
    }
    return true;
}

 

void print_op(){
    cout<<"Process\t\tStart\t\tFinish"<<endl;
    for(int i=1;i<N;i++){
        cout<<i<<"\t\t  "<<processes[i].rt<<"\t\t  "<<processes[i].et<<endl;
    }
}
int main(){
    processes[1] = {212,2,0,-1,-1,NULL,false};
    processes[2] = {417,5,2,-1,-1,NULL,false};
    processes[3] = {112,10,4,-1,-1,NULL,false};
    processes[4] = {426,3,6,-1,-1,NULL,false};
    processes[5] = {300,12,8,-1,-1,NULL,false};
    processes[6] = {500,13,9,-1,-1,NULL,false};
    processes[7] = {600,4,13,-1,-1,NULL,false};
    blocks[0] = {1000,NULL};
    int t=0;
    while(!allCompleted() && t < 50){ 
        for(int i=1;i<N;i++){
            if(processes[i].et == t){
                processes[i].iscompleted = true;
                int j = (processes[i].alloc - blocks)/0x01;
                if(j == 0 && blocks[1].p_ptr == NULL) merge(0);
                else if(j == no_of_blocks-1 && blocks[j-1].p_ptr == NULL) merge(j-1);  
                else if(j > 0 && j < no_of_blocks - 1){
                    bool isleft = false;
                    if(blocks[j-1].p_ptr == NULL){
                        merge(j-1);
                        isleft = true; 
                    }
                    if(!isleft && blocks[j+1].p_ptr == NULL) merge(j);  
                    else if(isleft && blocks[j].p_ptr == NULL) merge(j-1);
                }
                else processes[i].alloc->p_ptr = NULL; 
            }
            if((processes[i].at == t && !processes[i].iscompleted) || iswaiting(i)){
                bool isexec = false;
                for(int j=0;j<no_of_blocks;j++){
                    if(blocks[j].p_ptr == NULL && blocks[j].size == processes[i].mem_req){
                        blocks[j].p_ptr = &processes[i];
                        processes[i].rt = t;
                        processes[i].et = t + processes[i].bt;
                        processes[i].alloc = &blocks[j];
                        isexec = true;
                        break;
                    }else if(blocks[j].p_ptr == NULL && blocks[j].size > processes[i].mem_req){
                        blocks[j].p_ptr = &processes[i];
                        processes[i].rt = t;
                        processes[i].et = t + processes[i].bt;
                        processes[i].alloc = &blocks[j];
                        split(j,processes[i].mem_req);
                        isexec = true;
                        break;
                    }
                }
                if(iswaiting(i) && isexec) s.erase(i);
                if(!isexec && !iswaiting(i)) s.insert(i);
            }
            
        }
        t++;
    }
    print_op();
}
