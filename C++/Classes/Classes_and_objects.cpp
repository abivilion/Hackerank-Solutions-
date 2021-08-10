

// Write your Student class here
class Student{
  int scores[5];
  int sum_up;
  public: Student(){}
      void input(){
          for(int i=0;i<5;i++){
           {
               cin>>scores[i];
               sum_up+=scores[i]; }   
          }}
        int calculateTotalScore(){return sum_up;}  
   
};