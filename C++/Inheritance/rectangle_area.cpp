


class Rectangle{
    public:
    int width,height;
    
    int display(){
        cout<<width<<" "<<height<<endl;
        return  0;
    }
    };
class  RectangleArea :public Rectangle{
    public:
    void read_input(){
        cin>>width>>height;
    }
    int  display(){
        cout<<width*height<<endl;
      return width*height;
    }

};


