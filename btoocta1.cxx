#include <iostream>
#include <math.h>

using namespace std;

int binary_to_octal(long int binary)
{
int octal = 0, decimal = 0, i = 0;

while(binary != 0)
{
decimal += (binary%10) * pow(2,i);
++i;
binary/=10;
}

i = 1;

while (decimal != 0)
{
octal += (decimal % 8) * i;
decimal /= 8;
i *= 10;
}

return octal;
}

int main()
{
long int binary;

cout <<"\n Enter a binary number: ";
cin >> binary;

cout << "\nOctal Equivalent : " << binary_to_octal(binary) << endl;

return 0;
}