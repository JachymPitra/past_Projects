#include <iostream>
#include <unistd.h>
#include <istream>

using namespace std;

int main() {


    int vyberVelikosti1;
    int vyberVelikosti2;
    int start;
    int maxDzbanu1;
    int maxDzbanu2;
    int dzban1 = 0;
    int dzban2 = 0;
    int tu;
    int tahy = 0;

    start:

    // Vyber a overeni 1. velikosti
    vyberVelikosti1:
    cout << "Algoritmus na dzbany" << endl << endl;
    cout << "Vyberte velikost dzbanu tak aby byla vetsi nebo rovna 3 a licha: ";
    cin >> vyberVelikosti1;
    if(vyberVelikosti1 < 3){
        cout << "zadejte cislo podle instrukci" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti1;
    } else if (vyberVelikosti1 % 2 == 0){
        cout << "zadejte cislo podle instrukci" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti1;
    }
    system("cls");

    // Vyber a overeni 2. velikosti
    vyberVelikosti2:
    cout << "Algoritmus na dzbany" << endl << endl;
    cout << "Vyberte velikost dzbanu tak aby byla vetsi nebo rovna 3, licha a neni stejne velka nebo soudelna jako predchozi velikost( " << vyberVelikosti1 <<"): ";
    cin >> vyberVelikosti2;
    cout << "velikosti overeni" << endl;
    if(vyberVelikosti2 < 3){
        cout << "cislo je mensi jak 3" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti2;
    } else if (vyberVelikosti2 % 2 == 0){
        cout << "cislo neni liche" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti2;
    } else if (vyberVelikosti2 == vyberVelikosti1){
        cout << "cislo je stejne velke jako predchozi velikost" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti2;
    } else if (vyberVelikosti1 > vyberVelikosti2){
        cout << "prvni vybrane cislo je vetsi nez druhe" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti2;
    } else if (vyberVelikosti2 % vyberVelikosti1 == 0){
        cout << "cisla jsou soudelna" << endl;
        system("PAUSE");
        system("cls");
        goto vyberVelikosti2;
    }
    maxDzbanu1 = vyberVelikosti1;
    maxDzbanu2 = vyberVelikosti2;

    // Algowitmus
    system("cls");
    cout << "zacatek algoritmu" << endl << endl;
    cout << "dzban 1: " << dzban1 << "l, " << "dzban 2: " << dzban2 << "l" << endl;
    do {
        do {
            dzban1++;
        } while (dzban1 != maxDzbanu1);
        cout << "dzban 1: " << dzban1 << "l, " << "dzban 2: " << dzban2 << "l" << endl;
        tahy++;
        tu:
        do {
            if (dzban1 == 0) {
                break;
            }
            dzban2++;
            dzban1--;
        } while (dzban2 != maxDzbanu2);
        cout << "dzban 1: " << dzban1 << "l, " << "dzban 2: " << dzban2 << "l" << endl;
        tahy++;
        if (dzban1 == 1) {
            break;
        } else if (dzban2 == maxDzbanu2) {
            dzban2 -= maxDzbanu2;
            cout << "dzban 1: " << dzban1 << "l, " << "dzban 2: " << dzban2 << "l" << endl;
            tahy++;
        }
        if (dzban1 != 0) {
            goto tu;
        }

        if(dzban2 == maxDzbanu2){
            dzban2 -= maxDzbanu2;
            cout << "dzban 1: " << dzban1 << "l, " << "dzban 2: " << dzban2 << "l" << endl;
            tahy++;
        }
    } while(dzban1 != 1);
    cout << "konec" << endl;
    cout << tahy << " tahu" << endl;
}




