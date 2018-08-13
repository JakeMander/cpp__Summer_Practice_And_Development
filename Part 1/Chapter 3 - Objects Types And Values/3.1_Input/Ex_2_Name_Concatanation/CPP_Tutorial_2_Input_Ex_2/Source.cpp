	#include <std_lib_facilities.h>

	int main()
	{

		/* Notes On Definition and Decleration:
		*  Decleartion - "There Is A Foo Somewhere In This Program".
		*  Defintion - "And Here It Is!".
		*  
		*  Simply put, a Decleration Allows The Compiler To Make References To A Particular Object And Informs It
		*  Of It's Presence Within The Program.
		*
		*  A Definition Allocates Space In Memory For An Instantiated Object, A Function With A Body or Enumerations
		*  And Typedef's. 
		*/

		/* Notes On cin and >>:
		*  The Input Operator (>>) Can Take In Any Input From A Stream That Satisfies The Type Of The Variable
		*  It Is Operating With. However, Input Is Terminated By White Space (Newline, Spaces And Tabs).
		*  For Example, The Input Into The Variable first_name From The String "Jake Mander" Will Only Be "Jake".
		* 
		*  There Are Ways To Work Around This. By Using The Input Operator Twice, When A Space Is Reached,
		*  The Next Set Of Characters Will Be Stored In The Next Variable
		*/

		//string variable definitions. 
		string first_name = "???";
		string second_name = "???";

		
		cout << "Please Enter Your First And Second Names: ";
		
		//Take First Name And Save It To first_name. When Space Encountered, Treat Next Input As A New String And Save it To second_name.
		cin >> first_name >> second_name;

		cout << "Hello " << first_name + " " << second_name + "\n\n";
		keep_window_open();
	}