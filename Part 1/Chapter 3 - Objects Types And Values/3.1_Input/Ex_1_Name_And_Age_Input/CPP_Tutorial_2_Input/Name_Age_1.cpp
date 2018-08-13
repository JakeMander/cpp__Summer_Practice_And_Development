	#include "std_lib_facilities.h"

	int main()
	{
		string first_name;
		int age;

		cout << "Please Enter Your First Name: ";
		cin >> first_name;
		
		cout << "Please Enter Your Age: ";
		cin >> age;
		
		cout << "Hello, " << first_name << " (Age " << age << ")\n";
		system("pause");
	}