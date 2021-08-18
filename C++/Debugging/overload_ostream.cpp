
// Enter your code here.
ostream& operator <<(ostream &mene,Person ko){
    mene<<"first_name="<<ko.get_first_name()<<",last_name="<<ko.get_last_name();
    return mene;
}
