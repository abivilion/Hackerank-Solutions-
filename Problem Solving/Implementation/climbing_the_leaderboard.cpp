#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> ser;
    int sc; cin>>sc;
    for(int i=0;i<sc;i++)
    {int er;
        cin>>er;
        ser.insert(er);
    }
    
    vector<int> fut(ser.begin(),ser.end());
    int pos;
    int num; cin>>num;
    for(int i=0;i<num;i++)
    {int me;
    cin>>me;
    pos= upper_bound(fut.begin(),fut.end(),me)-fut.begin();
    cout<<fut.size()-pos+1<<endl;
    
    }
    return 0;
}
