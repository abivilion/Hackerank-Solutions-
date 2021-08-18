#include<bits/stdc++.h>
using namespace std;

int main(){
    
int n,q;
string curr="",attr_name;
map<string,string> m;
cin>>n>>q;
cin.ignore();

for(int i=0;i<n;i++)
{
    
    string line,tag,extract;
    getline(cin,line);
    stringstream so(line);
    
    while(getline(so,extract,' ')){
        // cout<<extract;
        if(extract[0]=='<'){
            if(extract[1]!='/'){
                // cout<<extract;
                tag=extract.substr(1);
                // cout<<tag.length();
                if(tag[tag.length()-1]=='>')
{
    tag.pop_back();
}                

if(curr.size()>0){
    curr+="."+tag;
}
else{
    curr = tag;
}

}

// for closing tags

else { tag=extract.substr(2,(extract.find('>') - 2));

size_t pos_oe=curr.find("." + tag);

if(pos_oe!=string::npos){
    
    curr = curr.substr(0,pos_oe);
}
else{
    curr ="";
    }
    }
}


else if(extract[0]=='"'){
    size_t pos_oe  =extract.find_last_of('"');
    
    string attr_valle =extract.substr(1,pos_oe-1);
    
    m[attr_name]=attr_valle;
}

else{
    if(extract != "="){
        attr_name =curr + "~" +extract ;
      }
    }
}
}
string query;
for(int i=0;i<q;i++){
getline(cin,query);
    
map<string,string>::iterator itr = m.find(query);
if(itr!=m.end()){
        cout<<itr->second<<endl;
    }
else{
    cout<<"Not Found!"<<endl;
}    
}    
    
    
      return 0;
    
}


