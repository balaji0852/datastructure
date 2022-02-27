#include<iostream>
using namespace std;
class node{
   node *left=NULL,*right=NULL;
   int data,height;
   public:node(int val){
          data = val;
          }
         void display(node **root);
         void display2(node **root);
         void insert(int data,node **root);
         void displayPreorder(node **root);
         void displayPostorder(node **root);
};

void node::displayPostorder(node **root){
   if((*root)->left!=NULL){
       display(&(*root)->left);
   }
   if((*root)->right!=NULL){
      display(&(*root)->right);
   }
   cout<<(*root)->data<<"\n";
}

void node::displayPreorder(node **root){
   cout<<(*root)->data<<"\n";
   if((*root)->left!=NULL){
       display(&(*root)->left);
   }
   if((*root)->right!=NULL){
      display(&(*root)->right);
   }
}

void node::insert(int data,node **root){
  if(data<=(*root)->data){
     if((*root)->left==NULL){
     node *new_node = new node(data);
     (*root)->left = new_node;
     (*root)->left->height = (*root)->left->height+1;
     cout<<data<<" inserted as left child of "<<(*root)->data<<" \n";
     return;
     }
     else{
      (*root)->left->height = (*root)->left->height+1;
      insert(data,&(*root)->left);
     }
  }
  else{
     if((*root)->right==NULL){
     node *new_node = new node(data);
     (*root)->right = new_node;
     (*root)->right->height = (*root)->right->height+1;
     cout<<data<<" inserted as right child of "<<(*root)->data<<" \n";
     return;
     }
     else{
      (*root)->right->height = (*root)->right->height+1;
      insert(data,&(*root)->right);
     }
  }
}


void node::display(node **root){

   if((*root)->left!=NULL){
       display(&(*root)->left);
   }
   cout<<(*root)->data<<" -"<<(*root)->height<<"\n";
   if((*root)->right!=NULL){
      display(&(*root)->right);
   }
}

int main(){
node *root = new node(70);
root->insert(12,&root);
root->insert(90,&root);
root->insert(90,&root);
root->display(&root);
//root->displayPostorder(&root);
//root->displayPreorder(&root);
return 0;

}











