#include <iostream>

using namespace std;
int multiply(int, int);

int main()
{
    int a = 2, b = 2, c;
    c = multiply(a, b);
    cout << c;
    return 0;
}

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