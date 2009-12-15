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

// This file pulls in code which allows easily handling of text strings with the 
//  string class. (we'll cover classes later..)
#include <string>

//*************************
//* Namespace declaration *
//*************************
using namespace std;


// **************
// * Structures *
// **************

// Here we are declairing a structure. In this case, it is a collection of varaibles.
//  So we know that every student has both a name (hopefully!) and an age. You could add more
//  I stopped at these two for simplicity's sake.
struct student
{
	string Name;
	int    age;
};


// ********************
// * Function Headers *
// ********************

// ShowStudent
//
// This function Displays data about a student. Notice how the structure we declaired
//  about can now be used in place of a varaible.
void ShowStudent(student toShow);

// *****************
// * Function Code *
// *****************

//------------------------------------------------------------------------------
// main() Function
//
// Standard startup function.
int main()
{
	// Create a new "student" structure. In this case define the values using the
	// {} paraters with a list of items.
	student StudentOne = {"Billy The Kid",20 };

	// Create a second student. This one will be set after it is created
	student StudentTwo;
	// Notice how we can use the '.' notation in order to access items in a structure.
	StudentTwo.Name = "Silly Singin' Susan";
	StudentTwo.age = 15;

	// Show our student data
	ShowStudent(StudentTwo);
	ShowStudent(StudentOne);

	// It's good practice to return a 0 from main. 
	return 0;
}

//------------------------------------------------------------------------------
// Implementation of ShowStudent()
// 
// This function knows how to put a student structure out to the display
//
// Since the return type is "void", we don't need a return call in this function
void ShowStudent(student toShow)
{
	cout << " Student Name is: " << toShow.Name << ", age:" << toShow.age << " years.\n";
}

