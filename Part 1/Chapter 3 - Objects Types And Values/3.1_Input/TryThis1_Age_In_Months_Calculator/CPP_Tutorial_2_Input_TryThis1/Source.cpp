	/*				     Try This 1: p.65 - Programing Principles And Practices Using C++
	*		
	*		A Simple Program That Utilises Both Input And Output To Take In A Users First Name, Last Name
	*		And Age, Output These Values And Then Perform Arithmetic To Calculate The Users Age In Months
	*
	*/

	#include <std_lib_facilities.h>

	int main()
	{
		string first_name = "UNKNOWN";
		string second_name = "UNKNOWN";
		double age = 0;

		cout << "Please Enter Your First Name, Second Name, And Age: ";
		cin >> first_name >> second_name >> age;

		cout << "\nFirst Name: " << first_name + "\n";
		cout << "Second Name: " << second_name + "\n";
		cout << "Age: " << age << "\n";
		cout << "Age (In Months): " << age * 12 << "\n\n";

		keep_window_open();
	}