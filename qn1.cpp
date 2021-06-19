#include<iostream>
using namespace std;


 
double initial(double price, double down_payment);
double mortgage(double initial);
double taxrate(double price);
double housecost(double mortgageCost, double taxrate);
    int main()
    {
       
     int x,y,z, result1;
        cout<<"Enter three numbers\n";
        cin>>x>>y>>z;
        result1 = housecost(x,y,z);
        cout<<"the sum is \n"<< result1<<endl;
        
       
        
        return 0;

        
        return 0;
    }
      double initial(double price, double down_payment)
{
       return (price - down_payment);
}
    double mortgage(double initial)
    
           {
    cout <<"The annual mortgage cost is: "<<mortgage(initial);
    cout <<endl;
    
    const double loan_balance = 0.03; 
    const double loan_interest = 0.06; 
    double total;
    loan_balance = (initial * 0.03);
    loan_interest = (initial * 0.06);
    total = loan_balance + loan_interest;
    return (total);
    }
   double taxrate(double price)
    
           {
    cout <<"The tax saving is "<<taxrate;
    cout <<endl;
    

    const double interest_payment = 0.35; 
    return (housecost * interest_payment);

}
    double housecost(double mortgageCost, double taxrate)
    
   {
    cout <<"The cost of a new house for the first year of ownership is "
         <<housecost<<endl;
    
    return (mortgage - taxrate);

}