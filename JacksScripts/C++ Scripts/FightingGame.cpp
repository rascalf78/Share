#include <iostream>
#include <string>
#include <time.h>
#include <limits>

//*Starting health and attack definition
#define HEALTH 6
#define ATTACK 3

//*Starting enemy health and attack definition
#define ENHEALTH 10
#define ENATTACK 3

using namespace std;

int input = 0;

//*Player Health and Attack
int Health = HEALTH;
int Attack = ATTACK;

//*Enermy Health and Attack
int EnHealth = ENHEALTH;
int EnAttack = ENATTACK;

void resetvars()
{

    input = 0;

    Health = HEALTH;
    Attack = ATTACK;

    EnHealth = ENHEALTH;
    EnAttack = ENATTACK;
}

int takeindata()
{

    cin >> input;

    if (cin.fail())
    { //Checks if a different data type was passed into input (non integer variable type)
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        input = 0;
    }

    //*Remember to edit this if statement when adding more player actions
    if (input != 1)
    {
        return 0;
    }

    return input;
}

int enemy()
{

    if ((rand() % 10 + 1) > 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void drawscreen()
{

    cout << "Health: " << Health << endl;
    cout << "Attack: " << Attack << endl;

    cout << endl;
    cout << "Enemy Health: " << EnHealth << endl;

    cout << endl;

    cout << "input 1 to attack and 0 to do defend  and 2 to exit" << endl;
}

int checkifwin()
{

    if (Health <= 0)
    {
        if (EnHealth <= 0)
        {
            //cout << "TIE!" << endl;
            return 1;
        }
        //cout << "You LOSE!" << endl;
        return 2;
    }
    if (EnHealth <= 0)
    {
        //cout << "You WIN!" <<endl;
        return 3;
    }
}

int main()
{

    system("cls");

    //*Main Game loop
    while (1)
    {
        srand(time(NULL));

        drawscreen();

        //*takes in user input and processes health
        switch (takeindata())
        {
        case 1:
            EnHealth = EnHealth - Attack;
            if (EnHealth < 0)
            {
                EnHealth = 0;
            }
            break;

        case 0:

            break;
        }

        //*takes in random enemy movement and processes health
        switch (enemy())
        {

        case 1:
            Health = Health - EnAttack;
            if (Health < 0)
            {
                Health = 0;
            }
            cout << "Enemy Attacks:" << endl;
            break;

        case 2:

            break;
        }

        system("cls");

        //*Checks if Health is below 0
        if (Health <= 0)
        {

            cout << "Final Health: ";
            cout << Health << endl;

            cout << "Final Enemy Health: ";
            cout << EnHealth << endl;
            break;
        }
        else if (EnHealth <= 0)
        {

            EnHealth = 0;
            cout << "Final Health: ";
            cout << Health << endl;

            cout << "Final Enemy Health: ";
            cout << EnHealth << endl;
            break;
        }
    }

    //*Checks the outcome of the game and prints outcome

    switch (checkifwin())
    {
    case 1:
        cout << "TIE!" << endl;
        break;

    case 2:
        cout << "You LOSE!" << endl;
        break;

    case 3:
        cout << "You WIN!" << endl;
        break;
    }

    //*exit strategy

    string waitin = " ";
    cout << "type esc to end, anything else to restart program" << endl;
    cin >> waitin;

    if (waitin == "esc")
    {
        system("cls");
        return 0;
    }
    else
    {
        system("cls");
        resetvars();
        main();
    }
}