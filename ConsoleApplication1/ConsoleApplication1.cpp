// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<windows.h>
using namespace std;

void displayTime(int hours, int minutes, int seconds) {
    cout << hours << ":" << minutes << ":" << seconds << endl;
    //system("cls");
}

int main() {
    int hour = 0;
    int min = 0;
    int sec = 0;
    int time;

    cout << "Enter seconds::  ";
    cin >> sec;
    cout << "Enter minutes::  ";
    cin >> min;
    cout << "Enter hours::  ";
    cin >> hour;
    time = hour != 0 ? hour * 60 :0 ,min != 0 ? min * 60 : 0;
    time += sec;

    //displayTime(hour, min, sec);

    /*while (true) {
        Sleep(1);

        sec++;

        if (sec > 59) {
            min++;
            sec = 0;
        }

        if (min > 59) {
            hour++;
            sec = 0;
            min = 0;
        }

        displayTime(hour, min, sec);
    }*/
    for (int i = time; i > 0; i--) {
        //system("cls"); // for Windows
        cout << "The time remaining is "<< hour << ":" << min << ":" << sec << endl;
        hour = i % 60 == 0 ? --hour : hour;
        min = i % 60 == 0 ? --min : min;
        sec = sec == 0 ? 59 : --sec;
        Sleep(5); // the same effect.
  
    }
    system("clear");
    cout << "\nTimer ended!\a\nLasted for " << time << " seconds" << "\n\n\n\n\n\n\n" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
