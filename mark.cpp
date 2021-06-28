

#include <iostream>
using namespace std;

char gradecalc(float mark);
string remarkcalc(char grade);
void displayresult(char grade, string remark);

int main()
{
	float mark;
	char remark;
	cout<<"Enter the mark\n";
	cin>>mark;


char gradecalc(float mark);

{

cout<<"your mark is="<<mark<<endl;
}


if(mark>=90)
{
	cout<<"A\n";
	
	
}
else if(mark>=75 && mark<90)
{
	cout<<"B\n";

}
else if(mark>=60 && mark<75)
{
	cout<<"C\n";
	
}
else if(mark>=50 && mark<60)
{
	cout<<"D\n";
	
}
else 
{
	cout<<"F\n";
    
}

string remarkcalc(char grade);
{

char grade;

switch (grade)
{
	case 'A':
	cout<<"Excellent\n";
	break;
	
	case 'B':
	cout<<"Very Good\n";
	break;
	
	case 'C':
	cout<<"Good\n";	
	break;
	
	case 'D':
	cout<<"Pass\n";	
	break;
	
	case 'F':
	cout<<"Fail\n";
	break;
	
}



if(mark>=90)
{
cout<<"Excellent\n";	
}
else if(mark>=75 && mark<90)
{
	cout<<"Very Good\n";	
}
else if(mark>=60 && mark<75)
{
	cout<<"Good\n";
}
else if(mark>=50 && mark<60)
{
cout<<"Pass\n";	
}
else 
{
	cout<<"Fail\n";	
}

return 0;
}
}


