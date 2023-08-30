#include <iostream>
#include <stdlib.h>
#include <ctime>

int main(){
    int user_choice;
    int user_choice2;
    int user_choice3;
    int user_choice4;
    int weapon = 0;
    int keys = 0;

    double user_score = 0;

    std::cout << "Welcome to the escape room!\n";

    std::cout << "You see two doors labeled: \n";
    std::cout << "1) Upstairs\n";
    std::cout << "2) Downstairs\n";
    std::cout << "Which one do you choose?: \n";
    std::cin >> user_choice;
    if (user_choice == 1){
        user_score += 1;
        std::cout << "Good Choice!\n";
        std::cout << "You see two doors in front of you: \n";
        std::cout << "1) Keys\n";
        std::cout << "2) Weapon\n";
        std::cout << "Which do you choose?: \n";
        std::cin >> user_choice2;
        if (user_choice2 == 1){
            user_score += 1;
            keys += 1;
        }
        else if (user_choice2 == 2){
            user_score -= .5;
            weapon += 1;
        }
        else{
            std::cout << "Invalid Input!\n";
        }
        std::cout << "You see two doors in front of you: \n";
        std::cout << "1) Front Door\n";
        std::cout << "2) Backdoor\n";
        std::cout << "Which do you choose?: \n";
        std::cin >> user_choice3;
        if (user_choice3 == 1 and keys == 1){
            std::cout << "Congratulations, you escaped!!!\n";
            user_score += 1;
            std::cout << "User Score: " << user_score << "\n";
        }
        else if (user_choice3 == 1 and keys == 0){
            std::cout << "Sorry you do not have the keys to the door, and the monster got you when attempting to open the door.\n";
            user_score -= 1;
            std::cout << "User Score: " << user_score << "\n";


        }
        else if (user_choice3 == 2 and keys == 1){
            std::cout << "You unlocked the door and came face to face with the monster, sorry you loose.\n";
            user_score -=1;
            std::cout << "User Score: " << user_score << "\n";

        }
        else if (user_choice3 == 2 and weapon == 1){
            std::cout << "You came face to face with the monster and slayed it, but you are still stuck in the house.\n";
            user_score += 1;
            std::cout << "User Score: " << user_score;
        }
        else{
          std::cout << "Invalid Input\n";
        }
    }
    else if (user_choice == 2){
        user_score -= 1;
        std::cout << "You see two doors in front of you: \n";
        std::cout << "1) Tunnel\n";
        std::cout << "2) Trap door\n";
        std::cout << "Which do you choose?: \n";
        std::cin >> user_choice4;
        if (user_choice4 == 1){
          //init random number generator 
          srand(time(NULL));
          //init chance var to hold rando number
          int chance;
          for (int i=1; i<11; i++){
              chance = (rand() % 10);
              }
          std::cout << "Chance: " << chance << "\n";

          if (chance % 2 == 0){
              std::cout << "You took a chance and escaped!!!\n";
              std::cout << "User Score: " << user_score;
          }
          else if (chance % 2 != 0){
              std::cout << "You took a chance and the monster got you.\n";
              std::cout << "User Score: " << user_score;
          }
          else{
              std::cout << "Invalid Input";
          }
        }
        else if (user_choice4 == 2){
            int chance;
            srand(time(NULL));
            for (int i=1; i<11; i++){
                chance = (rand() % 10);
            }
            std::cout << "Chance: " << chance << "\n";
            if (chance == 10 || chance == 9 || chance == 8){
                std::cout << "You took a big chance and escaped!!!!\n";
                std::cout << "User Score: " << user_score;
            }
            //else if (chance != 10 || chance != 9 || chance != 8){
            else{
                std::cout << "You took a big chance and the monster got you.\n";
                std::cout << "User Score: " << user_score;
            }
        }
        else {
            std::cout << "Invalid Input\n";
        }

        }
      
    else{
        std::cout << "Invalid Input!\n";
    }

}

