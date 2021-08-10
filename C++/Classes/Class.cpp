// #  SETTER & GETTER

#include <iostream>
#include <sstream>
using namespace std;

class Student{
int age;
int standard;
string first_name,last_name;

public:
Student(){
    age=0;standard=0;first_name.clear(); last_name.clear();
    
}
    void set_age(int ageoo){
        age=ageoo;}

    void set_standard(int standardew){
    standard=standardew;}
    
    void set_first_name(string first_nam23e){
        first_name =first_nam23e;
    }    
    
    void set_last_name(string fewf){
        last_name=fewf;
    }
    
    
    int get_age(){return age;}
    string get_last_name(){return last_name;}
    string get_first_name(){return first_name;}
    int get_standard(){return standard;}
    
    string to_string(){
        stringstream ffe;
        ffe <<age<<","<<first_name<<","<<last_name<<","<<standard;
        return ffe.str();
    }
    

};


int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}