// Program 1-1.cpp // This program calculates the user's pay.
 #include <iostream>
using namespace std;

int main()
{
	double hours, rate, pay;

	// Get the number of hours worked.
	cout << "How much hours did you work? ";
	cin >> hours;

	// Get the hourly pay rate.
	cout << "What is your hourly pay rate? ";
	cin >> rate;
	
	// Calculate the pay.
	pay = hours * rate;

	// Display the pay.
	cout << "Your pay is $" << pay << endl;
    return 0;
}