/***************************************************************
Title: Example 1
Origional Author: Thomas Anderson
Most Recent Author: $Author$
Creation Date: 
Last Update Date: $Date$
SVN Location: $HeadURL$

****************************************************************/

// Include file(s)
#include <iostream>

// Namespace declaration
using namespace std;

// Main Function
// The int below tells the computer we are going to return an integer variable
//  when the function is finished running
// main() tells the computer we have a function called main, which doesn't take
//  any paramaters (also called arguments sometimes.)
int main()
{
	// Take the text (also called a string) and pass it to cout.
	// cout is a function which will dump the text to the standard 
	// output, in this case the screen.
	cout << "Hello World\n";

	// It's good practice to return a 0 from main. In most cases it
	// doesn't matter, but sometimes other program will look at this to
	// see if main quit the way it was intened to. 
	return 0;
}