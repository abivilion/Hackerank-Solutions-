
#include<numeric>

class Person{
   public: 
    int age;
    string name;
   virtual void getdata()=0;
   virtual void putdata()=0;
    
};
class Professor:public Person{
    
public:
   int publications;
   static int id;
   virtual void getdata(){
     cin>>name>>age>>publications;
 }
 
   virtual void putdata(){
       cout<<name<<" "<<age<<" "<<publications<<" "<<++id<<endl;
    //    return 0;
   }
         
};
int Professor::id=0;


class Student: public Person{
   public: 
    static int id;
    int marks[6];int suml;
    
   virtual void getdata(){
        cin>>name>>age;
        for (int i=0;i<6;i++){
            cin>>marks[i];
        }
        
        }
    virtual void putdata(){
       cout<<name<<" "<<age<<" "<<accumulate(marks,marks+6,suml)<<" "<<++id<<endl;
    
    }  
      };
int Student::id=0;



