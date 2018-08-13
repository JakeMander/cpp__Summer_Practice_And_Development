	#include <std_lib_facilities.h>

	int main()
	{
		/* "Narrowing" Is Caused By Unsafe Conversions. For Example, 2.7 Stored As A Double Then Assigned
		    To An int Will Truncate The Decimal. To Help Prevent This, C++11 Introduced The Bracket List
			Notation { } As A Means Of Preventing Loss Of Precision And Narrowing. Any Conversions That
			Result In Narrowing Will Throw An Error At Compilation As Opposed To Standard Initialisation
			Using '=' Which Lets Truncation And Narrowing Occur.										 */

		// ERROR 1: double to int Conversion Of A Decimal Value. Decimal Is Truncated Which Is Invalid
		double x{ 2.7 };
		int y{ x };

		// ERROR 2: int to char Conversion Could Result In Narrowing If Value Exceeds 258. Error Is Thrown.
		int a{ 100 };
		char b{ a };

		// ERROR 3: b1 Integer Literal Exceeds Capacity Of char Type. b2 Does Not However And Is Accepted.
		char b1{ 1000 };
		char b2{ 48 };

		/*NOTE: Bjarne Notes That Bracket List Notation Is Handy To Use In Instances Where Conversions 
		  May Result in Lost Precision Or When You Want The Value To Be Checked Prior To A Conversion. */
		

	}