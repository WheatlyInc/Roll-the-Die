/*
*$Id$
*
* Roll the Die, see if you win
*
* Author: John Fahringer
*
* Purpose: Fun little program making use of random number gen
*/

#include <iostream>
#include <limits>  //Necessary for numeric_limits
#include <cstdlib> //Necessary for randomnumgen
#include <ctime> //Necessary for randomnumgen

using namespace std;

int main()
{
    int playersNumber;

    srand(time(0));
    int dice = (rand() % 6) + 1;


    cout << "Welcome to the Random Dice Game! Roll the cube and see if you are a winner!" << endl
         << "Please enter a number 1-6: ";
    cin >> playersNumber;
    cout << endl;

    //check valid input
    while(cin.fail() || playersNumber < 1 || playersNumber > 6)
    {
        //If invalid, inform player to correct mistake
        cout << playersNumber << " is not a valid choice. Please enter a number 1-6:  ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin >> playersNumber;
        cout << "\n";


    }
    cout << endl << "You chose " << playersNumber << "\n\n"

    << "The dice is " << dice << "\n\n";

    if(playersNumber == dice)
    {
        cout << "You win" << endl;
    }
    else
    {
        cout << "You lose" << endl;
    }


    return 0;
}
