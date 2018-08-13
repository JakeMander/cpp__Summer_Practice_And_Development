	#include "std_lib_facilities.h"

	int main()
	{
		string current = " ";
		string previous = " ";
		
		cout << "Input: ";
		while (cin >> current)
		{
			if (previous == current)
			{
				cout << "\nRepeated Word: " << current << '\n';
			}

			else
			{
				cout << "\nWord: " << current + '\n';
			}

			previous = current;
			cout << "Input: ";
		}

		return 0;
	}