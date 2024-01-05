#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <string>
#include <istream>

// using namespace std
using namespace std;

// int main
int main() {

    start:

    float U = 0;
    float R = 0;
    float I = 0;
    float P = 0;

    // zadavani hodnot
    cout << "Zadejte hodnotu nebo 0 pro dopocet:" << endl;
    cout << " Napeti U [V]: ";
    cin >> U;
    cout << " Odpor R [Ohm]: ";
    cin >> R;
    cout << " Odpor I [A]: ";
    cin >> I;
    cout << " Vykon P [W]: ";
    cin >> P;
    cout << endl << endl;

    // test zda je cislo do minusu
    if (U < 0 || R < 0 || I < 0 || P < 0){
        cout << "musite zadat kladne cisla" << endl;
        system("PAUSE");
        goto start;
    }
    // vypocty
    if(U == 0 && R == 0){
        U = P / I;
        R = pow(U, 2) / P;
    } else if(U == 0 && I == 0){
        I = sqrt(P / R);
        U = P * I;
    } else if(U == 0 && P == 0){
        U = R * I;
        P = pow(I, 2) * R;
    } else if(R == 0 && I == 0){
        I = P / U;
        R = P / pow(I, 2);
    } else if(R == 0 && P == 0){
        R = U / I;
        P = U * I;
    } else if(I == 0 && P == 0){
        I = U / R;
        P = pow(U, 2) / R;
    }

    // vypis hodnot
    cout << "Napeti: " << U << endl;
    cout << "Proud: " << I << endl;
    cout << "Odpor: " << R << endl;
    cout << "Vykon: " << P << endl;
}
