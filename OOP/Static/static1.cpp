#include<iostream>
using namespace std;
class score{
    int score=0;
    public:
    void updateScore()
    {
        cout<<"\nSCORE: "<<++score;
    }
};
int main()
{
    score objA,objB;
    objA.updateScore();
    objB.updateScore();
    return 0;
}