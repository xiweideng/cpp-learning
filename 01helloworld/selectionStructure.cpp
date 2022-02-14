#include <iostream>
using namespace std;

int main16()
{
//    // single-branch
//    int score=0;
//    cout << "Please input your score:";
//    cin >> score;
//    cout << "Your score is " << score<< endl;
//    if (score>600)
//    {
//        cout << "Congratulations!You entered the first batch of undergraduate." << endl;
//    }
//    // dual-branch
//    int score=0;
//    cout << "Please input your score:";
//    cin >> score;
//    cout << "Your score is " << score<< endl;
//    if (score>600)
//    {
//        cout << "Congratulations!You entered the first batch of undergraduate." << endl;
//    }
//    else
//    {
//        cout << "Sorry!You failed the first batch of undergraduate." << endl;
//    }
    // multi-branch
    int score=0;
    cout << "Please input your score:";
    cin >> score;
    cout << "Your score is " << score<< endl;
    if (score>600)
    {
        cout << "Congratulations!You entered the first batch of undergraduate." << endl;
    }
    else if (score>500)
    {
        cout << "Congratulations!You entered the second batch of undergraduate." << endl;
    }
    else if (score>400)
    {
        cout << "Congratulations!You entered the third batch of undergraduate." << endl;

    }
    else
    {
        cout << "Sorry!You failed all the batches of undergraduate." << endl;
    }

    return 0;
}
