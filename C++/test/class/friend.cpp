#include <iostream>
using namespace std;

class Game
{
private:
    int score{0};

public:
    void addscore(int value)
    {
        score += value;
    }
    friend void reset(Game &game);
    void show()
    {
        cout << "The value is: " << score << endl;
    }
    // create show overload here
};

void reset(Game &game)
{
    game.score = 0;
}

int main()
{
    Game game1;
    game1.addscore(5);
    game1.show();
    // reset(game1);
    game1.show();

    return 0;
}