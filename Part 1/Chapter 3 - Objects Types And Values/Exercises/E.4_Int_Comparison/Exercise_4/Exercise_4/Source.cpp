	#include <std_lib_facilities.h>

	int main()
	{
		bool valid_input = false;
		int val1 = 0;
		int val2 = 0;
		string user_input = "";
		stringstream stream;

		do {
				cout << "\n\tPlease Enter A Numeric Value: ";
				getline(cin, user_input);
				stream.str(user_input);

				if (stream >> val1)
				{
					cout << "\tFirst Number Successfully Saved!\n";
					valid_input = true;
				}

				else
				{
					cout << "\tFirst Number Save Has Failed \n";
					cin.clear();
				}
				stream.clear();
		} while (!valid_input);

		valid_input = false;
		
		do
		{
			cout << "\n\tPlease Enter Another Numeric Value: ";
			getline(cin, user_input);
			stream.str(user_input);

			if (stream >> val2)
			{
				cout << "\tSecond Number Successfully Saved\n\n";
				valid_input = true;
			}

			else
			{
				cout << "\tSecond Number Has Failed\n";
				cin.clear();
			}
			stream.clear();
		} while (!valid_input);
		
		cout << "\tStored Values:\n"
			 << "\n\tValue 1: " << val1
			 << "\n\tValue 2: " << val2 << "\n\n";
		
		keep_window_open();
		return 0;
	}