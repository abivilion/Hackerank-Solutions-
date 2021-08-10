#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> adrq;
    for(int i =0;i<n;i++){
        
        while(!adrq.empty()&&arr[i]>=arr[adrq.back()]){
            adrq.pop_back();
        }
        adrq.push_back(i);
        while(!adrq.empty()&&adrq.front()<=i-k)
        {adrq.pop_front();}
        
        if(i>=k-1){cout<<arr[adrq.front()]<<" ";}    
}
cout<<endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
