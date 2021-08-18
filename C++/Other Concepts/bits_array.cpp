// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
// #include <bitset>
#include<bits/stdc++.h>
using namespace std;



int main() {
   long long int  n,s,p,q,r=0,ans=0,returned,v;
  n=pow(10,8); s=pow(10,8); p=pow(10,8); q=pow(10,8);   
    
    // cout<<(100000000-pow(10,8))<<endl;
    // cout<<pow(10,8)<<endl;
    
    
    
    cin>>n>>s>>p>>q;
   long long int i,a0=s, a=s, ap=0, k=0, kt=0;

    v=pow(2,31);
   
    for( i=0; i<n; i++){
        a=(a*p+q);
        a=a%v;
       
        if((a==a0 || a==ap) && i!=0){
            k=i+1;
            break;
        }
        ap=a;
    }
    if (i==n) k=i;


    cout <<k<<endl;

    return 0;
}
