//			A Brief Introduction To Operators Within C++. These Are Not Too Disimilar From C#.

	#include <std_lib_facilities.h>
	int main()
	{
		int n1 = 10.0;
		int n2 = 4.0;

		string s1 = "Jake";
		string s2 = "Mander";

		cout << "Addition: \n";
		cout << "\t" << n1 << " + " << n2 << " = " << n1 + n2 << "\n\n";

		cout << "Subtraction: \n";
		cout << "\t" << n1 << " - " << n2 << " = " << n1 - n2 << "\n\n";

		cout << "Multiplication: \n";
		cout << "\t" << n1 << " x " << n2 << " = " << n1 * n2 << "\n\n";

		cout << "Division: \n";
		cout << "\t" << n1 << " ÷ " << n2 << " = " << n1 / n2 << "\n\n";

		cout << "Modulo: \n";
		cout << "\t" << n1 << " % " << n2 << " = " << n1 % n2 << "\n\n";

		cout << "Increment By One: \n";
		cout << "\t" << n1 << " Incremented By One ";
		n1 = ++n1;
		cout << " = " << n1 << "\n\n";

		cout << "Decrement By One: \n";
		cout << "\t" << n1 << " Decremented By One ";
		n1 = --n1;
		cout << " = " << n1 << "\n\n";

		//Note: Brackets Required To Avoid Error. += Operator Causes Confusion Amongst Types Without Brackets.
		cout << "Increment By n: \n";
		cout << "\t" << n1 << "Incremented By n (n = 12) ";
		n1 = n1 += 12;
		cout << " = " << n1 << "\n\n";

		cout << "Concatenation: \n";
		cout << "\t" << s1 << " Concantenated With " << s2 << " = " << s1 + s2 << "\n\n";

		cout << "Add To End: \n";
		cout << "\t" << s1 << " Added To End Of " << s2 << " = " << (s2 += s1) << "\n\n";

		keep_window_open();


	}
