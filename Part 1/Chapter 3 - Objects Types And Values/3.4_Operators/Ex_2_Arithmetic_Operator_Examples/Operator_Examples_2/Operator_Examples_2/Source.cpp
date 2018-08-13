/*				An Expansion Of The Previous Program, Using The Example Provided By Bjarne Stroustrup On
*							p.67 in "Programming Principles And Practices Using C++"
*
*/

	#include <std_lib_facilities.h>

	int main()
	{
		double n;

		cout << "\tPlease Enter A Floating Point Value: ";
		cin >> n;

		cout << "\n\n\tn = " << n << "\n";
		cout << "\t3n = " << 3 * n << "\n";
		cout << "\t2n = " << n + n << "\n";
		cout << "\tn^2 = " << n * n << "\n";
		cout << "\tn/2 = " << n / 2 << "\n";
		cout << "\tSquare Root Of n = " << sqrt(n) << "\n\n";

		keep_window_open();
	}