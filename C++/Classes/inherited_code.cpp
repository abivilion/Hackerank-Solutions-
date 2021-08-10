

class BadLengthException{
   int n;
   public: 
    BadLengthException(int nwer){n=nwer;}
    int what(){return n;}
};
