#include <iostream>
#include <iomanip>
using namespace std;

float average(int i1, int i2, int i3)
{
	return (i1 + i2 + i3) / 3.0f; // Originally it was " i1 + i2 + i3 / 3.0f ". This is wrong because the order of operations. By putting parentheses around
	// the numbers being added, the order of operations will work as planned.
}

int main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	cout << "This program calculates the average of three numbers." << endl;
	cout << "First number: "; cin >> n1;
	cout << "Second number: "; cin >> n2;
	cout << "Third number: "; cin >> n3; // here where the third number should be, it is typed in as "n2" instead of "n3" //

	float a = average(n1, n2, n3);

	cout << setprecision(1) << fixed << "The average is " << a << endl;

	return 0;
}