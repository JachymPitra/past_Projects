#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
#include <string>
#include <istream>

using namespace std;

int main() {

    int moznost;
    int x;
    int y;
    int start;
    int dia;

    start:

    cout << "Kosodelnik a diamant: " << endl << endl;
    cout << "1. Kosodelnik" << endl;
    cout << "2. Diamant" << endl;
    cout << "3. Exit" <<endl << endl;
    cin >> moznost;
    cout << endl;

    switch(moznost){
        case 1:{

            system("cls");
            cout << "Kosodelnik" << endl;
            cout << "Zadejte jak dlouhy chcete mit kosodelnik: ";
            cin >> x;
            cout << endl << endl;

            // r = radky
            // m = mezery
            // h = hvezdicky

            for(int r = x; r != 0; r--){
                for(int m = 1; m <= x - r + 1 ; m++){
                    cout << " ";
                }
                for(int h = 0; h != x; h++){
                    cout << "* ";
                }
                cout << endl;
            }

            system("PAUSE");
            system("cls");
            goto start;
        }
        case 2:{

            dia:
            system("cls");
            cout << "Diamant" << endl;
            cout << "Zadejte licha cislo velikosti diamantu: ";
            cin >> y;
            cout << endl << endl;
            if(y % 2 == 0){
                cout << "cislo je liche" << endl;
                system("PAUSE");
                goto dia;
            }

            // d = radky
            // z = mezery
            // v = hvezdicky

            for(int d = y; d != 0; d--){
                //  for(int v = y; )









                cout << endl;
            }

            system("PAUSE");
            system("cls");
            goto start;
        }
        case 3:{
            return 0;
        }
        default:{
            cout << "neplatna moznost , zadejte prosim z uvedenych" << endl;
            system("PAUSE");
            system("cls");
            goto start;
        }
    }
}
