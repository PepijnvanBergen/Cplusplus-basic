#include <iostream>
#include <Windows.h>
#include <list>
#include <string>
#include <random>

using namespace std;

int main()
{
    int rand1 = 0;
    int rand2 = 0;
    int rand3 = 0;
    int rand4 = 0;
    int rand5 = 0;

    int playerInt1 = 0;
    int playerInt2 = 0;
    int playerInt3 = 0;
    int playerInt4 = 0;
    int playerInt5 = 0;

    int pp = 0;

    rand1 = rand() % 10;
    rand2 = rand() % 10;
    rand3 = rand() % 10;
    rand4 = rand() % 10;
    rand5 = rand() % 10;

    string winString("Thats right, you get a point.");
    string loseString("Thats wrong, you wont get a point.");
    string mString("message to player");

    string mString2("Ready for another challange? Here comes another number!");
    string UltimateWinString("Congrats, you have won!");
    string UltimateLoseString("You have lost!");

    std::cout << rand1 << std::endl;
    std::cout << rand2 << std::endl;
    std::cout << rand3 << std::endl;
    std::cout << rand4 << std::endl;

    //Sleep(2500);
    Sleep(1000);
    system("cls");

    cout << "Try and type the same 4 numbers, press enter after you have typed a number." << std::endl;
    cin >> playerInt1;
    if (playerInt1 = rand1) {
        mString = winString;
        pp++;
    }
    else {
        mString = loseString;
    }
    cout << mString << std::endl;
    Sleep(500);
    system("cls");

    cin >> playerInt2;
    if (playerInt2 = rand2) {
        mString = winString;
        pp++;
    }
    else {
        mString = loseString;
    }
    cout << mString << std::endl;
    Sleep(500);
    system("cls");

    cin >> playerInt3;
    if (playerInt3 = rand3) {
        mString = winString;
        pp++;
    }
    else {
        mString = loseString;
    }
    cout << mString << std::endl;
    Sleep(500);
    system("cls");

    cin >> playerInt4;
    if (playerInt4 = rand4) {
        mString = winString;
        pp++;
    }
    else {
        mString = loseString;
    }
    cout << mString << std::endl;
    Sleep(500);
    system("cls");



    if (pp == 4) {
        cout << mString2 << std::endl;
        Sleep(500);
        std::cout << rand5 << std::endl;
        Sleep(500);
        system("cls");
        cin >> playerInt5;
        if (rand5 = playerInt5) {
            std::cout << UltimateWinString << std::endl;
        }
    }
    else {
        std::cout << UltimateLoseString << std::endl;
    }
}
