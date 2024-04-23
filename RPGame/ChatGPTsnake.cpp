/*#include "ChatGPTsnake.h"
#include "character.h"
#include "utility.h"
#include <iostream>
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



while (true) {
    color(5);
    clear();
    cout << "You have " << c.get_deadRat() << " rats"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << " remaining:" << endl;
    cout << "\n\tWhat type of items"; MSdelay(400); cout << "s"; MSdelay(300); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << " would you like?\n";
    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
    color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Potionsss" << std::endl;
    color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Specialty Itemsss" << std::endl;
    color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Play Game" << std::endl;// neat? not my code tho
    color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        while (true) {
            color(5);
            clear();
            cout << "\t\tWhat potions"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
            color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
            color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Sponge armor (increases your HP) - 4 ratsss" << '\n';
            color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Bleach lining (increases your ATK) - 4 ratsss" << '\n';
            color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Wax-coat (increases your DEF) - 4 ratsss" << '\n';
            color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
            color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

            int choiceA;
            cin >> choiceA;

            switch (choiceA)

    case 2:
    case 3:
    case 4:
        color(5);
        cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon" << endl; MSdelay(4000);
        endMusic();
        break;
    default:
        color(5);
        cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); 
        cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
        MSdelay(3200);
    }
    
}



    void cellarEvent::trigger(character & c)
    {
        if (this->isDone != true) {

            endMusic();
            playMusic("putrid.wav");

            while (c.get_deadRat() >= 4) {  //while you still have enough rats to buy things
                color(5);
                clear();
                cout << "You have " << c.get_deadRat() << " rats"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << "s"; MSdelay(400); cout << " remaining:" << endl;
                cout << "\n\tWhat type of items"; MSdelay(400); cout << "s"; MSdelay(300); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << " would you like?\n";
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Potionsss" << std::endl;
                color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Specialty Itemsss" << std::endl;
                color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Play Game" << std::endl;// neat? not my code tho
                color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Exit" << std::endl;
                color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;

                int choice;
                cin >> choice;
                if (choice == 4) {
                    color(5);
                    cout << "I'll s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ee you again s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oon" << endl; MSdelay(4000);
                    endMusic();
                    break;
                }

                if (choice != 1 && choice != 2 && choice != 3 && choice != 4) {
                    color(5);
                    cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                }
                switch (choice)
                {
                case 1:
                    while (true) {
                        color(5);
                        clear();
                        cout << "\t\tWhat potions"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                        color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                        color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Sponge armor (increases your HP) - 4 ratsss" << '\n';
                        color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Bleach lining (increases your ATK) - 4 ratsss" << '\n';
                        color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Wax-coat (increases your DEF) - 4 ratsss" << '\n';
                        color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Back to main shop" << std::endl;
                        color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                        int choiceA;
                        cin >> choiceA;
                        if (choiceA != 1 && choiceA != 2 && choiceA != 3 && choiceA != 4) {
                            cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                        }
                        switch (choiceA) {
                        case 1:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << "s"; MSdelay(200); cout << "ponge armor\n";
                            c.Rat_Sale(4);
                            c.get_healUp();
                            break;
                        case 2:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Bleach lining potion\n";
                            c.Rat_Sale(4);
                            c.get_attUp();
                            break;
                        case 3:
                            color(5);
                            cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                            cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Wax"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " coat\n";
                            c.Rat_Sale(4);
                            c.get_defUp();
                            break;
                        }
                    }
                    break;

                case 2:
                    color(5);
                    clear();
                    cout << "\t\tSpecialty items"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " would you like?\n";
                    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                    color(5); std::cout << "|"; color(8); std::cout << "[1]: "; color(7); std::cout << "Slippery Soap (letsss you escape any battle) - 8 ratsss" << '\n';
                    color(5); std::cout << "|"; color(8); std::cout << "[2]: "; color(7); std::cout << "Cleaning tips (shows enemy'sss current statsss) - 4 ratsss" << '\n';//new one to show you the stats of your enemy?
                    color(5); std::cout << "|"; color(8); std::cout << "[3]: "; color(7); std::cout << "Whendex (increasesss each max stat by 5) - 10 ratsss" << '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is displayed
                    color(5); std::cout << "|"; color(8); std::cout << "[4]: "; color(7); std::cout << "Mirror (lets you see yourself as others see you) - 4 ratsss" << '\n';//shows how many dead rats you have collected and how many are left maybe? the just when you use the item in inventory this info is 
                    color(5); std::cout << "|"; color(8); std::cout << "[5]: "; color(7); std::cout << "Back to main shop" << std::endl;
                    color(5); std::cout << "<~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~{" << std::endl;
                    int choiceB;
                    cin >> choiceB;
                    if (choiceB != 1 && choiceB != 2 && choiceB != 3 && choiceB != 4) {
                        cout << "You s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "tupid s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "ud, thats"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << " not even an option\n";
                    }
                    switch (choiceB) {

                    case 1:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "lippery S"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "oap\n";
                        c.Rat_Sale(4);
                        c.acq_slipperySoap();// will have to make these
                        MSdelay(2222);
                        break;
                    case 2:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Cleaning tips"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        c.Rat_Sale(4);
                        c.acq_cleaningTips();
                        MSdelay(2222);
                        break;
                    case 3:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Whendex"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        c.Rat_Sale(4);
                        c.acq_Whendex();
                        MSdelay(2222);
                        break;

                    case 4:
                        color(5);
                        cout << "Pleasure doing busines"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(200); cout << "\n";
                        cout << "Here's"; MSdelay(200); cout << "s"; MSdelay(200); cout << "s"; MSdelay(100); cout << "s"; MSdelay(100); cout << " your Mirror"; MSdelay(200); cout << "\n";
                        c.Rat_Sale(4);
                        c.acq_Mirror();
                        MSdelay(2222);
                        break;
                    }

                    break;

                case 3:
                    /* srand(time(NULL));
                 Setup();
                 while (!gameOver)
                 {
                     Draw();
                     Input();
                     Logic();
                     usleep(100000); // Sleep for 0.1 seconds
                 }
                   break;//when you lose or leave the game it just resets
                 }
                 return main();
                 break;*/
                    std::cout << " this will be game" << std::endl;
                }
                if (c.get_deadRat() < 4) {
                    playSFX("vine-boom.wav");
                    cout << "get outta here ya broke boi!!!";   //will fix this and the many other errors Iv've enevitibly made
                    MSdelay(5000);
                    return;
                }
            }
        }

