

class Message {
string msg;
int instance_index;

public: 
    inline static int index;
    Message() {}
    Message(string text) :msg(text) {}
     string &get_text() {
       
        // cout<<"kkkkkkkk------"<<msg<<endl;
        return msg;
    }
    
    int &get_index() {
        // cout<<"get index: "<<instance_index<<endl;
        return instance_index;
        
    }      
  
    
    void set_index(int i){
        // cout<<"set index: "<<i<<endl;
        
        instance_index =i;
        // cout<<" assigned instance index: "<<instance_index<<endl;
    }
    // operator overloading
bool operator < (Message& other){
    
    // cout<<"-----------------------------------------------"<<endl;
    
    // cout<<"Other Index: "<<other.get_index()<<endl;
    // cout<<"Instance index: "<<this->instance_index<<endl;
    
    
    
    bool ans = this->instance_index < other.get_index();
    // cout<<"ANSWER:: "<<ans<<endl;


    return ans;
}
};





class MessageFactory {
public:
    MessageFactory() {}
    Message create_message( string& text) {
        Message msg(text);
        msg.set_index(Message::index++);
        return msg; 
        
        }
    };




