#include <bits/stdc++.h>
using namespace std;

int main ()
{
    //siz = no of item
    // ski = index reserved
    // inp = items
    // sum : all appdups
    // 
    int siz,ski,inp,sum=0,charged =0;
    
    int store_index_ele=0;
    
    cin>>siz>>ski;

    for(int i=0;i<siz;i++)
    {
        if( i != ski )
        {
            cin>>inp;
            sum += inp;
            
        }
        else {
            cin>>inp;
            store_index_ele =inp;
        }
    }
 
    
    cin>>charged;
  
    if((sum/2  - charged) == 0)
        cout<<"Bon Appetit";
    else
        cout<<abs(sum/2 - charged);    
    return 0;
}
