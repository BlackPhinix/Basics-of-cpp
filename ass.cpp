#include<iostream>
using namespace std;


double initial(double price, double down_payment);
double mortgage(double initial);
double taxrate(double price);
double housecost(double mortgageCost, double taxrate);
    int main()
    {
        float price, mortgage result1, result2;
        cout<<"initial payment\n";
        cin>>x;
        result1 = initial(x,y,z);
        cout<<"mortgage \n"<< result1<<endl;
         result2 = mortgage(x,y,z);
        cout<<"the product is \n"<<result2<<endl;
      
        
        return 0;
    }
       double initial(double price, double down_payment)
{
       return (price - down_payment);
}
    int product (int a, int b, int c)
    {
        return a*b*c;
    }
    float sum(int a, float b, float c)
    {
        return a+b+c;
    }