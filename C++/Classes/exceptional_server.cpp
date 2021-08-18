
 
try {
    cout<<Server::compute(A, B)<<endl;
}
catch(bad_alloc &yrr){
    cout<<"Not enough memory"<<endl;
}
catch(exception &yrr){
    cout<<"Exception: "<<yrr.what()<<endl;
}

catch(...){
    cout<<"Other Exception"<<endl;
}
