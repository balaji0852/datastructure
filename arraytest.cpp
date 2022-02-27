using namespace std;
#include<iostream>
#include<vector>
void print(vector<int> hello){
	for(int x=0;x<hello.size();x++){
		cout<<hello[x]<<endl;
	}
}

void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int *arr,int low,int high){
	int pivot = arr[high];
	int i = low-1;
	for(int j = low;j<=high-1;j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[j],&arr[i]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}


void quicksort(int *arr,int low,int high){
	if(low<high){
		int p = partition(arr,low,high);
		
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}

void merge(int *arr, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
 

void mergeSort(int *arr,int low,int high){
    	if(low>=high){
        	return;//returns recursively
    	}
    	int mid = (low+high-1)/2;
    	mergeSort(arr,low,mid);
    	mergeSort(arr,mid+1,high);
    	cout<<" low "<<low<<" \n";
	cout<<" mid "<<mid<<" \n";
	cout<<" high "<<high<<" \n";
    	merge(arr,low,mid,high);
	
}
void bubblesort(int *arr,int n){
	for(int i=0;i<n-1;i++){
		for(int j = 0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				swap(&arr[j+1],&arr[j]);
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" \n";
}

void selectionsort(int *arr,int n){
	int min;
	for(int i=0;i<n-1;i++){
		min = i;
		for(int j = i+1;j<n;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
		swap(&arr[min],&arr[i]);
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" \n";
}

void insertionsort(int *arr,int n){
	int val,j;
	for(int i=1;i<n;i++){
		val = arr[i];
		j = i;
		while(j>0 && arr[j-1]>val){
			arr[j] = arr[j-1];
			j--;
		}
		arr[j] = val;
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<" \n";
}

int fun1(int n){
	static int i=0;
	if(n>0){
		++i;
		fun1(n-1);
	}
	return (i);
}
int fun2(int n){
	static int i=0;
	if(n>0){
		i = i+fun1(n);
		cout<<i<<" "<<n<<" \n";
		fun2(n-1);
	}
	return (i);
}
int main(){
	int data[2][2] = {{-9,4},{-2,2}};
	vector<int> hello = vector<int>(5,-1);
	static int i=10;
	int j=11;
	//insertionsort(data,sizeof(data)/4);

	//bubblesort(data,sizeof(data)/4);
	//selectionsort(data,sizeof(data)/4);
	//quicksort(data,0,sizeof(data)/4);
	//mergeSort(data,0,sizeof(data)/4);
	//for(int i=0;i<sizeof(data)/4;i++){
		//cout<<data[i]<<" ";
	//}
	if(3%2){
		cout<<"1";
	}	
       	return 0;
}