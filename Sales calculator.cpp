#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double* Sales;
	int numDays;

	cout << "How many days of sales? ";
	cin >> numDays;

	Sales = new double[numDays];

	for (int i = 0; i < numDays; i++) {
		cout << "Enter sales for day " << i + 1 << ": ";
		cin >> Sales[i];
	}

	double total = 0, avg = 0;
	for (int i = 0; i < numDays; i++)
	{
		total += Sales[i];
	}

	avg = total / numDays;

	cout << fixed << setprecision(2); //to display double with 2 decimal places
	cout << "Total sales: $" << total << endl;
	cout << "Average Sales: $" << avg << endl;
}