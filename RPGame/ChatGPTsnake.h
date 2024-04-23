/*#ifndef _SNAKE_GAME_
#define _SNAKE_GAME_

#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>

using namespace std;

const int width = 30;
const int height = 20;
int x, y; // Snake head coordinates
int foodX, foodY; // Rat coordinates
int tailX[100], tailY[100]; // Snake tail coordinates
int nTail; // Length of the snake
int score; // Game score
bool gameOver; // Game over flag
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir; // Snake direction

// Enemy variables
int numEnemies = 5; // Number of enemies
int enemiesX[5], enemiesY[5]; // Enemies coordinates

void Setup()
{
    srand(time(NULL)); // Initialize random seed

    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    foodX = rand() % width;
    foodY = rand() % height;
    score = 0;
    nTail = 0;

    // Initialize enemy positions
    for (int i = 0; i < numEnemies; i++)
    {
        enemiesX[i] = rand() % width;
        enemiesY[i] = rand() % height;
    }
}

void Draw()
{
    system("cls"); // Clear the console

    // Draw the game board
    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            if (j == 0)
                cout << "#"; // Left wall

            bool printSnake = false;
            if (i == y && j == x)
            {
                cout << "O"; // Snake head
                printSnake = true;
            }
            else if (i == foodY && j == foodX)
                cout << "o"; // Rat
            else
            {
                bool printTail = false;
                for (int k = 0; k < nTail; k++)
                {
                    if (tailX[k] == j && tailY[k] == i)
                    {
                        cout << "o"; // Snake tail
                        printTail = true;
                    }
                }
                if (!printTail)
                {
                    bool printEnemy = false;
                    for (int k = 0; k < numEnemies; k++)
                    {
                        if (enemiesX[k] == j && enemiesY[k] == i)
                        {
                            cout << "X"; // Enemy
                            printEnemy = true;
                        }
                    }
                    if (!printEnemy)
                        cout << " ";
                }
            }

            if (j == width - 1)
                cout << "#"; // Right wall
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
        cout << "#";
    cout << endl;

    cout << "Score: " << score << endl;
}

void Input()
{
    if (_kbhit()) // Check if a key is pressed
    {
        switch (_getch()) // Get the pressed key
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
    }
}

void Logic()
{
    // Move the tail
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

    // Move the snake head
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
    }

    // Check boundaries
    if (x >= width) x = 0; else if (x < 0) x = width - 1;
    if (y >= height) y = 0; else if (y < 0) y = height - 1;

    // Check collision with tail
    for (int i = 0; i < nTail; i++)
    {
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;
    }

    // Check collision with enemies
    for (int i = 0; i < numEnemies; i++)
    {
        if (enemiesX[i] == x && enemiesY[i] == y)
            gameOver = true;
    }

    // Check collision with food
    if (x == foodX && y == foodY)
    {
        score += 10;
        foodX = rand() % width;
        foodY = rand() % height;
        nTail++;
    }
}


#endif
*/
