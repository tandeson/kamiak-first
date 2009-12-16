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

// This is a class declaration. This code declares a class of type 'StudentClass' . A class is made up 
//  of two parts. Data (e.g. variables) and functions. Items listed in the public section can be used
//  by anyone. Items listed in the private section can ONLY be used by code which is part of the class.
//
// When a class is used to create an instance it is called an object. A class is like a description of something
//  as well as a list of action you can take on that thing. 
// An example.
//  - You know that any given tree: (The idea of a tree is kind of like a class)
//    ->Has an age, a number of branches, and a heigh. (these would be the private variables)
//    ->can be chopped down, or watered, or trimmed. ( these would be the methods)
//  - There is a old elm tree outside you house. ( this would be an example of a tree object)
//  - There is a young oak tree by your school. ( this would also be an example of a tree object)
//  The oak and elm are like instances of the generic tree. You could, say, chop down the oak and the elm would
//   remain the same. This is similar to what happens with classes and objects.
class StudentClass
{
public:
	// Constructor 
    StudentClass(string newName,int ageOfStudent);
	// Destructor
	~StudentClass();

	// Accessor Methods
	string GetName() const { return m_Name; };
	int GetAge() const { return m_age; };

	// Other Public Methods
	void Show();
	void AgeByOneYear() { m_age = m_age + 1;};

protected:
	// We're not going to use this yet
private:
	// Disable the copy constructor
	// Private Members (e.g. Varriables)
	string m_Name;
	int m_age;
};// End StudentClass

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

	// Create a third student, but this time use a class
	StudentClass StudentFromClassOne("Wandering Walter",18);
	StudentClass StudentFromClassTwo("Arnold Artless", 22);

	// Show our student data
	ShowStudent(StudentTwo);
	ShowStudent(StudentOne);
	StudentFromClassOne.Show();
	StudentFromClassTwo.Show();

	// Age our students
	//  Notice how the students from a structure can be aged by whatever amount we want, while the studenst from a class can only be aged by
	//  one year. Not only that, student from the structre could have their age go down! (we could subtract from age), while there is NO way 
	//  for the student in the class to have their age go down. 
	StudentOne.age += 1;
	StudentTwo.age += 2;
	StudentFromClassTwo.AgeByOneYear();
	StudentFromClassOne.AgeByOneYear();

	// Show our student data
	ShowStudent(StudentTwo);
	ShowStudent(StudentOne);
	StudentFromClassOne.Show();
	StudentFromClassTwo.Show();

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

//*****************************
// StudentClass Implimentation
//*****************************

// To tell the compiler that a function is part of a class we have to add the
// <class name>:: identifer (e.g. 'StudentClass::') to the function name. 
StudentClass::StudentClass(string newName,int ageOfStudent) :
    // This is called an initilizer list, and is used to set the values of member varaibles 
    // before the code is run inside the brackets below.
    m_Name(newName), 
    m_age(ageOfStudent)
{
	// Do Nothing
}

// This is the destructor, it allows us to clean up anything we need to when a object is destroyed.
StudentClass::~StudentClass()
{
	//Do nothing
}

void StudentClass::Show()
{
	// basically the same code as the ShowStudent() function above. However in this case we can just 
	//  use the m_Name and m_age, and the compiler knows which ones we are talking about based on which
	//  object we use this method on.
	cout << " Student Name is: " << m_Name << ", age:" << m_age << " years.\n";
}