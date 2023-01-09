#include <iostream>
#include <string>
using namespace std;


int main()
{
	string name;

	cout << "May I know your name?" << endl;
	getline(cin, name);
	cout << "Hello " << name << endl;

	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Enter two numbers: ";
	cin >> a >> b;
	c = a + b;
	cout << "Result: " << c << endl;

}


//  Comment
