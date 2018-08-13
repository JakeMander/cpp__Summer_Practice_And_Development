	#include <std_lib_facilities.h>

	int main()
	{
		const double conversion_rate = 1.609;
		double user_input = 0;
		double distance_kilometers = user_input * conversion_rate;

		cout << "\tThe Following Program Will Convert Miles To Kilometers\n"
		     << "\n\tPlese Enter A Value In Miles (Enter A Letter To Exit): ";

		while (cin >> user_input || user_input <= 0)
		{
			
			if (user_input <= 0)
			{
				cout << "**Invalid Entry: Value Must Be Greater Than 0**";
			}

			else
			{
				cout << "Distance (Km): " << distance_kilometers;
			}

		}
		return 0;
	}