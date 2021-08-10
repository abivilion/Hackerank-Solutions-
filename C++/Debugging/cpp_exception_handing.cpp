

void process_input(int v) {
    try{
    int d = largest_proper_divisor(v);
    cout << "result=" << d << endl;}
    catch (invalid_argument qw)
    {
        cout<<qw.what()<<endl;
    }
    cout<<"returning control flow to caller";
}

