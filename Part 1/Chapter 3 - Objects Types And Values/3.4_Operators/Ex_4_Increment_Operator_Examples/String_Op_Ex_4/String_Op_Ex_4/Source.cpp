	#include "std_lib_facilities.h"

	int main()
	{
		int number_of_words = 0;
		string current;
		string previous = " ";

		cout << "Input: ";
		while (cin >> current)
		{
			++number_of_words;
			if (current == previous)
			{
				cout << "\nWord Number: " << number_of_words
					 << "\nRepeated: " + current << "\n";
			}

			else
			{
				cout << "\nWord Number: " << number_of_words
					 << "\nNew Word: " + current;
			}

			previous == current;
			cout << "\nInput: ";
		}

		keep_window_open();
		return 0;
	}