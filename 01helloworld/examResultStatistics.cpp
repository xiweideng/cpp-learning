#include <bits/stdc++.h>
using namespace std;

int main_37()
{
    //declare a score array.
    int score[3][3]=
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    //compute the rows and columns of the array.
    int rows=sizeof(score)/sizeof(score[0]);
    int columns=sizeof(score[0])/sizeof(score[0][0]);
    //declare the names array.
    string names[]= {"Zhang San","Li Si","Wang Wu"};
    for (int i=0; i<rows ; i++ )
    {
        //initiate a result sum
        int sum=0;
        for (int j=0; j<columns ; j++ )
        {
            sum+=score[i][j];

        }
        cout << "The sum of scores of "<<names[i]<<" is "<<sum << endl;
    }
    return 0;
}
