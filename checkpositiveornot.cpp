// Program to print positive number entered by the user
// If the user enters a negative number, it is skipped

#include <iostream>
using namespace std;

int main() 
arm{

  int number;

  cout << "Enter an integer: ";
  cin >> number;
  if (number > 0) 
  {
    cout << "You entered a positive integer: " << number << endl;
  }

  cout << "This statement is always executed.";

  return 0;
}