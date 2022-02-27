#include<iostream>
#define SIZE 5
using namespace std;
class queue{
public:
       int queuelist[SIZE],front=-1,back=-1;
     
       void full();
       void empty();
       void enqueue(int data);
       void dequeue();
       void display();
};

void queue::full(){
  if(back==front-1 || (back+1)%SIZE==front || front==0 && back==SIZE-1){
    cout<<"Queue is full. \n";
    return;
  }
 return;
}

void queue::empty(){
  if(front==0 && back == -1){
    cout<<"Queue is empty. \n";
    return;
  }
 return;
}

void queue::enqueue(int data){
   if(back==front-1 || (back+1)%SIZE==front || front==0 && back==SIZE-1){
     cout<<"queue is full \n";
     return;
   }
   else if(back ==-1 && front==-1){
     back++;
     front++;
     queuelist[back] = data;
     cout<<" item added to the queue. \n";
     return;
   }
   else{
   back = (back+1)%SIZE;
   queuelist[back] = data;
   cout<<" item added to the queue. \n";
   return;
   }
}

void queue::dequeue(){
   if(front==-1 && back==-1){
     cout<<" queue is empty \n";
     return;
   }
   if(front<SIZE-1 && front!=back ){
   front++;
   }
   else if(front==back){
   front=back=-1;
   cout<<queuelist[0]<<" was deleted successfully. \n";
   return;
   }
   else{
   front = 0;
   }
   int element = queuelist[front];
   cout<<element<<" was deleted successfully. \n";
   return;
} 
void queue::display(){
   cout<<" Items in the queue are :"<<" front :"<<front<<" back :"<<back<<"\n";
   if(front <=back){
   for(int i = front;i<=back;i++){
      cout<<queuelist[i]<<"--";
   }
   }
   else{
   for(int i = front;i<=SIZE-1;i++){
      cout<<queuelist[i]<<"--";
   }
   for(int i = 0;i<=back;i++){
      cout<<queuelist[i]<<"--";
   }
   }
   cout<<"\n";
}

int main(){
queue q;
q.full();
q.empty();
q.enqueue(10);
q.enqueue(10);
q.display();
q.dequeue();
q.display();

while(true){
int c;
cout<<"Enter your option. \n";
cout<<"enter 1 for adding \n";
cout<<"enter 2 for deleting a item \n";
cout<<"Enter 3 to exit \n";
cin>>c;
switch(c){
 case 1:
        int temp;
        cout<<"enter the item to be added in the queue \n";
        cin>>temp;
        q.enqueue(temp);
        q.display();
        break;
 case 2:
        q.dequeue();
        q.display();
        break;
 case 3:exit(0);
 default:cout<<"enter a valid option \n";
 }    
}   


return 0;
}

   


   