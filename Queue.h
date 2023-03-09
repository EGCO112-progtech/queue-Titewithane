typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x , int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  /*Finish enqueue */
  new_node->order=x;
  new_node->qty=y;
  new_node->nextPtr=NULL;
  
  
  if(q->headPtr)
  {(q->tailPtr)->nextPtr=new_node;} 
  else {q->headPtr=new_node;}
  q->tailPtr=new_node;
  (q->size)++;
  
 }printf("Order is %d\n",x);
}


int dequeue_struct(Queue *q){
   NodePtr t=q->headPtr;
  int p;
   if(t){
     //int value= t->data;
     switch(t->order)
       {
         case 1 :printf("The order is KFC ");p=300*t->qty;  break;
         case 2 :printf("The order is Ramen ");p=200*t->qty;  break;
         case 3 :printf("The order is spaghetti "); p=100*t->qty;break;
         default: printf("No Food\n");p=0;break;

       }
   
       
     
     
     
     /*Finish dequeue */ 
    
     
     q->headPtr=(q->headPtr)->nextPtr;
     if(!(q->headPtr)) q->tailPtr=NULL;
     (q->size)--;
     free(t);
     return p;
      
  
   }
   printf("Empty queue");
   return 0;
}