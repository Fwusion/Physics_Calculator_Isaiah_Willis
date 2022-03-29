#include<iostream>
#include "Input_Validation_Extended.h"
#include<string>
using namespace std;

void calcMenu();
void equations(string);
//void motion();


void calcMenu()
{
  cout << "\nPhysics Calculator" << endl;
  cout << "1: Velocity" << endl;
  cout << "2: Motion" << endl;
  cout << "3: Newton's 2nd Law" << endl;
  cout << "4: Weight" << endl;
  cout << "5: Momentum" << endl;
  cout << "E: Exit Calculator" << endl;
  cout << "X: Clear Screen" << endl;
}

void equations(string userInput)
{



  if (userInput == "1")
  {
    cout << "Velocity!" << endl;
  }
  else
  {
    cout << "\nInvalid input: Try again." << endl;
  }




  
}