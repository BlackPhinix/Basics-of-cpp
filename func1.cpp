#include<iostream>
using namespace std;


  int sum(int a, int b, int c);
   int product (int a, int b, int c);
    int main()
    {
        int x,y,z, result1, result2;
        cout<<"Enter three numbers\n";
        cin>>x>>y>>z;
        result1 = sum(x,y,z);
        cout<<"the sum is \n"<< result1<<endl;
         result2 = product(x,y,z);
        cout<<"the product is \n"<<result2<<endl;
        cout<<sum(3,5.2,3.3);
        cout<<sum(3,4,5);
        
        return 0;
    }
      int sum(int a, int b, int c)
{
    return a+b+c;
}
    int product (int a, int b, int c)
    {
        return a*b*c;
    }
    float sum(int a, float b, float c)
    {
        return a+b+c;
    }