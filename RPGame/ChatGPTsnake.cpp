/*#include <iostream>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <termios.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, foodX, foodY, score;
int enemies[10][2]; // Maximum 10 enemies
int tailX[100], tailY[100];
int nTail;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void HighScore(){
    if (score>c.HighScore){//add this int and maybe getters and such for a new character variable
       if (score>=100&&score<200){c.get_deadRat();}//if you break 100 for the first time you get a dead rat :}, should work since this only executes if hugher than hishscore
       else if (score>=200&&score<300){c.get_deadRat();}
        else if (score>=300&&score<400){c.get_deadRat();}
         else if (score>=400&&score<500){c.get_deadRat();}
          else if (score>=500&&score<600){c.get_deadRat();}//so each new score breaking 100 up to 500 will net you another rat
        c.HighScore=score;//sets character's highscore variable to the new one thats "score"
        
    }
}

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    foodX = rand() % width;
    foodY = rand() % height;
    score = 0;
    nTail = 0;

    // Generate initial enemies
    for (int i = 0; i < 3; ++i) {
        enemies[i][0] = rand() % width;
        enemies[i][1] = rand() % height;
    }
}

void Draw()
{
    system("clear");
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#";
            bool print = false;
            // Check if current position is an enemy
            for (int k = 0; k < 10; ++k) {
                if (enemies[k][0] == j && enemies[k][1] == i) {
                    cout << "X";
                    print = true;
                    break;
                }
            }
            // Check if current position is the player
            if (i == y && j == x)
                cout << "O";
            // Check if current position is food
            else if (i == foodY && j == foodX)
                cout << "<=~";
            // Check if current position is a tail segment
            else {
                bool isTail = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "o";
                        print = true;
                        isTail = true;
                        break;
                    }
                }
                if (!isTail && !print)
                    cout << " ";
            }
            // If neither enemy, player, food, nor tail, print empty space

            if (j == width - 1)
                cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;
    cout << "Score:" << score << endl;
}

void Input()
{
    struct termios oldt, newt;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);

    char input;
    cin >> input;
    switch (input)
    {
    case 'a':
        dir = LEFT;
        break;
    case 'd':
        dir = RIGHT;
        break;
    case 'w':
        dir = UP;
        break;
    case 's':
        dir = DOWN;
        break;
    case 'x':
        gameOver = true;
        break;
    }

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}

void Logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }
    switch (dir)
    {
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;
        break;
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    default:
        break;
    }
    if (x >= width || x < 0 || y >= height || y < 0) // Check if snake hits boundaries
        gameOver = true;

    // Check if the snake hits its own tail
    for (int i = 0; i < nTail; i++) {
        if (x == tailX[i] && y == tailY[i])
            gameOver = true;
    }

    // Check if the player collided with any enemy
    for (int i = 0; i < 10; ++i) {
        if (x == enemies[i][0] && y == enemies[i][1])
            gameOver = true;
    }

    // Check if the player collected food
    if (x == foodX && y == foodY) {
        score += 10;
        foodX = rand() % width;
        foodY = rand() % height;
        nTail++; // Increment the length of the snake
    }

    // Move enemies randomly
    for (int i = 0; i < 10; ++i) {
        int move = rand() % 4; // Generate random move (0: left, 1: right, 2: up, 3: down)
        switch (move) {
            case 0:
                enemies[i][0]--; // Move left
                break;
            case 1:
                enemies[i][0]++; // Move right
                break;
            case 2:
                enemies[i][1]--; // Move up
                break;
            case 3:
                enemies[i][1]++; // Move down
                break;
            default:
                break;
        }
        // Wrap enemy position around the game area
        if (enemies[i][0] >= width)
            enemies[i][0] = 0;
        else if (enemies[i][0] < 0)
            enemies[i][0] = width - 1;
        if (enemies[i][1] >= height)
            enemies[i][1] = 0;
        else if (enemies[i][1] < 0)
            enemies[i][1] = height - 1;
    }
}*/
