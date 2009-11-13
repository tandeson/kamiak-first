/***************************************************************
Title: Example 1
Origional Author: Thomas Anderson
Most Recent Author: $Author$
Creation Date: November 11th 2009
Last Update Date: $Date$
SVN Location: $HeadURL$

****************************************************************/

//******************
//* Include file(s)*
//******************
// This file pulls in code that allows us to send data to the screen so a
//  user (like us!) can see it. We will be using the fucntion cout, which is 
//  declared in the iostream header file.
#include <iostream>

//*************************
//* Namespace declaration *
//*************************

// Don't worry about this for now, this just make our code easier to read.
//  if we didn't have this, we'd need to type std::cout instead of just cout
//  below in main().
using namespace std;

// *************
// * Functions *
// *************

// Main Function
//
// The main function is a special case. It's the function the computer always
//  runs first. It is always in the format
//  int main()
//     or
//  int main(void)
//  they both mean the same thing. If there is no main() function, the program
//  won't compile.
//
// The int below tells the computer we are going to return an integer variable
//  when the function is finished running (see the 'return 0;' call at the bottom)
// main() tells the computer we have a function called main, which doesn't take
//  any paramaters (also called arguments sometimes.)
int main()
{ // the { and } brakets tell the computer where main start and ends.

	// Take the text (also called a string) and pass it to cout.
	// cout is a function which will dump the text to the standard 
	// output, in this case the screen.
	cout << "Hello World\n";

	// It's good practice to return a 0 from main. In most cases it
	// doesn't matter, but sometimes other program will look at this to
	// see if main quit the way it was intened to. 
	return 0;
}