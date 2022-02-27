#include<iostream>
using namespace std;
class stack{
 
  public: 
    int x,top=0,stacks[10];
   

 void push(int data){
  stacks[top]=data;
  ++top;
  cout<<"inserted"<<"\n";
 }

 void pop(){
  stacks[top]=0;
  --top;
  cout<<"removed"<<"\n";
  }
 void display(){
  for(int i=0;i<top;i++){
  cout<<stacks[i]<<"\n";
  }
 }
};
int main(){
 stack s;
 s.push(1);
 s.push(1);
 s.push(1);
 s.push(1);
 s.push(1);
 s.push(4);
 s.push(5);
 s.push(1);
 s.display();
 s.pop();
 s.pop();
 s.pop();
 s.pop();
  s.display();
 return 0;
}