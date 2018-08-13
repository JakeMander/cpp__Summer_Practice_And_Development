	#include <std_lib_facilities.h>

	int main()
	{
		double d = 0;
		
		cout << "Please Enter A Value: ";

		while (cin >> d)
		{
			cout << '\n';
			int i = d;
			char c = i;
			int i2 = c;

			cout << "d = " << d << '\n'
				 << "i =" << i << '\n'
				 << "i2 =" << i2 << '\n'
				 << "char = " << c << '\n';

			cout << "\nPlease Enter A Value: ";
		}
		
		keep_window_open();
		return 0;
	}