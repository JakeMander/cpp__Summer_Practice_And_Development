	/*									A Note On std_lib_facilities.h

	   The Following Program Is Written With Guidance From Bjarne Stroustroup's "Programming Principles And
	   Practice Using C++". In It, He Uses His Own Custom std_lib_facilities.h Header File To Add Additional
	   Functionallity And Avoid The Need For #include<library1> #include<library2> #include<library3> etc. etc.
	   The Directory Comntaining This Header File MUST Be Manually Added To The Project By Using The Solution Explorer
	   To Access The Projects Properties. Once There -> Confiugration Properties -> VC++ Directories -> Include 
	   Directories Then Use The Folder Button Found In The Edit Section Of The Drop Down Menu To Add Your File Path
	   And Programs Should Behave As Shown In The Book */

	#include "std_lib_facilities.h"

	int main()
	{
		//"cout" = Character Output
		// << = Output Operator, Declares The Literal String You Wish To Output.
		cout << "Hello World\n";
		cout << "\nHello, Programming!\n";
		cout << "Here We Go!\n";

		// Custom Function Provided By Stroustrup To Prevent Window From Closing. System("pause") also works.
		keep_window_open();
		return 0;
	}