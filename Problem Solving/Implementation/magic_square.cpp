#include<bits/stdc++.h>
using namespace std;


bool magic_check(vector<int> &vb)
{
    int a[3][3]; //now checking for SUM of each dimensions of row,columns and  diagonal
    
    //inserting all elements in the arr
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3; ++j)
            a[i][j] = vb[3 * i + j];
            
    // now operations
    int sum=0;
    //calcuating 1st most sum of row
        for (int j = 0; j < 3; ++j)
             {
                 sum+=a[0][j];
             }      
             
        // now comparing other sum of row ,col and diagonal
        // rest row sum check
        for(int i=1;i<3;i++)
        {
            int tmep=0;
            for(int j=0;j<3;j++)
            {
                tmep+=a[i][j];
            }
            if(tmep!=sum) return false;
        }      
        
        //Column sum check
        for(int j=0;j<3;j++)
        {  int temp=0;
            for(int i=0;i<3;i++)
            {
                temp+=a[i][j];
            }
            if(temp!=sum) return false;
        }
        
        //left diagonal
        // from upper left -> down right
        int temp=0;
        for(int i=0;i<3;i++)
        {
            temp+=a[i][i];
            
        }
        if(temp!=sum) return false;
        
        //right diagonal
        //form upper right -> down left
        temp=0;
        for(int i=0;i<3;i++)
        {
            temp+=a[2-i][i];
        } 
        if(temp!=sum) return false;
        
     return true;   
} 

//from 0-9 via doing all possible permutations at every next run
//generate all magic sq
void fi_magi_sq(vector<vector<int>> &mgc)
{
    //vector of size 9 is intialized
    vector<int> vb(9); 
    
    

    for(int i=0;i<9;i++)
    { //because we have to work with 
      //1 2 3 4 5 6 7 8 
      // then next permutation will be sent for checking
      
        vb[i]=i+1;
    }
    
    //because at least 1 time we need to check that the vector can be MAGIC SQUARE OR NOT.
    do{
        if(magic_check(vb))
        {
            mgc.push_back(vb);
        } 
    }while(next_permutation(vb.begin(),vb.end()));
}


//sum of diffrence
int diff(vector<int> &v,vector<int>&b)
{
    int sumdif=0;
    for(int i=0;i<9;++i)
    {
        sumdif+=abs(v[i]-b[i]);
    }
    return sumdif;
}


int wapper(vector<int> &v)
{
    int res=INT16_MAX;
    vector<vector<int>> poss_magic_sq;
    
    fi_magi_sq(poss_magic_sq);
    
    for(int i=0;i<poss_magic_sq.size();i++)
    {
        res=min(res,diff(v,poss_magic_sq[i]));
    }
    return res;
}
int main()
{
    vector<int> v;
    for(int i=0;i<9;i++)
    {
        int o;
        cin>>o;
        v.push_back(o);
    }
    
    cout<<wapper(v);
}