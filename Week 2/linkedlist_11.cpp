// { Driver Code Starts
//

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

Node* inputList(int size)
{
    Node *head, *tail;
    int val;
    
    cin>>val;
    head = tail = new Node(val);
    
    while(--size)
    {
        cin>>val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
}


 // } Driver Code Ends
/* structure of list node:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution{
  public:
    Node* findIntersection(Node* h1, Node* h2)
    {
      Node*p=NULL;
      while(h!=NULL&&h2!=NULL)
      {
          if(h1->data<h2->data)
          {
              h1=h1->next;
          }
          else if(h1->data>h2->data)
          {
              h2=h2->next;
          }
          else
          {
              push(&p,h1->data);
               h2=h2->next;
                h1=h1->next;
          }
      }
      return p;
    }
};
class Solution{
  public:
    Node* findunion(Node* h1, Node* h2)
    {
      Node*p=NULL;
      while(h!=NULL&&h2!=NULL)
      {
          if(h1->data<h2->data)
          {
               push(&p,h1->data);
              h1=h1->next;
          }
          else if(h1->data>h2->data)
          {
               push(&p,h2->data);
              h2=h2->next;
          }
          else
          {
              push(&p,h1->data);
               h2=h2->next;
                h1=h1->next;
          }
      }
      while(h1!=NULL)
      {
           push(&p,h1->data);
              h1=h1->next;
      }
      while(h2!=NULL)
      {
           push(&p,h2->data);
              h2=h2->next;
      }
      
      return p;
    }
};
