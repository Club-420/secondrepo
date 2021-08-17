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
int main()
{
    int a = 2, b = 2, c,d,e,f,g;
    float div;
    c = multiply(a, b);
    d=add(a,b);
    e=sub(a,b);
    div=division(a,b);
    f=incre(a);
    g=incre(b);
    return 0;
}

