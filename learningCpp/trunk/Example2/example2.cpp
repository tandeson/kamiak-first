/***************************************************************
Title: Example 2
Original Author: Thomas Anderson
Most Recent Author: $Author$
Creation Date: November 11th 2009
Last Update Date: $Date$
SVN Location: $HeadURL$

****************************************************************/

//******************
//* Include file(s)*
//******************
// This file pulls in code that allows us to send data to the screen so a
//  user (like us!) can see it. We will be using the function cout, which is 
//  declared in the iostream header file.
#include <iostream>

//*************************
//* Namespace declaration *
//*************************
using namespace std;

// ********************
// * Function Headers *
// ********************

// add() function
//
// This function adds two numbers, and returns the results.
//
// The declaration bellow tells the computer the somewhere bellow we will define
//  a function that takes in two integers (called x and y), and returns the
//  the results as an integer.
int add(int x, int y);

// overflow() function
//
// This function prints out a 1 byte value, and then overflows it.
void overflow();

// *****************
// * Function Code *
// *****************

//------------------------------------------------------------------------------
// main() Function
//
// Standard startup function.
int main()
{

	// Take the text (also called a string) and pass it to cout.
	// cout is a function which will dump the text to the standard 
	// output, in this case the screen.
	cout << "Hello World\n";
    
    // Declare two variables. Both are type int. numberBefore is 
    //  initialized to 5, and numberAfter is not initialized.
    int numberBefore = 5;
    int numberAfter;

    // Show the user the value of our two numbers
    cout << " Before we add, numberBefore is " << numberBefore;
    cout << " and numberAfter is " << numberAfter << endl;
    
    // call our function, passing in the value of numberBefore for both terms.
    numberAfter = add(numberBefore,numberBefore);
    
    // show the user the values of our two numbers
    cout << " After  we add, numberBefore is " << numberBefore;
    cout << " and numberAfter is " << numberAfter << endl;
    
    // Call our overflow() function to look at what what happens if we
    //  exceed our variable's range.
    overflow();
    
	// It's good practice to return a 0 from main. In most cases it
	// doesn't matter, but sometimes other program will look at this to
	// see if main quit the way it was intended to. 
	return 0;
}

//------------------------------------------------------------------------------
// Implementation of add()
// 
// This is where we tell the computer what to do when the add function is called
//
// The function header must match our declaration down here, or the code will
//  not build. The compiler even pays attention to capitalization. so if this was
//  Add() instead of add() it would give us an error.
int add(int x, int y)
{
    // A debuging note - this allows us to see when this function is called.
    cout << " ** We called add(" << x << "," << y << ")! **\n";
    
    // take x and y, add them together and return the result
    return x + y;
}

//------------------------------------------------------------------------------
// Implementation of overflow()
void overflow()
{
    // A debuging note - this allows us to see when this function is called.
    cout << " ** We called overflow()! **\n";
    
    // declar a 1 byte variable, with a value of 100.
    unsigned char ourLocalChar = 100; // unsigned char can hold from 0 to 255.
    
    // Display the current value of ourLocalChar
    //
    // The (int) is used to type cast from a char to a int. This is because
    //  cout wants to show a char as a single character. 
    //
    // if you want to see this removed (int) from the line below, and instead of
    // showing 100 your program output will show a "d". This is because 100 in
    // ASCII represents a d. you can see a conversion table at 
    // http://www.asciitable.com/ if your interested...
    cout << " Our Local Char variable is " << (int)ourLocalChar << endl;
    
    // now, the max value of char is 255. What happens if I add 156 to
    //  ourLocalChar which is at 100?
    ourLocalChar = ourLocalChar + 157;
    
    // Display the current value of ourLocalChar
    cout << " Our Local Char variable is " << (int)ourLocalChar << endl;
}