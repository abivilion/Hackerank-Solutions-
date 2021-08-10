#include<bits/stdc++.h>
using namespace std;

int main() {
	// Complete the program
    string one,two;
    
    cin>>one>>two;
    cout<<one.length()<<" "<<two.length()<<endl;
    cout<<one+two<<endl;
    swap(one[0],two[0]);
    cout<<one<< " "<<two<<endl;
    
  
    return 0;
}
