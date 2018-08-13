
	/* Drill Sourced From: p.83 - p.84, Stroustrup.

	DRILL 1: Write A Program That Produces A Simple Form Letter Based On User Input. Prompt The User
	To Enter His Or Her First Name And Have The Program Write "Hello (first_name)" Where first_name
	Is The Name Entered By the User. Modify The Code To Change The Prompt to "Enter The Name Of The
	Person You Want To Write To" And Change The Output To "Dear (first_name),. Don't Forget The Comma

	DRILL 2: Add An Introductory Line Or Two, Like "How Are You? I Am Fine. I Miss You". Be Sure To
	Indent The First Line. Add a Few More Lines of Your Choosing - It's Your Letter.

	DRILL 3: Now Prompt The User For The Name Of Another Friend And Store It In friend_name; Add A Line
	"Have You Seen (friend_name) Lately?".

	DRILL 4: Declare a char Variable called friend_sex and Initialise It's Value To 0. Prompt The User
	To Enter 'm' If The Friend Is Male, or 'f' If The Friend Is Female. Assign The Value to friend_sex
	and Use if statements To Print A Suitable Response.

	DRILL 5: Prompt The User To Enter The Age of the Recipient and Assign It To An int Variable Age.
	And Have Your Program Write A Greeting. If Age Is Greater Than 110 Or Less Than 0, Write An Error
	Message Using the simple_error() Function Provided by Bjarne's Header.

	DRILL 6: Add The Following Validation:
	- If Your Friend Is Under 12, Write "Next Year You Will Be age+1"
	- If Your Friend Is 17, Write "Next Year You Will Be Able To Vote".
	- If Your Friend Is Over 70, Write "I Hope You Are Enjoying Retirement".

	DRILL 7: Add "Yours Sincerely" Followed By Two Blanks For A Signature, Followed By Your Name.
	*/

	#include <std_lib_facilities.h>

	int main()
	{
		string first_name = " ";
		string friend_name = " ";
		char friend_sex = ' ';
		int age = 0;

		cout << "Enter The Name Of The Recipient: ";
		cin >> first_name;

		cout << "\nEnter The Age Of The Recipient: ";
		cin >> age;

		cout << "\nEnter The Name Of Your Friend You Haven't Seen In Ages: ";
		cin >> friend_name;

		cout << "\nEnter The Sex Of Your Friend You Haven't Seen In Ages: ";
		cin >> friend_sex;

		cout << "\nDear, " << first_name << "\n\n";
		cout << "\tHow Are You Today. The Weather Is Excellent Here In Moscow.\n"
			<< "\tIt Has Been A Very Long Time Since We Have Last Spoken. I Hope You Are Well.\n";

		if (age > 0 && age < 100)
		{
			cout << "\tI Hear It Was Recently Your Birthday! How Old Are You Now??? You Must Be " << age
				<< " Years Old! Incredible!\n";

			if (age < 12)
			{
				cout << "\n\tNext Year You Will Be " << ++age << " Years Old!\n";
			}

			if (age == 17)
			{
				cout << "\n\tNext Year You Will Be Old Enough To Vote!\n";
			}

			if (age > 70)
			{
				cout << "\n\tI Hope You Are Enjoying Retirement!\n";
			}

		}

		else
		{
			simple_error("**You Must Be Kidding**");
		}

		cout << "\n\tHow Is " << friend_name << "? I Haven't Seen Them In Ages!\n";

		if (friend_sex == 'm' || friend_sex == 'M')
		{
			cout << "\n\tIf You See " << friend_name << " Tell Him I Say Hi!\n";
		}

		else if (friend_sex == 'f' || friend_sex == 'F')
		{
			cout << "\n\tIf You See " << friend_name << " Tell Her I Say Hi!\n";
		}

		else
		{
			cout << "\n\n\t**Error With Gender**\n";
		}

		cout << "\n\tSincerely,\n\n\n"
			<< "\tJake Mander\n\n";

		keep_window_open();
		return 0;
	}

		#include <std_lib_facilities.h>

		int main()
		{
			string first_name = " ";
			string friend_name = " ";
			char friend_sex = ' ';
			int age = 0;

			cout << "Enter The Name Of The Recipient: ";
			cin >> first_name;

			cout << "\nEnter The Age Of The Recipient: ";
			cin >> age;

			cout << "\nEnter The Name Of Your Friend You Haven't Seen In Ages: ";
			cin >> friend_name;

			cout << "\nEnter The Sex Of Your Friend You Haven't Seen In Ages: ";
			cin >> friend_sex;

			cout << "\nDear, " << first_name << "\n\n";
			cout << "\tHow Are You Today. The Weather Is Excellent Here In Moscow.\n"
				<< "\tIt Has Been A Very Long Time Since We Have Last Spoken. I Hope You Are Well.\n";

				if (age > 0 && age < 100)
				{
					cout << "\tI Hear It Was Recently Your Birthday! How Old Are You Now??? You Must Be " << age
						<< " Years Old! Incredible!\n";
				
					if (age < 12)
					{
						cout << "\n\tNext Year You Will Be " << ++age << " Years Old!\n";
					}

					if (age == 17)
					{
						cout << "\n\tNext Year You Will Be Old Enough To Vote!\n";
					}

					if (age > 70)
					{
						cout << "\n\tI Hope You Are Enjoying Retirement!\n";
					}
				
				}

				else
				{
					simple_error("**You Must Be Kidding**");
				}
			
				cout << "\n\tHow Is " << friend_name << "? I Haven't Seen Them In Ages!\n";
			
				if (friend_sex == 'm' || friend_sex == 'M')
				{
					cout << "\n\tIf You See " << friend_name << " Tell Him I Say Hi!\n";
				}

				else if (friend_sex == 'f' || friend_sex == 'F')
				{
					cout << "\n\tIf You See " << friend_name << " Tell Her I Say Hi!\n";
				}

				else
				{
					cout << "\n\n\t**Error With Gender**\n";
				}
			
				cout << "\n\tSincerely,\n\n\n"
				<< "\tJake Mander\n\n";

			keep_window_open();
			return 0;
		}