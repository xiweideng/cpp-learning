#include <iostream>
using namespace std;
#include <ctime>
int main20()
{
    //generate a random number between 1 and 100 by using the system time as seed.
    srand((unsigned int)time(NULL));
    int randNum=rand()%100 + 1;
    cout << "The system has generated a random number between 1 and 100." << endl;
//    cout << randNum << endl;
    //initiate a number
    int guessNum=0;
    //get player input number.
    while (1)
    {
        cout << "Please enter the number you guess:";
        cin>>guessNum;
        if (guessNum<randNum)
        {
            cout << "Sorry,the number you guess is too small." << endl;
        }
        else if (guessNum>randNum)
        {
            cout << "Sorry,the number you guess is too big." << endl;
        }
        else
        {
            cout << "Congratulations!the number you guess is correct." << endl;
            break;
        }

    }
    return 0;
}
