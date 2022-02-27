#include<iostream>
#include<vector>
using namespace std;

class node{
public:
   node *next;
   int data;
   void printList(node *n);
   void printList(int n);
   
   
};
void node::printList(node *n){
    do{
        cout<<n->data<<"\n";
        n = n->next;
      }while(n!=NULL);
   }

void node::printList(int n){
 cout<<n<<"\n";
}

int main() {
  vector<int> k;
  int *ptr,**pt,h=10;
  ptr = &h;
  pt = &ptr; 
  //int data[4][5] = {{1,2},{3,4},{5,6}};
  //char *data1[2] ={"hello","Aorld"};
  //int x = 10,*pofx,*pofs,**pofpx=&pofx;
  //string s="125.77";
  //cout<<&pofx<<"\n"<<&pofs<<"\n"<<&pofpx<<"\n";
  //for(int i=0;i<data
  //float x = stof(s);
  //double X=stod(s);
  
  *ptr = 100;
  cout<<*ptr<<"\n";
  
  
  
  
  
  
  
  //k.push_back(1);
  //cout<<k[0]<<"\n";
  //node *node1,*node2,*node3,*node4,*node5;
  //node1 = new node();
  //node2 = new node();
  //node3 = new node();
  //node4 = new node();
  //node5 = new node();
  
  //node1->next = node2;
  //node1->data = 10;
  //node2->next = node3;
  //node2->data = 10;
  //node3->next = node4;
  //node3->data = 10;
  //node4->next = node5;
  //node4->data = 10;
  //node5->data = 10;
  //node5->next = NULL;
     
  //node1->printList(node1);
  //node n;
  //n.printList(1000);
  return 0;
}