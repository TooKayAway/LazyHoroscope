//Authors: Noah Huff
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
  
  string firstname;

  string lastname;

  //get user input

  cout << "Please Enter your First Name" << endl;

  cin >> firstname;

  cout << "Please Enter your Last Name" << endl;

  cin >> lastname;


  //tell fortune

  char firstnameinitial = firstname.at(0);
  
  char lastnameinitial = lastname.at(0);

  cout << "Welcome, " << firstnameinitial << "." << lastnameinitial << "., here is your fortune..." << endl;

  cout << "Your Lucky Number is " << firstname.length() << endl;

  return 0;
}
