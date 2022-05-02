#include "functions.h"

int main()
{
  string reset = "\x1b[0m";
  string input = "";

  
  do
  {
    calcMenu();
    cout << "\nPlease choose an option: ";
    input = validateString(input);
    equations(input);
    
  }while(input != "e" && input != "E");
  cout << "\nPeace Out" << endl;
  cout << reset;
  return 0;
}
