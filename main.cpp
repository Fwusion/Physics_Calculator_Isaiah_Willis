#include "functions.h"

int main()
{
  string input = "";

  
  do
  {
    calcMenu();
    cout << "\nPlease choose an option: ";
    input = validateString(input);
    equations(input);
    
  }while(input != "e" && input != "E");
  cout << "\nPeace Out" << endl;
  return 0;
}
