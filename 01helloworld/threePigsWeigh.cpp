#include <iostream>
using namespace std;

int main18()
{
    //declare three int variables
    int pig1=0;
    int pig2=0;
    int pig3=0;
    //take user input
    cout << "Please input the weight of pig1:" << endl;
    cin>>pig1;
    cout << "Please input the weight of pig2:" << endl;
    cin>>pig2;
    cout << "Please input the weight of pig3:" << endl;
    cin>>pig3;
    //judge which pig is the heaviest.
    if (pig1>=pig2)
    {
        if (pig1>pig3)
        {
            cout << "The pig1 is the heaviest!" << endl;
        }
        else
        {
            cout << "The pig3 is the heaviest!" << endl;
        }
    }
    else
    {
        if (pig2>pig3)
        {
            cout << "The pig2 is the heaviest!" << endl;
        }
        else
        {
            cout << "The pig3 is the heaviest!" << endl;
        }

    }
    return 0;
}
