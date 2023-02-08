// Example Program for lab3
//
// Author - Nathaniel Snyder
// Lab 4
// A loop that can only be broken if correct digits are inputed
//
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
  int number;   // Variable for number entered by user

  int answer;   // Used to determine if loop should be broken = number entered

  do {
    // Ask for user input
    cout << "Enter a number, and I'll compute the answer:";
    cin >> number;
    // Uses a switch to determin outputs based on input
    switch (number) {
    case 5820:
      cout << "You have been deemed worthy!\n";
      answer = 5820;
      break;
    case 0:
      answer = 0;
      cout << "You've got nothing!\nTry again.\n";
      break;
    case 1:
      answer = number*2;
      cout << "Well, at least you have something\nBut it's not enough, try again.\n";
      break;
    case 13:
      answer = -13;
      cout << "You're very unlucky aren't you.\nTry again.\n";
      break;
    case 21:
      answer = 22;
      cout << "Well, I'll give you one more, but it's still not enough.\n"
	   << "Try again.\n";
      break;
    default:
      answer = -1;
      cout << "That number is so bogus, I'm taking what little you have away from you.\n"
	   << "Try again, and be smart about it this time.\n";
      break;
    }
    // While loop that stops when correct digits are given
  } while (answer != 5820);
  
  cout << "You've succeeded in getting out of this dumb program!\n"
       << "Congratulations\n";

  return (EXIT_SUCCESS);
}
