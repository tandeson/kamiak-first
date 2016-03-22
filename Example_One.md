# Summary #
> Goals:
    * Get a IDE (Integrated Development Enviorment) installed
    * Get a SVN client installed
    * Learn the basics of the IDE / SVN client.
    * Build a VERY simple program, look at the parts.

> Files:
    * example1.cpp

> Assumptions:
    * You are using a Windows XP / Windows Vista / Windows 7 PC
    * You do not have a C++ IDE Installed
    * You do not have a SVN client installed.

> If any of these assumptions are wrong, e-mail me so I can work with you to provide instructions which will work for you!

# Instructions #

**First - be sure you have permission to install software on the computer your going to use. TortisSVN and Microsoft Visual Studio 2008 Express edition are free. If the person who owns the computer has any questions about these program, they can e-mail me.**

Visual Studio Express 2008 C++ Takes up about 1 GB on the hard drive.
TortoiseSVN takes up about 20 MB on the hard drive.

  1. Install Visual Studio Express.
    1. Download the Visual Studio 2008 Express C++ installer from [here](http://www.microsoft.com/express/download/). (See the bottom of the page).
    1. Once the download is finished, launch the installer. (e.g. double click on vcsetup.exe)
    1. Click "next"
    1. Accept the license, and click "next".
    1. Un-select "Microsoft Silverlight Runtime" and "Microsoft SQL Server 2008", we won't be using either one of these. Then click "next".
    1. click "next".
    1. Wait while Visual Studio downloads and installs itself.
    1. click "exit", the install should be complete.
  1. Install TortoiseSVN.
    1. Download the TortoiseSVN installer from [here](http://tortoisesvn.net/downloads).
      * You probably want the 32-bit installer listed first. If your not sure, use download that one.
    1. Once the installer downloads, launch it.
    1. click "next".
    1. Accept the License, and click "next".
    1. click "next".
    1. click "install", and wait while the client installs.
    1. click "finish"
    1. When asked, restart your computer by clicking "yes".
  1. Download the Example1.cpp file
    1. Open up "My Documents".
    1. Open up the "Visual Studio 2008" folder.
      * If this folder doesn't exist, then create it.
    1. Open the "Projects" folder.
      * If this folder doesn't exist, then create it.
    1. Right click to get a menu, select "SVN Checkout...".
      * If you don't see "SVN Checkout..." then TortoiseSVN is not properly installed.
    1. Copy the line below into the field "URL of Repository:".
```
http://kamiak-first.googlecode.com/svn/trunk/learningCpp/trunk/Example1
```
    1. Make sure the last part of the line for "Checkout Directory" is \Example1
    1. Click "ok".
    1. Wait for the download to finish, and then click "ok".
    * You should now have a directory called Example1, with one file in it called example1.cpp. You may or may not see a directory called .svn (depending on your windows settings). If you see the file and directory, you've successfully used SVN to checkout a file! Congratulations!
  1. Create a Visual Studio Project with the Example1.cpp file
    1. Launch "Microsoft Visual C++ 2008 Express Edition"
      * I'm running XP, so it's Start->Programs->Microsoft Visual Studio Express Edition 2008->Microsoft Visual Studio C++ Express Edition 2008. In vista or windows 7 I think you can just type in Visual Studio and pick Microsoft Visual Studio C++ Express Edition 2008 from the results.
    1. Create a new project by selecting File->new->project.
    1. Select Project Type: General
    1. Select Template Empty Project.
    1. for the name, type in Example1
    1. Click "ok".
    1. Right click on "source file" and select add->existing item...
    1. Select example1.cpp and click "Add".
    1. You should now see "example1.cpp" listed on the left of the screen under source files.
  1. Build the file into a program.
    1. Select build -> build solution from the menu.
    1. You should see an output something like
```
------ Build started: Project: Example1, Configuration: Debug Win32 ------
Compiling...
example1.cpp
Linking...
Embedding manifest...
Build log was saved at "file://c:\Documents and Settings\Beaker\My Documents\Visual Studio 2008\Projects\Example1\Debug\BuildLog.htm"
Example1 - 0 error(s), 0 warning(s)
========== Build: 1 succeeded, 0 failed, 0 up-to-date, 0 skipped ==========
```
  1. Run it!
    1. If you got here, your almost done!
    1. Select Debug->Start without debugging.
    1. A new window should open which simply says "Hello World".
    1. Congratulations! You've written and run your first program.
    1. Now take some time to read over example1.cpp and see if you can follow what's happening.
  1. Optional: Make changes and see what happens.
    1. Can you figure out how to add you name to the program output?
    1. Can you make multiple lines of data come out?