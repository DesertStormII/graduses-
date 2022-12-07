#include <iostream>

using namespace std;

int main()
{
	double c, f;//превращение градусов в цельсии на градусы фаренгейты или наоборот
	char name;
	cout << "choose celsius or faraheit";
	cin >> name;
	if (name == 'c')
	{
		cout << "convert degrees to celsius to degrees fahrenheit" << endl;
		cout << "degrees Celsius = ";
		cin >> c;
		f = (c * 9 / 5) + 32;
		cout << "degrees to fahrenheit = " << f;
	}
	else if (name=='f')
	{
	cout << "convert degrees to fahrenheit to degrees celsius" << endl;
	cout << "degrees fahrenheit = ";
	cin >> f;
	c = (f - 32) * 5 / 9;
    cout << "degrees to Celsius = " << c;
	}
	
	
	return 0;
}
