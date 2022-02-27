//#include <bits/stdc++.h> 
#include<stack>
#include<iostream>
using namespace std;
int main(){
stack <int> s;
s.push(10);
for(int i=0;i<10;i++){
s.push(i);
}
cout<<s.size()<<"\n"<<s.top();
return 0;
}