

//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"


Complex operator+(Complex& we,Complex& me){
    Complex o;
    o.a=we.a+me.a;
    o.b=we.b+me.b;
    return o;
}

ostream& operator<<(ostream& bhara,Complex& o){
    bhara<<o.a<<"+"<<"i"<<o.b<<endl;
    return bhara;
    }




