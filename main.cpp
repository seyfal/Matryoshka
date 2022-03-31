/* ---------------------------------------------
Program 1: Matryoshka Dolls
        Prompt for the number of dolls and display
        ASCII Matryoshka dolls in decending order
        above each other.

Course: CS 141, Fall 2021. Tues 5pm lab
System: Mac using Visual Studio Code
Author: Seyfal Sultanov 
---------------------------------------------

ASCII graphics gives:

_____/\\\\\\\\\________/\\\\\\\\\\\__________/\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_        
     ___/\\\\\\\\\\\\\____/\\\/////////\\\_____/\\\////////__\/////\\\///__\/////\\\///__       
      __/\\\/////////\\\__\//\\\______\///____/\\\/_______________\/\\\_________\/\\\_____      
       _\/\\\_______\/\\\___\////\\\__________/\\\_________________\/\\\_________\/\\\_____     
        _\/\\\\\\\\\\\\\\\______\////\\\______\/\\\_________________\/\\\_________\/\\\_____    
         _\/\\\/////////\\\_________\////\\\___\//\\\________________\/\\\_________\/\\\_____   
          _\/\\\_______\/\\\__/\\\______\//\\\___\///\\\______________\/\\\_________\/\\\_____  
           _\/\\\_______\/\\\_\///\\\\\\\\\\\/______\////\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_ 
            _\///________\///____\///////////___________\/////////__\///////////__\///////////__        

*/

#include<iostream> // for cin and cout

#include<iomanip> // for setw. The number in setw(...) is the total of blank spaces including the printed item.

using namespace std; // so that we don't need to preface every cin and cout with std::

int main() {

   // Display the menu and get the user choice
    int menuOption = 0;
    cout << "Program 1: Matryoshka Dolls            \n"
        << "Choose from among the following options:  \n"
        << "   1. Display original graphic  \n"
        << "   2. Display Matryoshka Dolls         \n"
        << "   3. Exit the program          \n"
        << "Your choice -> ";
    cin >> menuOption;

   // Handle menu option of 1 to display custom ASCII graphics
   if (menuOption == 1) {
      // Display ASCII graphics
      std::cout << R"(
    _____/\\\\\\\\\________/\\\\\\\\\\\__________/\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_        
     ___/\\\\\\\\\\\\\____/\\\/////////\\\_____/\\\////////__\/////\\\///__\/////\\\///__       
      __/\\\/////////\\\__\//\\\______\///____/\\\/_______________\/\\\_________\/\\\_____      
       _\/\\\_______\/\\\___\////\\\__________/\\\_________________\/\\\_________\/\\\_____     
        _\/\\\\\\\\\\\\\\\______\////\\\______\/\\\_________________\/\\\_________\/\\\_____    
         _\/\\\/////////\\\_________\////\\\___\//\\\________________\/\\\_________\/\\\_____   
          _\/\\\_______\/\\\__/\\\______\//\\\___\///\\\______________\/\\\_________\/\\\_____  
           _\/\\\_______\/\\\_\///\\\\\\\\\\\/______\////\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_ 
            _\///________\///____\///////////___________\/////////__\///////////__\///////////__        
        )" << '\n';

} //end if( menuOption == 1)  // menu option to display custom graphic

// Handle menu option of 2 to display dolls
else if (menuOption == 2) {
   // Prompt for and get the number of dolls.
   int numberOfDolls = 0;
   cout << "Number of dolls -> ";
   cin >> numberOfDolls;
   // outer loop for printing the dolls according to the number entered
   for (int i = 0; i < numberOfDolls; i++) {
      // printing the head of the doll
      cout << setw(numberOfDolls + 4) << "( )\n";
      // inner loop for printing the upper body of the doll
      for (int j = 0; j <= i; j++) {
         // printing the formatted left side of the doll's upper body
         cout << setw(numberOfDolls - j) << "/";
         // printing the middle character working as neck of the doll
         if (i % 2 == 0 && j == 0) {
            cout << " - ";
         } else if (j == 0) {
            cout << " : ";
         } else {
            // printing the required number of spaces between the left and right slashes in one line
            for (int k = 0; k <= (2 * (j + 1)); k++) {
               cout << " ";
            }
         }
         // printing the right side of the doll's upper body
         cout << "\\\n";
      }
      // inner loop to print the lower body of the doll
      for (int j = i; j >= 0; j--) {
         // printing the formatted left side of the doll's lower body
         cout << setw(numberOfDolls - (j - 1)) << "\\";
         // printing the required number of spaces between the left and right slashes in one line
         for (int k = 0; k <= (2 * j); k++) {
            cout << " ";
         }
         // printing the right side of the doll's lower body
         cout << "/\n";
      }
      // printing the end character or foot of the doll
      cout << setw(numberOfDolls + 3) << "-\n";
   }
} // end if( menuOption == 2) // menu option to display dolls

// Handle menu option of 3 to exit
else if (menuOption == 3) {
   exit(0);
}

cout << "Exiting" << endl;
return 0;
}