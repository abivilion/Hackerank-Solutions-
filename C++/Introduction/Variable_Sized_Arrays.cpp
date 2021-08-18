#include <cmath>

#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int x,y,s=0;
    cin>>x>>y;
    int *arr[x];
    while(x--)
    {
        int num;
        cin>>num;
        arr[s]=new int[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[s][i];
            // cout<<arr[s][i]<<" ";
        }
        s++;
    }  
    while(y--)
    {
        int a,b;
        // cout<<arr[a];
        cin>>a>>b;
        // cout<<"\n"<<a<<"------"<<b<<endl;
        cout<<arr[a][b]<<endl;
    }
    
    return 0;
}