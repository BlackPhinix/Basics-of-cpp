#include <iostream>
using namespace std;
int main()
{
	char n[1000], hex[1000];
	int temp;
	long int i = 0, j = 0;
	cout << "Enter Binary Number : ";
	cin >> n;
	while (n[i])
	{
		n[i] = n[i] - 48;
		++i;
	}
	--i;
	while (i - 2 >= 0)
	{
		temp = n[i - 3] *8 + n[i - 2] *4 + n[i - 1] *2 + n[i];
		if (temp > 9)
			hex[j++] = temp + 55;
		else
			hex[j++] = temp + 48;
		i = i - 4;
	}
	if (i == 1)
		hex[j] = n[i - 1] *2 + n[i] + 48;
	else if (i == 0)
		hex[j] = n[i] + 48;
	else
		--j;
	cout << "\nHexadecimal Number equivalent to Binary Number : ";
	while (j >= 0)
	{
		cout << hex[j--];
	}
	return 0;
}