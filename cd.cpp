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

int main()
{
    int a = 2, b = 2, c,d,e;
    c = multiply(a, b);
    d=add(a,b);
    e=sub(a,b);
    cout << c;
    return 0;
}
