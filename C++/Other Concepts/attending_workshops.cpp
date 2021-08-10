

//part1
struct Workshop{
    int start;
    int duration;
    int end;
};



bool compare(Workshop &w1,Workshop &w2){
    return w1.end<w2.end;
}


// part2
struct Available_Workshops {
    int N; //number of workshops student signed for
    vector<Workshop> v; // array of type of  WORKSHOP
    Available_Workshops(int num){
        v=vector<Workshop>(num); //set the size in vector
        N=num; 
        
    }
};




//part 2.1
Available_Workshops *initialize(int start_time[],int duration[],int n)
{
    Available_Workshops *obj = new Available_Workshops(n);
    for(int i=0;i<n;i++){
        // Workshop *obj =new Workshop; // this can be redundant because I already assigned VECTOR of WORKSHOP so I can directly use for assigning elementd into it.
  obj->v[i].start=start_time[i];
  obj->v[i].duration=duration[i];
  obj->v[i].end=start_time[i]+duration[i];
}
// sorting time of workshops accordingly 
sort(obj->v.begin(),obj->v.end(),compare);
return obj;
    
    };
    
    
    
    
// part 2.2    
int CalculateMaxWorkshops(Available_Workshops* ptr){
    int end_time=0; // it helps in attending 1st workshop freely. (endtime=0)
    int valid=0;
    for(int i=0;i<ptr->N;i++)
    
    {
        
        //this checking the start_time of any upcoming meeting and the end_Time of the previous meeting. 
         if(ptr->v[i].start>=end_time){
             
        valid++;
        // this filling endtime of current meeting into the local "end_time" var.
        end_time=ptr->v[i].end;
        
        }
        
    }
    return valid;
};



