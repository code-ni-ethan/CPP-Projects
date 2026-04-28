#include <iostream>
#include <stack>
#include <thread>
#include <chrono>

typedef std::stack<std::string> stackOfNumbers_t; 

void displayStack(stackOfNumbers_t & numbers);
void stackAdder(stackOfNumbers_t & numbers);
void stackPopper(stackOfNumbers_t & numbers);

int main(){

stackOfNumbers_t numbers;
    int choice;

    do{
        std::cout << "--------------------------\n";
        std::cout << "Stack Operation Simulator \n";
        std::cout << "--------------------------\n";
        std::cout << "What would you like to do?: \n";
        std::cout << "1: Display stack \n";
        std::cout << "2: Add to stack \n";
        std::cout << "3: Remove from stack \n";
        std::cout << "4: Exit \n";
        std::cin >> choice;

        switch(choice){
            case 1: displayStack(numbers);
            break;

            case 2: stackAdder(numbers);
            break;

            case 3: stackPopper(numbers);
            break;

            case 4: 
            std::cout << "Okay, bye!\n";
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
            break;

            default:
            std::cout << "Enter only 1-4.\n";
        }

    }while(choice != 4);

    return 0;
}

void stackAdder(stackOfNumbers_t & numbers){

std::string num;
bool operation = true;
        std::cout << "---Remember, the last number you enter will be at the top of the list---\n";
    do{
        std::cout << "Enter number (000 to Exit): ";
        std::getline(std::cin >> std::ws, num);
    if(num == "000"){
        std::cout << "---Stack saved!---\n";
        break;
    }
    numbers.push(num);
    }while(operation == true);
}
void displayStack(stackOfNumbers_t & numbers){

    int choice;

    stackOfNumbers_t temp = numbers;

    if(temp.empty()){
     std::cout << "We can't display anything because your stack is empty.\n";
    }
    else{
    std::cout << "How would you like to display your stack?\n";
    std::cout << "1: \n x, \n x, \n x,\n";
    std::cout << "2: x, x, x\n"; 
    std::cout << ">> ";
    std::cin >> choice;

    std::cout << "Your stack will be cloned upon display.\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); std::cout << ".";
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); std::cout << "..";
    std::this_thread::sleep_for(std::chrono::milliseconds(50)); std::cout << "...\n\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));

    if(choice == 1){
    std::cout << "---Start of Stack---: \n";
    while(!temp.empty()){
        std::cout << temp.top() << '\n';
        temp.pop();
    }
    std::cout << "---End of Stack---\n";
}
    else if(choice == 2){
    std::cout << "---Start of Stack---: \n";
    while(!temp.empty() & temp.size() != 1){
        std::cout << temp.top() << ", ";
        temp.pop();
    }
        std::cout << temp.top();
        temp.pop();
    std::cout << '\n';
    std::cout << "---End of Stack---\n";
    }
    }
}
void stackPopper(stackOfNumbers_t & numbers){
    int choice;

    do{
        if(numbers.empty()){
            std::cout << "Nothing to pop. Stack is empty.\n";
            break;
        }
        std::cout << "The top of your stack is: " << numbers.top() << '\n';
        std::cout << "Pop? (1 to Pop, 0 to Exit): ";
        std::cin >> choice;

        if(choice == 1){
            numbers.pop();
        }
        else if(choice == 0){
            std::cout << "Okay, bye!\n";
            break;
        }
    }while(choice != 0 && !numbers.empty());
}
