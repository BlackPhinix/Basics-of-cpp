#include<iostream>
using namespace std;

int fib (int n){ 
   if (n<=1) { 
      return fib(n-1)+fib(n-2);
   } 
    else {
   return 1;
      }
  }
int main()
{
int num;
cout<<"Enter fib number #\n";
cin>>num;
cout<<fib(num);
return 0;
}