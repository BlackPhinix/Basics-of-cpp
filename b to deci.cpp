#include <iostream>
using namespace std;
int main()

{
    int num, binary_val, decimal_val = 0, base = 1, rem;
    cout<<"Enter a binary number only on 1s and 0s \n";
    cin>> num;
    binary_val = num;
    while (num>0)
    {
        rem = num % 10;
        decimal_val = decimal_val + rem * base;
        num = num / 10;
        num = num / 10;
        base = base*2;
    }
    cout<<"the binary num is "<<binary_val<<"\n";
    cout<<"the converted decimal is "<<decimal_val;
    return 0;
}
