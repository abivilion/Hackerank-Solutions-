#include <iostream>
// #include<bits/stdc++.h>
#include <algorithm>
using namespace std;

int max_of_four(int a,int b,int c,int d)
{
 return((a>b?a:b)>(c>d?c:d)?(a>b?a:b):(c>d?c:d));
}
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}