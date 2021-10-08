#include<iostream>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Rus");
	int i;
	cout << "cycle for"<<endl;
	for (i = 0; i < 10; i++)
	{
		cout << i<<endl;
	}
	cout << "cycle while"<<endl;
	i = 0;
	while (i < 10) 
	{
		cout << i<<endl;
		i++;
	}
	cout << "cycle do while"<<endl;
	i = 0;
	do {
			cout << i<<endl;
			i++;
	}
	while (i < 10);

}