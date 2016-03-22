# Summary #
> Goals:
    * Learn how to declare and use a Function

> Files:
    * example2.cpp
    * Learn a little more about variables.
      * Example of what happens what a variable overflows. In other words, if a variable has a maximum of 255, what happens we we put in 200 and add 100?
      * Examples of declaring (or telling the compiler about) variables.
    * Learn about type casting.

> Assumptions:
    * You have completed Example One
    * You are using a Windows XP / Windows Vista / Windows 7 PC

> If any of these assumptions are wrong, e-mail me so I can work with you to provide instructions which will work for you!

# Instructions #
  1. Download the Example2.cpp file
    1. Open up "My Documents".
    1. Open up the "Visual Studio 2008" folder.
    1. Open the "Projects" folder.
    1. Right click to get a menu, select "SVN Checkout...".
    1. Copy the line below into the field "URL of Repository:".
```
http://kamiak-first.googlecode.com/svn/trunk/learningCpp/trunk/Example2
```
    1. Make sure the last part of the line for "Checkout Directory" is \Example2
    1. Click "ok".
    1. Wait for the download to finish, and then click "ok".
    * You should now have a directory called Example2, with one file in it called example2.cpp. You may or may not see a directory called .svn (depending on your windows settings).
  1. Create a Visual Studio Project with the Example2.cpp file
    1. Launch "Microsoft Visual C++ 2008 Express Edition"
    1. Create a new project by selecting File->new->project.
    1. Select Project Type: General
    1. Select Template Empty Project.
    1. for the name, type in Example2
    1. Click "ok".
    1. Right click on "source file" and select add->existing item...
    1. Select example2.cpp and click "Add".
    1. You should now see "example1.cpp" listed on the left of the screen under source files.
  1. Build the file into a program.
    1. Select build -> build solution from the menu.
    1. You should see an output something like
```
------ Build started: Project: Example2, Configuration: Debug Win32 ------
Compiling...
example2.cpp
Linking...
Embedding manifest...
Build log was saved at "file://c:\Documents and Settings\Beaker\My Documents\Visual Studio 2008\Projects\Example2\Debug\BuildLog.htm"
Example2 - 0 error(s), 0 warning(s)
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```
  1. Run it!
    1. If you got here, your almost done!
    1. Select Debug->Start without debugging.
    1. A new window should open which says:
```
Hello World
 Before we add, numberBefore is 5 and numberAfter is 0
 ** We called add(5,5)! **
 After  we add, numberBefore is 5 and numberAfter is 10
 ** We called overflow()! **
 Our Local Char variable is 100
 Our Local Char variable is 1
Press any key to continue . . .
```
    1. Now take some time to read over example2.cpp and see if you can follow what's happening.
    * How would you write you own function?
    * Can you explain what happened when we overflowed the variable in the function overflow() ?
      * What would the variable have been if we had put 200 into a char, and then added another 200?
    * Try compiling the program without the (int) typecast, and look at the output.