#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n; cin>>n; int q;cin>>q;
    
    int mine=min((n/2-q/2),q/2);
    // p/2,n/2-p/2
    cout<<mine<<endl;
    return 0;
}
