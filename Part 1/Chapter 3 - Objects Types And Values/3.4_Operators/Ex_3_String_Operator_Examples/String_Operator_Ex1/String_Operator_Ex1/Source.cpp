/*				An Example Of A Program That Can be Used To Compare Strings Taken From P.68 Of Programming 																
*							Principles And Practice Using C++. The Following Example Builds Further
*								  On The Previous Examples And Creates A Program That 
*									   Concatanates Strings And Compares Them
*																												*/

	#include <std_lib_facilities.h>

	int main()
	{
		string first_string;
		string second_string;

		cout << "Please Enter The First String: ";
		cin >> first_string;

		cout << "\n\nPlease Enter The Second String: ";
		cin >> second_string;

		cout << "\n\nConcatanated String: " << first_string + ' ' + second_string + "\n\n";

		if (first_string > second_string)
			cout << "Second String Is Alphabetically Before The First String\n";

		else
			cout << "First String Is Alphabetically Before The Second String\n";

		keep_window_open();
	}