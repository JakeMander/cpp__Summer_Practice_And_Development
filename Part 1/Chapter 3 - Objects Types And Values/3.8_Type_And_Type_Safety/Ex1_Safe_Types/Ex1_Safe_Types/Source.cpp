	/* REMEMBER: It's Best Practice To Initialise Values (Give Them A Value) Before Using Them!
	   For Example:

	   double x;
	   double y = x;			The Meaning Of Y Is Undefined.
	   double z - 2.0+x;		The Meaning Of Z and Y Is Undefined.

	   y and z Will Cause Errors Within The Program As They Are Assigned An Undefined Value.   */

	#include "std_lib_facilities.h";

	int main()
	{
		/* SAFE CONVERSION: Char's Can Be Converted To Int's And Vice Versa. The ASCII 
		   Value Of The Character Is Used As The Integer, Or The Integer Is Converted To The 
		   ASCII Value And The Character Is Then Displayed.                                    */
		
		//Variable C gets is assigned 'c' as a value.
		char c = 'x';

		//Variable i1 is an int but c is a char. i1 is assigned the ASCII value of c.
		int i1 = c;

		//i1 is an int. As such, it is assigned the ASCII value of x.
		int i2 = 'x';

		//c2 takes the int value for i1 and converts it to the character of it's assocaited ASCII value.
		char c2 = i1;

		cout << c << ' ' << i1 << ' ' << i2 << ' ' << c2 << '\n';

		/*								OTHER SAFE CONVERSIONS								
											- bool to char.
											- bool to int.
											- char to int.
											- char to double.
											- int to double.																			*/	

		bool b1 = true;
		char c3 = b1;
		int i3 = b1;
		double d1 = b1;
		
		cout << b1 << ' ' << c3 << ' ' << i3 << ' ' << d1 << '\n';

		keep_window_open();
		return 0;
	}