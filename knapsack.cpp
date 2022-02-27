using namespace std;

#include<iostream>
#include<vector>
//profit = {1,4,5,6} weights = {2,4,5,6} capacity=11

class Knapsackss {
public:
  int solveKnapsack(const vector<int> &profits, const vector<int> &weights, int capacity) {
    return this->knapsackRecursive(profits, weights, capacity, 0);
  }

private:
  int knapsackRecursive(const vector<int> &profits, const vector<int> &weights, int capacity,
                        int currentIndex) {
    // base checks
    if (capacity <= 0 || currentIndex >= profits.size()) {
      return 0;
    }

    // recursive call after choosing the element at the currentIndex
    // if the weight of the element at currentIndex exceeds the capacity, we shouldn't process this
    int profit1 = 0;
    if (weights[currentIndex] <= capacity) {
      profit1 =
          profits[currentIndex] +
          knapsackRecursive(profits, weights, capacity - weights[currentIndex], currentIndex + 1);
    }

    // recursive call after excluding the element at the currentIndex
    int profit2 = knapsackRecursive(profits, weights, capacity, currentIndex + 1);

    return max(profit1, profit2);
  }
};


class knapsack{
	public:int knapsacksolver(vector<int> &weights,vector<int> &profits,int capacity,int index){
		if(capacity<=0 || index>=weights.size()){
			return 0;
		}
		int i=index,i2=i;
		int profit1;
		cout<<capacity<<"   1 \n";
		cout<<index+1<<"    1 \n";	
		if(weights[index]<=capacity){
			profit1 = profits[i] +knapsacksolver(weights,profits,capacity-weights[i],i+1);
			cout<<profits[i]<<" profit1 \n";
		}
		cout<<capacity<<"    2 \n";
		cout<<index+1<<"     2 \n";	
		int profit2 = knapsacksolver(weights,profits,capacity,i2+1);
		cout<<profit2<<" profit2 \n";
		if(profit1>=profit2){
			return profit1;
		}
		else{
			return profit2;
		}
	}

};


int main(){
	knapsackss sack ;
	vector<int> weights = {1, 2, 3, 5,4};
	vector<int> profits = {47, 6, 10, 16,55};
	int temp = sack.solveKnapsack(weights,profits,7,0);
	cout<<temp;
	return 0;

}