/ { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


 // } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node*ehead=NULL;
        Node*ohead=NULL;
        Node*leven=NULL;
         Node*lodd=NULL;
         Node*temp=head;
         Node*p=NULL;
         while(temp!=NULL)
         {
             if(isvowel(temp->data))
             {
                p=temp;
                p->next=NULL;
                if(ehead==NULL)
                {
                    ehead=p;
                    leven=ehead;
                }
                else
                {
                    leven->next=p;
                    leven=p;
                }
             }
             else
             {
                p=temp;
                p->next=NULL;
                if(ohead==NULL)
                {
                    ohead=p;
                    lodd=ohead;
                }
                else
                {
                    lodd->next=p;
                    lodd=p;
                }
             }
             temp=temp->next;
         }
         if(ehead=NULL)
         {
             head=ohead;
         }
         else if(ohead=NULL)
         {
             head=ehead;
         }
         else
         {
             lodd->next=ehead;
             head=ohead;
         }
         return head;
    }
};

// { Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}
  // } Driver Code Ends
