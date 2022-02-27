#include<iostream>
using namespace std;
class element{
  public:element *right=NULL,*left=NULL;
         int data;
  element(int val){
       data = val;
    }
  void insert(int data,element **root);
  void display(element **root);
};

void element::insert(int data,element **root){
   if((*root)==NULL){
      element *new_element = new element(data);
      cout<<data<<"---is the root node---\n";
      return;
    }
    else if((*root)->left==NULL && data<=(*root)->data){
      element *new_element = new element(data);
      (*root)->left = new_element;
      cout<<data<<"---is the added as left child of"<<(*root)->data<<"---\n";
      return;
    }
    else if((*root)->right==NULL && data>=(*root)->data){
      element *new_element = new element(data);
      (*root)->right = new_element;
      cout<<data<<"---is the added as right child of"<<(*root)->data<<"---\n";
      return;
    }
    else if((*root)->left==NULL && data>=(*root)->data && (*root)->right!=NULL){
      element *new_element = new element((*root)->data);
      (*root)->left = new_element;
      (*root)->data = data;
      cout<<data<<"---is the added as left child of"<<(*root)->data<<"---\n";
      return;
    }
    else if((*root)->right==NULL && data<=(*root)->data && (*root)->left!=NULL){
      element *new_element = new element((*root)->data);
      (*root)->right = new_element;
      (*root)->data = data;
      cout<<data<<"---is the added as right child of"<<(*root)->data<<"---\n";
      return;
    }
    else if((*root)->right!=NULL && (*root)->right->data<=data ){
      (*root)->left = (*root)->right;
      (*root)->left->data = data;
      cout<<data<<" swap happended "<<"---is the added as left child of"<<(*root)->data<<"---\n";
      cout<<(*root)->right->data<<" (swap happended) "<<"---is the added as right child of"<<(*root)->data<<"---\n";
    }
    else if((*root)->left!=NULL && (*root)->left->data>=data){
      (*root)->right = (*root)->left;
      (*root)->left->data = data;
      cout<<data<<" swap happended "<<"---is the added as right child of"<<(*root)->data<<"---\n";
      cout<<(*root)->left->data<<" (swap happended) "<<"---is the added as left child of"<<(*root)->data<<"---\n";
    }
    else if((*root)->left!=NULL){
      insert(data,&(*root)->left);
    }
    else{
      insert(data,&(*root)->right);
    }
}
 
void element::display(element **root){
  cout<<"---elements of node---"<<(*root)->data<<" are "<<(*root)->left->data<<" and "<<(*root)->right->data<<" \n";
  display(&(*root)->left);
  display(&(*root)->right);
  return;
}


int main(){
 element *root = new element(10);
 root->insert(20,&root);
 root->insert(30,&root);
 root->insert(40,&root);
 root->insert(50,&root);
 root->insert(60,&root);
 root->insert(70,&root);
 root->insert(80,&root);
 root->insert(90,&root);
 root->insert(100,&root);
 root->insert(110,&root);
 root->insert(120,&root);
 root->insert(130,&root);
 root->insert(140,&root);
 root->insert(150,&root);
 
 
 
 root->display(&root); 
 //cout<<root->data<<"\n"<<root->left->data<<"\n"<<root->right->data;
 
 return 0;
}
     