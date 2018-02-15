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

  cout << "What is your first name?" << endl;

  cin >> firstname;

  cout << "What is your last name?" << endl;

  cin >> lastname;


  //tell fortune

  char firstnameinitial = firstname.at(0);
  
  char lastnameinitial = lastname.at(0);

  cout << "Welcome, " << firstnameinitial << "." << lastnameinitial << "., here is your fortune..." << endl;

  cout << "your lucky number is " << firstname.length() << endl;

  if ( firstname[0] == 65 || firstname[0] == 69 || firstname[0] == 73 || firstname[0] == 79 || firstname[0] == 85 || firstname[0] == 97 || firstname[0] == 101 || firstname[0] == 105 || firstname[0] == 111 || firstname[0] == 117 ) {

    cout << "You are destined to be famous!" << endl;

  } else {

    cout << "you should keep a low profile." << endl; 

  }

  if ( lastname[lastname.length() - 1 ] == 65 || lastname[lastname.length() - 1 ] == 69 || lastname[lastname.length() - 1 ] == 73 || lastname[lastname.length() - 1 ] == 79 || lastname[lastname.length() - 1 ] == 85 || lastname[lastname.length() - 1 ] == 97 || lastname[lastname.length() - 1 ] == 101 || lastname[lastname.length() - 1 ] == 105 || lastname[lastname.length() - 1 ] == 111 || lastname[lastname.length() - 1 ] == 117 ) {

    cout << "You have already met your true love." << endl;

  }
  
  cout << "have a good day!" << endl;

  return 0;
}
