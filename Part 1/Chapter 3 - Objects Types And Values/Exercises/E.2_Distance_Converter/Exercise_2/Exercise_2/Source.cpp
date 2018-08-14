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

			/*stod Will Throw An Exception When Non-Numeric Characters Are Passed In. Exception Will Be Used
			  To Detect When User Exits Program*/
			try
			{
				distance_miles = stod(user_input);
			}

			//Non Numeric Character Is Passed. Exception Thrown And Validation Set To Exit do while Loop
			catch (const exception e)
			{
				cout << "\n\n\t**NON-INTEGER CHARACTER DETECTED**\n\n";
				integer_check = false;
			}

			//Bypass Calculation If String Is Non-Numeric
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