//
//  linkedlist.h
//  LinkedList_simple
//
//  Created by Mingmanas Sivaraksa on 5/2/2566 BE.
//
#ifndef Node_h
#define Node_h

struct node
{
    struct node *nextPtr;
   int order;
   int qty;
};

typedef struct node Node;
typedef struct node* NodePtr;


/*void enqueue(NodePtr * head, NodePtr* tail, int x){
  Node* new_node=(NodePtr) malloc(sizeof(Node));
if(new_node){ 
   
  new_node->order=x;
  
  new_node->nextPtr=NULL;
  if(*head)
  {(*tail)->nextPtr=new_node;} 
  else {*head=new_node;}
  *tail=new_node;
  
 }
}
int dequeue(NodePtr* head, NodePtr* tail){
  NodePtr t=*head;
   if(t){
   int value= t->data;
     *head=(*head)->nextPtr;
     if(!(*head)) *tail=NULL;
     free(t);
       
       
   return value;
   }
   printf("Empty queue");
   return 0;
}
*/


#endif

