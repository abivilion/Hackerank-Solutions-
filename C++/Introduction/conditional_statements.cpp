#include<iostream>
using namespace std;

int main()
{
    string arr[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    int ad;
    cin>>ad;
    if(ad<=9){
        cout<<arr[ad]<<endl;
    }
    else{
    cout<<arr[0]<<endl;
    }
return 0;
} 
