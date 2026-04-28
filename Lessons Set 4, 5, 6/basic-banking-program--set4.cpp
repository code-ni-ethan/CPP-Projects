#include <iostream>
#include <limits>

double depositMoney();
double withdrawMoney();
double showBalance();

    double balance = 0;
    double amount = 0;
    bool operational = true;
    int choice;

int main(){

    do {
    std::cout << "Welcome! What would you like to do? \n";
    std::cout << "1. Deposit Money \n";
    std::cout << "2. Withdraw Money \n";
    std::cout << "3. Show Balance \n";
    std::cout << "4. Exit \n";
    if(!(std::cin >> choice)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid choice. Please enter a number.\n";
        continue;
    }

    switch(choice){
        case 1: 
        depositMoney();
        break;

        case 2: withdrawMoney();
        break;

        case 3: showBalance();
        break;

        case 4:
        std::cout << "Okay, thank you for using!";
        break;

        default:
        std::cout << "Invalid choice.\n";
    }
}while(operational == true && choice != 4);

    return 0;
}

double depositMoney(){
        std::cout << "How much would you like to deposit?: ";
        std::cin >> amount;

            if(amount < 0){
            std::cout << "Your amount can't be less than zero. \n";
            return balance;
        }
        else{
        balance += amount;

        std::cout << "A sum of " << "$" << balance << " has been deposited to your account.\n";
        }

    return balance;
}
double withdrawMoney(){
        std::cout << "How much would you like to withdraw?: ";
        std::cin >> amount;

        if(amount < 0){
            std::cout << "You can't withdraw less than zero. \n";
            return balance;
        }
        else if(amount > balance){
            std::cout << "Your balance is not enough.\n";
        }
        else{
       std::cout << "A sum of " << "$" << amount << " will be withdrawn from your account.\n";

        balance -= amount;

        showBalance();
        }

    return balance;

}
double showBalance(){
    std::cout << "Your balance is now " << "$" << balance << '\n';
    return balance;
}
