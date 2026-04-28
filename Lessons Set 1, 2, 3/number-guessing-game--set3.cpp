#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int tries =0;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "Number Guessing Game." << '\n';

    do{
        std::cout << "Enter a guess between 1-100: ";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "Your guess is too high.\n";
        }
        else if(guess < num){
            std::cout << "Your guess is too low.\n" ;
        }
        else{
            std::cout << "You got it right! The number was indeed " << num << "!\n";
            std::cout << "You got it in " << tries << "!";
        }
    }while(guess != num);


    return 0;
}
