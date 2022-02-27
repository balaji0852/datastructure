using namespace std;

#include<iostream>
#include<vector>
//profit = {1,4,5,6} weights = {2,4,5,6} capacity=11

class knapsack{
	public:int solveKnapsack(vector<int> &weight,vector<int> &profits, int capacity) {
    		return this->knapsacksolver(weight,profits,capacity, 0);
  	}

	public:int knapsacksolver(vector<int> &weights,vector<int> &profits,int capacity,int index){
		if(capacity<=0 || index>=weights.size()){
			return 0;
		}
		int i=index,i2=i;
		int profit1;
		//cout<<capacity<<"   1 \n";
		//cout<<index+1<<"    1 \n";	
		if(weights[index]<=capacity){
			profit1 = profits[i] +knapsacksolver(weights,profits,capacity-weights[i],i+1);
			//cout<<profits[i]<<" profit1 \n";
		}
		//cout<<capacity<<"    2 \n";
		//cout<<index+1<<"     2 \n";	
		int profit2 = knapsacksolver(weights,profits,capacity,index+1);
		//cout<<profit2<<" profit2 \n";
		if(profit1>=profit2){
			return profit1;
		}
		else{
			return profit2;
		}
	}

};


int main(){
	knapsack sack ;
	vector<int> weights = {1, 2, 3, 5};
	vector<int> profits = {1, 6, 10, 16};
	int temp = sack.solveKnapsack(weights,profits,6);
	cout<<temp;
	return 0;

}