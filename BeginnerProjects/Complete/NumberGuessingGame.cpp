/*
MD: Rashedul Hasan
ISTT
Bangladesh

 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

const int easy = 10;
const int mid = 7;
const int hard = 5;
void getresult(int userchoice);

void getinput(int &);
void decoration(int);
void play(int);
int main(void)
{
    srand(time(0));
    while (true)
    {
        int userChoice{};
        decoration(40);
        std::cout << "This is a Number Guessing Game\n You have to guess a Number between 1 -100:\n Have Fun........."
                  << std::endl;
        decoration(40);
        std::cout << "1.Easy Level\t2.Medium Level\t3.Hard Level\t0.Exit" << std::endl;
        getinput(userChoice);

        play(userChoice);
    }

    return 0;
}

void decoration(int n)
{
    while (n--)
        std::cout << "=";
    std::cout << std::endl;
}

void play(int userChoice)
{
    if (userChoice == 0)
        exit(0); // its not working
    else if (userChoice > 3 || userChoice < 1)
        return;
    else
    {
        getresult(userChoice);
    }
}

void getresult(int userchoice)
{
    int level, randomnumber = rand() % 100 + 1, userGuess{};
    if (userchoice == 1)
        level = easy;
    else if (userchoice == 2)
        level = mid;
    else
        level = hard;

    int stepCounter{level};
    std::cout << "You have \"" << level << "\" Chances to Guess the Number:\n";
    do
    {
        std::cout << "Guess a Number: " << std::endl;
        getinput(userGuess);
        if (userGuess != randomnumber && stepCounter > 1)
        {
            (userGuess > randomnumber) ? std::cout << "Guess Lower Number" << std::endl : std::cout << "Guess Higher Number" << std::endl;
        }
        else if (userGuess == randomnumber)
        {
            std::cout << "Wow....You Guessed the Number within '" << level - stepCounter + 1 << "' steps\n\n"
                      << std::endl;
            return;
        }
    } while (--stepCounter);
    std::cout << "Sorry You couldn't Guess the right Number \n Please try again. Thank you\n\n"
              << std::endl;
}

void getinput(int &input)
{
    std::cin >> input;
    while (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Please Enter Correctly:";
        std::cin >> input;
    }
}