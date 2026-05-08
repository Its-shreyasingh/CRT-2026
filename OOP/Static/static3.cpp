#include<iostream>              //STATIC FIELD
using namespace std;

class score{
    public:
    static int _score;
    void updateScore()
    {
        cout<<"\nSCORE: "<<++_score;
    }
};
int score::_score=0;
int main()
{
    score objA,objB;
    score::updateScore;
    objA.updateScore();
    score::updateScore;
    objA.updateScore();
    objB.updateScore();
    
    return 0;
}