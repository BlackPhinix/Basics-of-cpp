//write fibonnachi numbers in cpp
#include <iostream>
using namespace std;

fibonnachi(int n)
{
    int a=0,b=1,c=0;
    if(n==0)
    {
        cout<<a;
    }
    else if(n==1)
    {
        cout<<a<<" "<<b;
    }
    else
    {
        cout<<a<<" "<<b<<" ";
        for(int i=2;i<n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            cout<<c<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"enter the number of fibonnachi numbers you want to print"<<endl;
    cin>>n;
    fibonnachi(n);
    return 0;
}