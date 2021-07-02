#include <iostream>
using namespace std;

char gradecalc(float mark);
string remarkcalc(char grade);
void displayresult(char grade, string remark);

int main() {
	
	float mark;
	char remark;

	cout<<"How much did you score?\n";
	cin>>mark;

	displayresult(gradecalc(mark), remarkcalc(gradecalc(mark)));
}

char gradecalc(float mark) {
	
	if(mark>=90) {
		return 'A';
	} else if(mark >= 75 && mark< 90) {
		return 'B';
	}
	else if(mark>=60 && mark<75) {
		return 'C';
	}
	else if(mark>=50 && mark<60) {
		return 'D';
	}
	else {
		return 'F';
	}
}

string remarkcalc(char grade) {

	string detail;

	switch (grade) {
		case 'A':
			detail = "Excellent";
			break;		
		case 'B':
			detail = "Very Good";
			break;
		case 'C':
			detail = "Good";
			break;			
		case 'D':
			detail = "Pass";
			break;			
		case 'F':
			detail = "Fail";
			break;
	}

	return detail;
}

void displayresult(char grade, string remark) {
	cout << "Your grade is " << grade << " | Your remark is " << remark << endl;
}


























































































































































































































































































































































































