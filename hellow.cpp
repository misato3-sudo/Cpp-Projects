#include <iostream>

int main() {

   std::string firstUsername;
   std::string secondUsername;
   int firstPassword;
   int secondPassword;
   int input;

   std::cout << "Command Line Input: ";
   std::cin >> input;

   do{

   std::cout << "Create your first account: \n";

   std::cout << "Enter name: ";
   std::cin >> firstUsername;

   std::cout << "Create your password! (It must be a number)\n";

   std::cout << "Enter password: ";
   std::cin >> firstPassword;

   std::cout << "Your username is " << firstUsername << " | Your password is " << firstPassword << '\n';
 

   std::cout << "Command Line Input: ";
   std::cin >> input;


   }while(input == 0);

   std::cout << "A number other than 0 pressed! Login process ended.\n";


   do{

   std::cout << "Login to your Account. \n";

   std::cout << "Enter Username: ";
   std::cin >> secondUsername;

   std::cout << "Enter Password: ";
   std::cin >> secondPassword;
   
   if(secondUsername != firstUsername || firstPassword != secondPassword){
     std::cout << "unrecognized Credentials. Please enter the Credentials of the Account your attempting to log into.\n";
   }
   else if(secondUsername == firstUsername || secondPassword == firstPassword){
      std::cout << "Logged into " << firstUsername << ".\n";

   }


   std::cout << "Command Line Input: ";
   std::cin >> input;


   }while(input == 11);
  
   return 0;
}