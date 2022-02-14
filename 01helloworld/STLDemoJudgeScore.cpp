#include <bits/stdc++.h>
using namespace std;
class Player
{
public:
    string name;
    double average;
    Player(string name,double average)
    {
        this->name=name;
        this->average=average;
    }

};
void createPlayer(vector<Player>&v,int player_num=5)
{
    for (int i=0;i<player_num ;i++ )
    {
        string name="Player ";
        name+=(65+i);
        double avg=0.0;
        v.push_back(Player(name,avg));
    }
}
void printPlayer(const vector<Player>&v)
{
    for (int i=0;i<v.size() ;i++ )
    {
        cout << "Name:"<<v.at(i).name <<" Average:"<<v.at(i).average<< endl;
    }
}
void score(vector<Player>&v,int judge_num=10)
{
    srand((unsigned int)time(nullptr));
    for (int i=0;i<v.size() ;i++ )
    {
        deque<double> d;
        for (int j=0;j<judge_num ;j++ )
        {
            double mark=rand()%41+60;
            d.push_back(mark);
        }
        //sort
        sort(d.begin(),d.end());
        //erase the maximum and minimum
        d.pop_back();
        d.pop_front();
        //result
        double result=0;
        for (int k=0;k<d.size() ;k++ )
        {
            result+=d.at(k);
        }
        v.at(i).average=result/d.size();
    }
}
int main_134()
{
    vector<Player> v;
    createPlayer(v,5);
//    printPlayer(v);
    score(v,10);
    printPlayer(v);

    return 0;
}
