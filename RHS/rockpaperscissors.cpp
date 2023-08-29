#include <iostream>
#include <stdlib.h>

int main() {
  srand  (time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  if (user == 1 and computer == 1 or user == 2 and computer == 2 or user == 3 and computer ==3){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "User: " << user << "\n";
    std::cout << "Tie\n";
  }
  else if (user == 1 and computer == 2){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "Computer Wins\n";
  }
  else if (user == 1 and computer == 3){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "User Wins\n";
  }
  else if (user == 2 and computer == 1){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "User Wins\n";
  }
  else if (user == 2 and computer == 3){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "Computer Wins\n";
  }
  else if (user == 3 and computer == 1){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "Computer Wins\n";
  }
  else if (user == 3 and computer == 2){
    std::cout << "Computer: " << computer << "\n";
    std::cout << "User Wins\n";
  }
  else{
    std::cout << "Invalid input\n";
  }


}
