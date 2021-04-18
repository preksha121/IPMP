// { Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}

 // } Driver Code Ends
/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 

struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/
class Solution
{
    public:
    void linkdelete(struct Node  *head, int m, int n)
    {
        //Add code here   
        Node*temp=head;
        Node*t;
        int i;
        while(temp)
        {
            for(i=1;i<m&&temp!=NULL;i++)
            {
                temp=temp->next;
            }
            if(temp==NULL)
            {
                return ;
            }
            t=temp->next;
            for(i=1;i<=n&&t!=NULL;i++)
            {Node *curr = t; 
            t = t->next; 
            free(curr); 
                
            }
            temp->next=t;
            temp=t;
        }
    }
};

