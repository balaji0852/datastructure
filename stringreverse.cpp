#include<iostream>
#include<string>
using namespace std;

string reverse(string str){
	int i = str.length()-1,c=0;
	string rstr;
	for(i=i;i>=0;i--){
		char temp = str[i];
		rstr += temp;
	}
	return rstr;
}
int main(){
	cout<<reverse("fucking world is a sick pyschotice world. We create data and behind the data");
	return 0;
}