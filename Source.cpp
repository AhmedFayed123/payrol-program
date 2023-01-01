#include<iostream>
using namespace std;
int main() {
	double x, y;
	cout << "enter your hourly rate";
	cin >> x;
	cout << "enter hours";
	cin >> y;
	if (7.50 > x < 18.25&&0 < y < 40)
		cout << "salary is :" << x * y << "$" << "\n";
	return 0;
}