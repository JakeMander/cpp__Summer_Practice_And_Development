	#include <std_lib_facilities.h>

	int main()
	{
		bool integer_check = false;
		const double conversion_rate = 1.609;
		double distance_miles = 0;
		double distance_kilometers = 0;
		string user_input = "";
		stringstream validation_stream;

		cout << "\tThe Following Program Will Convert Miles To Kilometers\n";
		do
		{
			cout << "\n\tPlese Enter A Value In Miles (Enter A Letter Or Symbol To Exit): ";

			//Take user input and save to "cin" buffer. Move through "cin" buffer and pass each char to user_input until '\n' is reached.
			getline(cin, user_input);

			//Take whatever is stored in user_input and insert it into stringstream.
			validation_stream.str(user_input);
			
			if (validation_stream >> distance_miles)
			{
				cout << "\t**stringstream Has Worked And Passed A Value Of:" << distance_miles << " **\n";
				integer_check = true;
				distance_kilometers = distance_miles * conversion_rate;
				cout << "\n\tDistance in Kilometers Is: " << distance_kilometers;
				cout << "\n\t**************************************************************************\n";
				validation_stream.clear();
				
			}

			else
			{
				cout << "\t** stringstream Has Passed A Non Numeric Value Of: " << validation_stream.str() << " **\n";
				cout << "\n\t** EXITING PROGRAM **\n";
				cout << "\t";
				integer_check = false;
			}

		} while (integer_check);

		keep_window_open();
		return 0;
	}