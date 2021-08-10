#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a,b;
    // Complete the code.
    string num[10]={"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    cin>>a>>b;
    for (int i=a;i<=b;i++)
    {
        cout<<((i<=9)?num[i]:(i%2==0)?"even":"odd")<<endl;
    }

       
    
    return 0;
}
