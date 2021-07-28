#include <iostream>
using namespace std;
int main ()
{
int list[5];// static array
int *p;
for(int index = 0; index < 5; index ++)
{
    list[index] = index * 10;
}
for(int index = 0; index < 5; index ++)
{
    cout<<list[index]<<" ";
}
cout<<endl;
p = list;
cout<<&list<<endl;
cout<<&p<<endl;
for(int index = 0; index < 5; index ++)
{
    cout<<p[index]<<"  ";
}

int size;

cout<<"Enter the size of array"<<endl;
cin>>size;
p = new int[size];
for(int index = 0; index < size; index ++)
{
    p[index] = index * 10;
}
for(int index = 0; index < size; index ++)
{
    cout<<p[index]<<"  ";
}

return 0;

}

