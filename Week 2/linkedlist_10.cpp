
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
