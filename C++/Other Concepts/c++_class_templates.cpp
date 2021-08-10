



int start_up() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}

int r = start_up();

#define endl '\n';


template< typename A>
class AddElements{
    public:
    A element;
    AddElements(A var){
        element=var;
    }
    A add(A d){return d+element;}
    
// ios_base::sync_with_stdio(0);
// cin.tie(0);

};

template <>
class AddElements <string>{
    string element;
    public:
    AddElements(string var){
        element=var;
    }  
    
    string concatenate(string var){
        string f=element +var;
        return f;
    } 
};

/*Write the class AddElements here*/

