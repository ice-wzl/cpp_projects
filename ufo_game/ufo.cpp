#include <iostream>
#include "ufo_functions.hpp"


int main() {
  //init two vars for game play 
  std::string codeword = "codecademy";
  std::string answer = "__________";
  //init amount of player misses 
  int misses = 0;
  //init incorrect counter 
  std::vector<char> incorrect;
  bool guess = false;
  //init user input 
  char letter;
  //call greet func 
  greet();

  //while loop to continue while true 
  while (answer != codeword and misses < 7) {
    display_misses(misses);
    display_status(incorrect, answer);

    std::cout << "\nPlease enter your guess: ";
    std::cin >> letter;
    
    for (int i = 0; i < codeword.length(); i++) {
      if (letter == codeword[i]) {
        answer[i] == letter;
        guess = true;
      }
    }
    if (guess == true) {
      std::cout << "\nCorrect!" << "\n";
    }
    else {
      std::cout << "\nIncorrect! The tractor beam pulls the person in further." << "\n";
      incorrect.push_back(letter);
      misses++;
    }
    guess = false;
  }

  end_game(answer, codeword);


}
