	#include <std_lib_facilities.h>

	int main()
	{
		bool integer_check = true;
		const double conversion_rate = 1.609;
		double distance_miles = 0;
		double distance_kilometers = 0;
		string user_input = "";

		cout << "\tThe Following Program Will Convert Miles To Kilometers\n";
		do
		{
			cout << "\n\tPlese Enter A Value In Miles (Enter A Letter Or Symbol To Exit): ";
			cin >> user_input;

			try
			{
				distance_miles = stoi(user_input);
			}

			catch (const exception e)
			{
				cout << "\n\n\t**NON-INTEGER CHARACTER DETECTED**\n\n";
				integer_check = false;
			}

			if (integer_check)
			{
				if (distance_miles <= 0)
				{
					cout << "\n\n**Invalid Entry: Value Must Be Greater Than 0**\n";
				}

				else
				{
					distance_kilometers = distance_miles * conversion_rate;
					cout << "\tDistance (Km): " << distance_kilometers
						<< "\n\t**********************************************************\n";
				}
			}
		} while (integer_check);

		cout << '\t';
		keep_window_open();
		return 0;
	}