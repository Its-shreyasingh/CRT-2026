#include<iostream>              //STATIC FIELD
using namespace std;

class score{
    public:
    static int _score;          //By using static, you are telling the compiler:
                             //"Create only one instance of this variable in memory, and let every object of this class share it.
    void updateScore()
    {
        cout<<"\nSCORE: "<<++_score;
    }
};
int score::_score=0;
int main()
{
    score objA,objB;
    objA.updateScore();
    objB.updateScore();
    return 0;
}