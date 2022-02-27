//Doubly link list 
#include<iostream>
using namespace std;
class node{
  public:
         node *prev;
         node *next;
         int data;

  void printList(node *head){
     node *last;
     cout<<"\n nodes printed in forward \n";
     do{
        cout<<head->data<<"--->";
        last = head;
        head = head->next;
       }while(head!=NULL);
     cout<<"\n nodes printed in backwards \n";
     do{
        cout<<last->data<<"--->";
        last = last->prev;
       }while(last!=NULL);
  }
 
  void Insert(node **head,int data){
     node *new_node;
     new_node = new node();
     new_node->data = data;
     new_node->prev = NULL;
     new_node->next = (*head);
     
     if((*head)!=NULL){
       (*head)->prev = new_node;
     }
     (*head) = new_node;
   }
 
 void append(node **head, int data){
     node *new_node,*last;
     new_node = new node();
     new_node->data = data;
     new_node->next = NULL;
     last = *head;
     if((*head)==NULL){
        new_node->prev = NULL;
        (*head) = new_node;
        return;
     }
     

     while(last->next!=NULL){
       last = last->next;
     }

     last->next = new_node;
     new_node->prev = last;
     return;

}
  void insertAfter(node* prev_node, int new_data)  
 {  
    /*1. check if the given prev_node is NULL */
    if (prev_node == NULL)  
    {  
        cout<<"the given previous node cannot be NULL";  
        return;  
    }  
  
    /* 2. allocate new node */
    node* new_node = new node(); 
  
    /* 3. put in the data */
    new_node->data = new_data;  
  
    /* 4. Make next of new node as next of prev_node */
    new_node->next = prev_node->next;  
  
    /* 5. Make the next of prev_node as new_node */
    prev_node->next = new_node;  
  
    /* 6. Make prev_node as previous of new_node */
    new_node->prev = prev_node;  
  
    /* 7. Change previous of new_node's next node */
    if (new_node->next != NULL)  
        new_node->next->prev = new_node;  
}  
  
 void insertBefore(node *next_node, int data){
    node *new_node;
    new_node = new node();
    new_node->data = data; 
    new_node->next = next_node->next;
    new_node->prev = next_node;
    next_node->next = new_node;
    
    //if(next_node->prev!=NULL){
      next_node->prev->next = new_node;
    //}
  }
void insertBefore1(node** head_ref, node* next_node, int new_data)  
{  
    /*1. check if the given next_node is NULL */
    if (next_node == NULL) {  
        cout<<"the given next node cannot be NULL";  
        return;  
    }  
  
    /* 2. allocate new node */
    node* new_node = new node();  
  
    /* 3. put in the data */
    new_node->data = new_data;  
  
    /* 4. Make prev of new node as prev of next_node */
    new_node->prev = next_node->prev;  
  
    /* 5. Make the prev of next_node as new_node */
    next_node->prev = new_node;  
  
    /* 6. Make next_node as next of new_node */
    new_node->next = next_node;  
  
    /* 7. Change next of new_node's previous node */
    if (new_node->prev != NULL)  
        new_node->prev->next = new_node;  
    /* 8. If the prev of new_node is NULL, it will be 
       the new head node */
    else
        (*head_ref) = new_node; 
      
}  
     
};

int main(){
  node *head = NULL;
 
  head->Insert(&head,1);
  head->Insert(&head,1); 
  head->Insert(&head,1);
  head->printList(head);
  head->append(&head,5);
  head->printList(head);
  head->insertAfter(head->next,9);
  head->printList(head);
  head->append(&head,5);
  head->append(&head,51);
  head->append(&head,5);
  head->insertBefore1(&head,head->next,50);
  head->printList(head);
  head->printList(head);


 
  return 0;
}


  
