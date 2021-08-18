#include <iostream>

using namespace std;
int multiply(int x, int y)
{
    return x * y;
}
int add(int x,int y){
    return x+y;
}
int sub(int x, int y){
    return x-y;
}
float division(int x,int y){
    return x/y;
    }
int incre(int x){
    return ++x;
}
int factorial( int b){
    int result = 1;
    for( int i = 1; i <= b; i++){
        result = result * i;
    }
    return result;
}
int main()
{
    int a = 2, b = 2, c,d,e,f,g, fac;
    float div;
    c = multiply(a, b);
    d=add(a,b);
    e=sub(a,b);
    div=division(a,b);
    f=incre(a);
    g=incre(b);
    fac = factorial( b );
    cout<<"mul "<<c<<endl;
    cout<<"add "<<d<<endl;
    cout<<"sub "<<e<<endl;
    cout<<"division "<<div<<endl;
    cout<<"incre "<<f<<endl;
    cout<<"factorial "<<fac;
    
    return 0;
}

