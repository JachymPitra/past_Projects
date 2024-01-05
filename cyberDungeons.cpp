#include <iostream> //iostream :)
#include <windows.h>
#include <unistd.h>
#include <cstdlib> // doporučeno CLionem
#include <ctime> // doporučeno CLionem
#include <cmath>
#include <string>
#include <istream>
#include <experimental/random>
#include <cstdlib>
#include <random> // Clion podpora


using namespace std;

const vector<string> chekPoints = { // nazvy chekpointu
        "Křižovatka",
        "Náměstí",
        "Tržnice",
        "Obchoďák"

};

//Atributy Postav
const vector<int> charID = { // ID
        0,
        1,
        2,
        3
};

const vector<string> charName = {
        "ClashRunner",
        "CracShoot",
        "Kyborg",
        "Scriptie"
};

const vector<string> charSchopPopis = {
        "Vytáhne z opasku granád a hodí ho jako dar",
        "Nabije Speciální silnější náboj",
        "Vezme nejbližší objekt zmáškne do koule a hodí",
        "Probojoje se do systému nepřátel a poškodí jim  ho"
};

const vector<string> charUltPopis = {
        "Vystřelí salvu smrtících nábojů",
        "Transformuje si svojí sniperku na lepší a trefí do hlavy",
        "Vezme svůj kovový ostnatý štít a proběhne nepřátely",
        "Spustí sebedestruktivní program a pak se znovu zrodí"
};

vector<int> charHP = {
        500,
        350,
        800,
        450
};

vector<int> charER = { // Energi
        450,
        500,
        250,
        600
};

vector<int> charAT = {
        350,
        400,
        125,
        350
};

//Normální útok

const vector<double> charNA = { // Normal Attack scaling
        0.6,
        0.7,
        0.2,
        0.7
};

//Atributy Schopnosti

const vector<string> schopName = {
        "Grade",
        "Marked One",
        "Metal Ballz",
        "H Strike"
};

const vector<double> schopDMG = { // scaling schopnosti z base attaku
        0.9,
        1.2,
        0.3,
        1
};

vector<int> schopPureDMG = { // base dmg schopnosti
        150,
        300,
        125,
        150
};

const vector<double> schopDMGzHP = { // scaling schopnosti z HP
        0,
        0,
        0.5,
        0
};

const vector<double> schopERCost = { // schopnost ER cost %
        0,
        0.075,
        0,
        0
};

vector<int> schopPureERCost = {
        80,
        50,
        45,
        100
};

const vector<int> schopHR = { // Healt Recovery
        0,
        0,
        0,
        0
};

vector<int> schopPureHR = { // Health Regen
        0,
        0,
        0,
        0
};

//Atributy ult

const vector<string> ultName = {
        "Bullseyes",
        "The true One",
        "PiercingPain",
        "ReBorn to #/%@"
};

const vector<double> ultDMG = { // %
        0.7,
        0.6,
        0.3,
        0.6
};

vector<int> ultPureDMG = {
        700,
        1500,
        400,
        1000
};

const vector<double> ultDMGzHP = {
        0,
        0,
        0.7,
        0
};

const vector<double> ultERCost = { // %
        0,
        0,
        0,
        1
};

vector<int> ultPureERCost = {
        350,
        500,
        600,
        0
};

const vector<double> ultHR = { // %
        0,
        0,
        0,
        1
};

vector<int> ultPureHR = {
        0,
        0,
        0,
        0
};

// Obchod
// Zbrane

const vector<int> ZbranID = { // Item ID
        0,
        1,
        2,
        3
};

const vector<string> ZName = { // Zbran jmeno
        "SMG cybergun",
        "BFG 69",
        "Big plate",
        "System 1-a.4b"
};

vector<int> ZQBCost = { // Zbran QB cena
        2700,
        3200,
        3000,
        3300
};

vector<int> ZAT = { // Zbran Attack
        200,
        400,
        100,
        300
};

vector<int> ZHP = { // Zbran HP
        150,
        100,
        300,
        200
};

vector<int> ZER = { // Zbran ER
        250,
        100,
        200,
        400
};

// Naradi

const vector<int> NarID = { // naradi ID
        0,
        1,
        2,
        3,
};

const vector<string> NarName = {
        "Malá sada nářadi",
        "Střední sada nářadí",
        "Velká sada nářadí",
        "BigA** sada nářadí"
};

vector<int> NarQBCost = {
        200,
        300,
        500,
        1000
};

vector<int> NarPureHR = {
        50,
        75,
        125,
        300
};
const vector<double> NarHR = { // %
        0,
        0.1,
        0.2,
        0.4
};

//Inventář hráče


vector<int> playerInvZbran = {

};

vector<int> playerInvNar = {

};

void textProVyberPostav(int ID) {
    switch (ID) {
        default:{
            cout << "zadej prosím požadovanou hodnotu" << endl;
            system("PAUSE");
            system ("cls");
            break;
        }
        case 0:{
            cout << charName.at(ID) << endl << endl;
            cout << "Backstory:" << endl;
            cout << "ClashRunner je vůdce gnagu který operuje ze stínu" << endl << endl;



            break;
        }
        case 1:{
            cout << charName.at(ID) << endl << endl;
            cout << "Backstory:" << endl;
            cout << "CracShoot je nájemný vrach o kterém nikdo nic neví, jediné co se ví je že mu nikdo neutečete" << endl << endl;


            break;
        }
        case 2:{
            cout << charName.at(ID) << endl << endl;
            cout << "Backstory:" << endl;
            cout << "Kyborg je ochránce zákona a pořádku" << endl << endl;


            break;
        }
        case 3:{
            cout << charName.at(ID) << endl << endl;
            cout << "Backstory:" << endl;
            cout << "Scriptie je velice známá ale zárověn neznámá heckerka" << endl << endl;


            break;
        }

    }
}

void mezery(int space) {
    for(; space > 0; space--){
        cout << " ";
    }
}

void logo() {
    cout << endl << endl << endl;
    mezery(10); cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    mezery(10); cout << "||                                                ||" << endl;
    mezery(10); cout << "||                                                ||" << endl;
    mezery(10); cout << "||                 Cyber Dungeons                 ||" << endl;
    mezery(10); cout << "||                                                ||" << endl;
    mezery(10); cout << "||                                                ||" << endl;
    mezery(10); cout << "||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
}

void loadingBar( int mezeraPredBarem, int fullBar, const string& character = "-") {
    cout << endl;
    mezery(mezeraPredBarem);
    cout << "loading..." << endl;
    mezery(mezeraPredBarem);
    for(int nullBar = 0; fullBar >= nullBar; fullBar--) {
        int randomBar = experimental::randint(0,250);
        Sleep(randomBar);
        cout << character;
    }
}

void mapStory() {
    system("cls");
    cout << endl << endl << endl;
    cout << "Rok: 2158" << endl;
    int sleepTime = 3;
    sleep(sleepTime);
    cout << "City: Night City" << endl << endl;
    sleep(sleepTime);
    cout << "Jedná se o pokrokové, vyspělé město, které je plné mrakodrapů." << endl;
    sleep(sleepTime);
    cout << "Je městem, které pulsuje technologiemi. Kybernetické vylepšení a implantáty jsou běžné a lidé si mohou zlepšit své schopnosti. " << endl;
    sleep(sleepTime);
    cout << "Night City má také živé podsvětí, ve kterém působí zločinecké organizace, gangy a nezávislí žoldáci." << endl;
    sleep(sleepTime);
    cout << "Zde se odehrávají ilegální obchody, pašování, loupeže a různé další zločinné aktivity." << endl;
    sleep(sleepTime);
    cout << "V podsvětí platí vlastní pravidla a loajality, a může být nebezpečné pro ty, kteří se rozhodnou s ním spojit." << endl;
    cout << endl << endl;
}

void statyPostav(int ID, int playerAT, int playerHP, int playerMaxHP, int playerER, int playerMaxER, int playerNA, int playerSchopPureAT, int playerSchopAT, int playerUltAT) {
    system("cls");
    cout << endl << endl << "Vaše postava: ";
    textProVyberPostav(ID);

    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Atributy:" << endl;
    cout << "Momentalní AT: " << playerAT << endl;
    cout << "Momentalní HP: " << playerHP << "/" << playerMaxHP << endl;
    cout << "Momentalní ER: " << playerER << "/" << playerMaxER << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Normální útok DMG: " << playerNA << endl;
    cout << "Normalní útok scaling z AT: " << charNA.at(ID) * 100 << "%" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Schopnost: " << schopName.at(ID) << endl;
    cout << "Popis: " << charSchopPopis.at(ID) << endl;
    cout << "DMG: " << playerSchopAT << endl;
    cout << "Base dmg: " << playerSchopPureAT << endl;
    cout << "Scaling: " << endl;
    cout << schopDMG.at(ID) * 100 << "% z tvého celkového Attacku" << endl;
    if(schopDMGzHP.at(ID) * 100 > 0){
        cout << schopDMGzHP.at(ID) * 100 << "% z tvých HP" << endl;
    }
    cout << "Energy cost(ER): " << schopPureERCost.at(ID) << " + " << schopERCost.at(ID) * 100 << "% ER" << endl;
    if(schopPureHR.at(ID) > 0 || schopHR.at(ID) * 100 > 0){
        cout << "Health Recovery(HR): " << schopPureHR.at(ID) << " + " << schopHR.at(ID) * 100 << "% maxHP" << endl;
    }
    cout << "----------------------------------------------------------------------------" << endl;
    cout << "Ultimátka: " << ultName.at(ID) << endl;
    cout << "Popis: " << charUltPopis.at(ID) << endl;
    cout << "DMG: " << playerUltAT << endl;
    cout << "Scaling: " << endl;
    cout << ultDMG.at(ID) * 100 << "% z tvého celkového Attacku" << endl;
    if(ultDMGzHP.at(ID) * 100 > 0){
        cout << ultDMGzHP.at(ID) * 100 << "% z tvých HP" << endl;
    }
    cout << "Energy cost(ER): " << ultPureERCost.at(ID) << " + " << ultERCost.at(ID) * 100 << "% ER" << endl;
    if(ultPureHR.at(ID) > 0 || ultHR.at(ID) * 100 > 0){
        cout << "Health Recovery(HR): " << ultPureHR.at(ID) << " + " << ultHR.at(ID) * 100 << "% maxHP" << endl;
    }
    cout << "----------------------------------------------------------------------------" << endl;



}

int main() {

    //Přednastavovani
    {
        SetConsoleOutputCP(CP_UTF8); //Pro hÄ‚Ë‡Ă„Ĺ¤ky a Ă„Ĺ¤Ä‚Ë‡rky pÄąâ„˘epnu konzoli do UTF_8
        HWND hwnd = GetConsoleWindow(); //Zbytek tohoto bloku slouĂ„Ä…Ă„ÄľĂ„â€šĂ‚Â­ k formÄ‚Ë‡tovÄ‚Ë‡nÄ‚Â­ a nĂ„â€šĂ‚Â­ okna konzole a velikosti textu v konzoli.
        ShowWindow(hwnd, SW_MAXIMIZE);
        HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_FONT_INFOEX fontInfo = {sizeof(fontInfo)};
        GetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
        fontInfo.dwFontSize.X *= 4; // increase font width // Zde doporucuji nastavovat schodujÄ‚Â­cÄ‚Â­ se hodnoty (2 a 2/ 4 a 4 atd.).
        fontInfo.dwFontSize.Y *= 4; // increase font height //vÄ‚ËťÄąË‡ka
        SetCurrentConsoleFontEx(hConsole, FALSE, &fontInfo);
    }

    //Začátektek
    logo();
    system("PAUSE");
    system("cls");
    logo();
    loadingBar(10,51);
    cout << endl << endl;
    mezery(10);
    system("PAUSE");
    system("cls");
    cout << endl << endl;



    cout << "Rozhodnutí: " << endl;
    cout << "Zmáčkněte jakékoliv číslo pro přeskočení příběhu" << endl;
    cout << "1. Přečtení příběhu" << endl;
    int storyYN; //story YES / NO
    cin >> storyYN;
    if(storyYN == 1){
        mapStory();
        system("PAUSE");
        system("cls");
    } else {
        system("cls");
    }




    int gtVyberPostav;
    gtVyberPostav:
    cout << endl << endl;
    cout << "Výbete číslo podle postavy" << endl << endl;
    for(int intProPostavy = 0; intProPostavy <= charID.size() - 1; intProPostavy++ ){
        cout << intProPostavy << ") " << charName.at(intProPostavy) << endl;

    }
    int ID;
    cin >> ID;
    if(;ID < 0 || ID > charID.size() - 1){
        cout << "Vyberte prosím platné číslo postavy" << endl;
        system("PAUSE");
        system("cls");
        goto gtVyberPostav;
    }

    // player ints
    // převedení char vectoru na player int
    int playerAT;
    int playerHP;
    int playerMaxHP;
    int playerER;
    int playerMaxER;
    int playerQB = 0; // Quantum Bits > mšna
    string playerName;
    int playerNA;
    int playerSchopPureAT;
    int playerSchopAT;
    int playerSchopERCost;
    int playerSchopHR;
    int playerUltAT;
    int playerUltERCost;
    int playerUltHR;
    int playerLevel = 1; // levely
    int playerXP = 0; // xp progres
    int playerLevelXP = (playerLevel + playerLevel) * 10; // formula pro xp potřebné na level up

    playerAT = charAT.at(ID);
    playerHP = charHP.at(ID);
    playerMaxHP = playerHP;
    playerER = charER.at(ID);
    playerMaxER = playerER;
    playerName = charName.at(ID);

    { // Matika ne přepočítaní statů
        playerHP = playerMaxHP;
        playerER = playerMaxER;
        playerNA = playerAT * charNA.at(ID);
        playerSchopPureAT = schopPureDMG.at(ID);
        playerSchopAT = playerAT * schopDMG.at(ID) + schopPureDMG.at(ID) + schopDMGzHP.at(ID) * playerHP;
        playerSchopERCost = schopPureERCost.at(ID) + playerER * schopERCost.at(ID);
        playerSchopHR = schopPureHR.at(ID) + playerMaxHP * schopHR.at(ID);
        playerUltAT = playerAT * ultDMG.at(ID) + ultPureDMG.at(ID) + ultDMGzHP.at(ID) * playerHP;
        playerUltERCost = ultPureERCost.at(ID) + playerER * ultERCost.at(ID);
        playerUltHR = ultPureHR.at(ID) + playerMaxHP * ultHR.at(ID);
    }

    //Enemy ints
    int storyWave = 1; // story mode wave
    int infinityWave = 1; // Infinity Night waves
    // Story Normal Enemy
    int SEnemyMaxHP; // Story Enemy
    int SEnemyHP;
    int SEnemyBaseHP = 100;
    int SEnemyAT;
    int SEnemyBaseAT = 125;
    int SEnemyXP;
    int SEnemyQB;
    int SEnemyPoc; // enemy pocet
    // Boss
    bool BossInd = false; // Indicatro pro fight
    int SBossMaxHP;
    int SBossHP;
    int SBossAT;
    int SBossXP;
    int SBossQB;
    // Infinity Normal Enemy
    int IEnemyMaxHP; // Story Enemy
    int IEnemyHP;
    int IEnemyBaseHP = 150;
    int IEnemyAT;
    int IEnemyBaseAT = 200;
    int IEnemyXP;
    int IEnemyQB;
    int IEnemyPoc; // enemy pocet
    // Boss
    bool IBossInd = false; // Indicatro pro fight
    int IBossMaxHP;
    int IBossHP;
    int IBossAT;
    int IBossXP;
    int IBossQB;






    statyPostav(ID, playerAT, playerHP, playerMaxHP, playerER, playerMaxER, playerNA, playerSchopPureAT, playerSchopAT, playerUltAT);
    system("PAUSE");

    // Inventar push_back
    for(int VVZ = 0; VVZ <= ZbranID.size() - 1; VVZ++) { // vygenerovaní vektoru pro inventar
        playerInvZbran.push_back(0);
    }
    for(int VVN = 0; VVN <= NarID.size() - 1; VVN++) { // vygenerovaní vektoru pro inventar
        playerInvNar.push_back(0);
    }



    int rozhodnuti;
    int menu;
    menu:
    system("cls");

    // Level system
    if(playerXP >= playerLevelXP) {
        do {
            playerXP -= playerLevelXP;
            playerLevel++;
            playerLevelXP = (playerLevel + playerLevel) * 15;
            playerAT += playerLevelXP / 10;
            playerMaxHP += playerLevelXP / 15;
            playerMaxER += playerLevelXP / 20;
            playerQB += (playerLevel^3 / 2) + 200;

        } while (playerXP >= playerLevelXP);
    }

    { // Matika ne přepočítaní statů
        playerHP = playerMaxHP;
        playerER = playerMaxER;
        playerNA = playerAT * charNA.at(ID);
        playerSchopAT = playerAT * schopDMG.at(ID) + schopPureDMG.at(ID) + schopDMGzHP.at(ID) * playerHP;
        playerSchopERCost = schopPureERCost.at(ID) + playerER * schopERCost.at(ID);
        playerSchopHR = schopPureHR.at(ID) + playerMaxHP * schopHR.at(ID);
        playerUltAT = playerAT * ultDMG.at(ID) + ultPureDMG.at(ID) + ultDMGzHP.at(ID) * playerHP;
        playerUltERCost = ultPureERCost.at(ID) + playerER * ultERCost.at(ID);
        playerUltHR = ultPureHR.at(ID) + playerMaxHP * ultHR.at(ID);
    }


    int chekPiontSize = chekPoints.size() - 1;
    int respawnName = experimental::randint(0,chekPiontSize);
    cout << endl;
    cout << chekPoints.at(respawnName) << ":" << endl << endl;
    cout << "Co si přejete dělat?" << endl;
    cout << "1. Podívat se na vaše staty" << endl;
    cout << "2. Zkontrolovat si svůj level" << endl;
    cout << "3. Jít do dungeonu" << endl;
    cout << "4. Koupit itemy" << endl;
    cout << "5. Inventář" << endl;
    cout << "6. Ukončit hru !PROGRES SE NEUKLÁDÁ!" << endl << endl;
    cin >> rozhodnuti;
    switch(rozhodnuti) {
        default: {
            cout << "neplatná možnost" << endl;
            system("PAUSE");
            system("cls");
            goto menu;
        }
        case 1: {

            statyPostav(ID, playerAT, playerHP, playerMaxHP, playerER, playerMaxER, playerNA, playerSchopPureAT, playerSchopAT, playerUltAT);

            system("PAUSE");
            goto menu;
        }
        case 2: {
            system("cls");
            cout << endl << endl;
            cout << "Váš Level: " << endl << endl;
            cout << "<[  " << playerLevel << "  ]>" << endl << endl;
            cout << "XP do dalšho levelu: " << endl;
            cout << playerXP << "/" << playerLevelXP << " xp" << endl << endl;
            system("PAUSE");
            goto menu;

        }
        case 3: {
            { // Matika ne přepočítaní statů
                playerHP = playerMaxHP;
                playerER = playerMaxER;
                playerNA = playerAT * charNA.at(ID);
                playerSchopAT = playerAT * schopDMG.at(ID) + schopPureDMG.at(ID) + schopDMGzHP.at(ID) * playerHP;
                playerSchopERCost = schopPureERCost.at(ID) + playerER * schopERCost.at(ID);
                playerSchopHR = schopPureHR.at(ID) + playerMaxHP * schopHR.at(ID);
                playerUltAT = playerAT * ultDMG.at(ID) + ultPureDMG.at(ID) + ultDMGzHP.at(ID) * playerHP;
                playerUltERCost = ultPureERCost.at(ID) + playerER * ultERCost.at(ID);
                playerUltHR = ultPureHR.at(ID) + playerMaxHP * ultHR.at(ID);
            }
            int fightMozn;
            fightMozn:
            system("cls");
            cout << "Vyberte prosím co hrát dále:" << endl << endl;
            cout << "1. Story mode (" << storyWave << "/50)" << endl;
            cout << "2. Infinity Night (" << infinityWave << ")" << endl;
            cout << "3. Menu" << endl << endl;
            cout << "Vaše volba: ";
            cin >> fightMozn;

            switch(fightMozn) {
                default:{
                    cout << endl;
                    cout << "Neplatná možnost" << endl;
                    system("PAUSE");
                    goto fightMozn;
                }
                case 1:{
                    while (storyWave < 51) {
                        //Normal enemy
                        SEnemyMaxHP = (SEnemyBaseHP + playerLevel * 2 + storyWave^2) * 3;
                        SEnemyAT = (SEnemyBaseAT + (playerLevel^2 + storyWave^3)) * 2;
                        SEnemyXP = 25 + playerLevelXP / 16;
                        SEnemyQB = 50 + playerLevel^3 / 3;
                        SEnemyPoc = (storyWave + playerLevel + 1) / 3;
                        if(SEnemyPoc > 10){
                            SEnemyPoc = 10;
                        }
                        SEnemyHP = SEnemyMaxHP;
                        //Boss
                        SBossMaxHP = SEnemyMaxHP * 4;
                        SBossHP = SBossMaxHP;
                        SBossAT = SEnemyAT * 3;
                        SBossXP = SEnemyXP * 4;
                        SBossQB = SEnemyQB * 5;
                        SBossHP = SBossMaxHP;

                        system("cls");
                        while(SEnemyPoc > 0) {
                            while(SEnemyHP > 0 || SBossHP > 0) {
                                int fightStart;
                                fightStart:

                                system("cls");
                                cout << "Story Mode: " << endl;
                                cout << "<[ " << storyWave << " ]>" << endl << endl;

                                cout << "-----------------------" << endl;
                                cout << "Player: " << playerName << endl;
                                cout << "AT: " << playerAT << endl;
                                cout << "HP: " << playerHP << "/" << playerMaxHP << endl;
                                cout << "ER: " << playerER << "/" << playerMaxER << endl;
                                cout << "-----------------------" << endl;
                                cout << "Normální útok DMG: " << playerNA << endl;
                                cout << "-----------------------" << endl;
                                cout << "Schopnost: " << endl;
                                cout << "DMG: " << playerSchopAT << endl;
                                cout << "ER cost: " << playerSchopERCost << endl;
                                cout << "HR: " << playerSchopHR << endl;
                                cout << "-----------------------" << endl;
                                cout << "Ultimátka:" << endl;
                                cout << "DMG: " << playerUltAT << endl;
                                cout << "ER cost: " << playerUltERCost << endl;
                                cout << "HR: " << playerUltHR << endl;
                                cout << "-----------------------" << endl << endl;

                                if(storyWave % 5 == 0){
                                    BossInd = true;
                                    cout << "Enemy Boss: " << endl;
                                    cout << "AT: " << SBossAT << endl;
                                    cout << "HP: " << SBossHP << "/" << SBossMaxHP << endl << endl;
                                } else {
                                    BossInd = false;
                                    cout << "Enemy: " << endl;
                                    cout << "Pocet enemy:  >>  <[ " << SEnemyPoc << " ]>  <<" << endl;
                                    cout << endl;
                                    cout << "AT: " << SEnemyAT << endl;
                                    cout << "HP: " << SEnemyHP << "/" << SEnemyMaxHP << endl << endl;
                                }
                                cout << "Vyberte co udělat: " << endl;
                                cout << "1) Normální útok" << endl;
                                cout << "2) Schopnost" << endl;
                                cout << "3) Ultimítka" << endl;
                                cout << "4) Použít nářadí" << endl;
                                int playerVolba;

                                cin >> playerVolba;
                                cout << endl << endl;
                                switch (playerVolba) {
                                    default: {
                                        cout << "Neplatná možnost" << endl;
                                        system("PAUSE");
                                        goto fightStart;
                                    }
                                    case 1:{
                                        cout << "Normální útok" << endl;
                                        cout << "Ubral jste nepřítely: " << playerNA << endl;
                                        if(BossInd == true){
                                            SBossHP -= playerNA;
                                        } else {
                                            SEnemyHP -= playerNA;
                                        }
                                        break;
                                    }
                                    case 2:{
                                        playerER -= playerSchopERCost;
                                        if(playerER < 0){
                                            cout << "Nedostatek ER" << endl;
                                            playerER += playerSchopERCost;
                                            system("PAUSE");
                                            goto fightStart;
                                        }
                                        cout << "Schopnost: " << schopName.at(ID) << endl;
                                        cout << "Ubral jste nepřítely: " << playerSchopAT << endl;
                                        if(BossInd == true){
                                            SBossHP -= playerSchopAT;
                                        } else {
                                            SEnemyHP -= playerSchopAT;
                                        }
                                        break;
                                    }
                                    case 3:{
                                        playerER -= playerUltERCost;
                                        if(playerER < 0){
                                            cout << "Nedostatek ER" << endl;
                                            playerER += playerUltERCost;
                                            system("PAUSE");
                                            goto fightStart;
                                        }
                                        cout << "Ultimátka: " << ultName.at(ID) << endl;
                                        cout << "Ubral jste nepřítely: " << playerUltAT << endl;
                                        if(BossInd == true) {
                                            SBossHP -= playerUltAT;
                                        } else {
                                            SEnemyHP -= playerUltAT;
                                        }
                                        break;
                                    }
                                    case 4:{
                                        int PSNVolba;
                                        PSNVolba:
                                        system("cls");
                                        cout << "Máš " << playerHP << "/" << playerMaxHP << " HP" << endl << endl;
                                        for(int ISN = 0; ISN <= NarID.size() - 1; ISN++){// Int pro Sadu Nařadi
                                            cout << ISN << ") " << playerInvNar.at(ISN) << "x - " << NarPureHR.at(ISN) + NarHR.at(ISN) * playerMaxHP << " HR - " << NarName.at(ISN) << endl;
                                            }
                                            cout << "4) Zpět do boje" << endl;

                                        cin >> PSNVolba;
                                        switch(PSNVolba){
                                            default:{
                                                cout << "Neplatná možnost" << endl;
                                                system("PAUSE");
                                                goto PSNVolba;
                                            }
                                            case 0:{
                                                if(playerInvNar.at(PSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto fightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP;
                                                if(playerHP > playerMaxHP){
                                                    playerHP = playerMaxHP;
                                                }
                                                cout << "Opravil sis " << NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP << endl;
                                                playerInvNar.at(PSNVolba) -= 1;
                                                system("PAUSE");
                                                goto fightStart;
                                                }
                                            }
                                            case 1:{
                                                if(playerInvNar.at(PSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto fightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP;
                                                if(playerHP > playerMaxHP){
                                                    playerHP = playerMaxHP;
                                                }
                                                cout << "Opravil sis " << NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP << endl;
                                                playerInvNar.at(PSNVolba) -= 1;
                                                system("PAUSE");
                                                goto fightStart;
                                                }
                                            }
                                            case 2:{
                                                if(playerInvNar.at(PSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto fightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP;
                                                if(playerHP > playerMaxHP){
                                                    playerHP = playerMaxHP;
                                                }
                                                cout << "Opravil sis " << NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP << endl;
                                                playerInvNar.at(PSNVolba) -= 1;
                                                system("PAUSE");
                                                goto fightStart;
                                                }
                                            }
                                            case 3:{
                                                if(playerInvNar.at(PSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto fightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP;
                                                if(playerHP > playerMaxHP){
                                                    playerHP = playerMaxHP;
                                                }
                                                cout << "Opravil sis " << NarPureHR.at(PSNVolba) + NarHR.at(PSNVolba) * playerMaxHP << endl;
                                                playerInvNar.at(PSNVolba) -= 1;
                                                system("PAUSE");
                                                goto fightStart;
                                                }
                                            }
                                            case 4:{
                                                system("cls");
                                                goto fightStart;
                                            }
                                        }
                                    }
                                }
                                if(BossInd == true){
                                    if(SBossHP <= 0){
                                        cout << "Zabil jsi Bose" << endl;
                                        playerXP += SBossXP;
                                        playerQB += SBossQB;
                                        SEnemyPoc = 0;
                                        break;
                                    } else {
                                        cout << "Boss útočí" << endl;
                                        cout << "Ubral ti " << SBossAT << endl;
                                        playerHP -= SBossAT;
                                        if(playerHP <= 0){
                                            system("cls");
                                            cout << "Zemřel jsi" << endl;
                                            sleep(5);
                                            cout << "Znovu jsi nabyl vědom a jsi" << endl;
                                            system("PAUSE");
                                            system("cls");
                                            goto menu;
                                        }
                                        break;
                                    }
                                }
                                if(SEnemyHP <= 0){
                                    cout << "Zabil jsi nepřítele" << endl;
                                    SEnemyPoc -= 1;
                                    SEnemyHP = SEnemyMaxHP;
                                    playerXP += SEnemyXP;
                                    playerQB += SEnemyQB;
                                    break;
                                } else {
                                    cout << "Nepřítel útočí" << endl;
                                    cout << "Ubral ti " << SEnemyAT << endl;
                                    playerHP -= SEnemyAT;
                                    if(playerHP <= 0){
                                            system("cls");
                                            cout << "Zemřel jsi" << endl;
                                            sleep(5);
                                            cout << "Znovu jsi nabyl vědom a jsi" << endl;
                                            system("PAUSE");
                                            system("cls");
                                            goto menu;
                                        }
                                    break;
                                }
                            }
                            system("PAUSE");
                        }
                        cout << "Dokončil jsi waveku" << endl;
                        playerER += 0.1 * playerMaxER;
                        if(playerER > playerMaxHP){
                            playerER = playerMaxER;
                        }
                        playerQB += (100 + storyWave^2);
                        storyWave += 1;
                        if(storyWave % 5 == 0){
                            cout << endl << endl;
                            cout << "* dostal na check point *" << endl;
                            system("PAUSE");
                            goto menu;
                        }
                        system("PAUSE");
                        system("cls");
                    }
                    system("cls");
                    cout << "**Dohráls jsi story mode**" << endl;
                    system("PAUSE");
                    goto menu;
                }
                case 2:{ // Infinity Night
                    while (infinityWave > 0) {
                        //Normal enemy
                        IEnemyMaxHP = (IEnemyBaseHP + playerLevel * 2 + infinityWave^2) * 3;
                        IEnemyAT = (IEnemyBaseAT + (playerLevel^2 + infinityWave^3)) * 2;
                        IEnemyXP = 25 + playerLevelXP / 16;
                        IEnemyQB = 50 + playerLevel^3 / 3;
                        IEnemyPoc = (infinityWave + playerLevel + 1) / 3;
                        if(IEnemyPoc > 10){
                            IEnemyPoc = 10;
                        }
                        IEnemyHP = IEnemyMaxHP;
                        //Boss
                        IBossMaxHP = IEnemyMaxHP * 4;
                        IBossHP = IBossMaxHP;
                        IBossAT = IEnemyAT * 3;
                        IBossXP = IEnemyXP * 4;
                        IBossQB = IEnemyQB * 5;
                        system("cls");
                        while(IEnemyPoc > 0) {
                            while(IEnemyHP > 0 || IBossHP > 0) {
                                int IFightStart;
                                IFightStart:

                                system("cls");
                                cout << "Infinity Night: " << endl;
                                cout << "<[ " << infinityWave << " ]>" << endl << endl;

                                cout << "-----------------------" << endl;
                                cout << "Player: " << playerName << endl;
                                cout << "AT: " << playerAT << endl;
                                cout << "HP: " << playerHP << "/" << playerMaxHP << endl;
                                cout << "ER: " << playerER << "/" << playerMaxER << endl;
                                cout << "-----------------------" << endl;
                                cout << "Normální útok DMG: " << playerNA << endl;
                                cout << "-----------------------" << endl;
                                cout << "Schopnost: " << endl;
                                cout << "DMG: " << playerSchopAT << endl;
                                cout << "ER cost: " << playerSchopERCost << endl;
                                cout << "HR: " << playerSchopHR << endl;
                                cout << "-----------------------" << endl;
                                cout << "Ultimátka:" << endl;
                                cout << "DMG: " << playerUltAT << endl;
                                cout << "ER cost: " << playerUltERCost << endl;
                                cout << "HR: " << playerUltHR << endl;
                                cout << "-----------------------" << endl << endl;

                                if(infinityWave % 5 == 0){
                                    IBossInd = true;
                                    cout << "Enemy Boss: " << endl;
                                    cout << "AT: " << IBossAT << endl;
                                    cout << "HP: " << IBossHP << "/" << IBossMaxHP << endl << endl;
                                } else {
                                    IBossInd = false;
                                    cout << "Enemy: " << endl;
                                    cout << "Pocet enemy:  >>  <[ " << IEnemyPoc << " ]>  <<" << endl;
                                    cout << endl;
                                    cout << "AT: " << IEnemyAT << endl;
                                    cout << "HP: " << IEnemyHP << "/" << IEnemyMaxHP << endl << endl;
                                }
                                cout << "Vyberte co udělat: " << endl;
                                cout << "1) Normální útok" << endl;
                                cout << "2) Schopnost" << endl;
                                cout << "3) Ultimítka" << endl;
                                cout << "4) Použít nářadí" << endl;
                                int IplayerVolba;

                                cin >> IplayerVolba;
                                cout << endl << endl;
                                switch (IplayerVolba) {
                                    default: {
                                        cout << "Neplatná možnost" << endl;
                                        system("PAUSE");
                                        goto IFightStart;
                                    }
                                    case 1:{
                                        cout << "Normální útok" << endl;
                                        cout << "Ubral jste nepřítely: " << playerNA << endl;
                                        if(IBossInd == true){
                                            IBossHP -= playerNA;
                                        } else {
                                            IEnemyHP -= playerNA;
                                        }
                                        break;
                                    }
                                    case 2:{
                                        playerER -= playerSchopERCost;
                                        if(playerER < 0){
                                            cout << "Nedostatek ER" << endl;
                                            playerER += playerSchopERCost;
                                            system("PAUSE");
                                            goto IFightStart;
                                        }
                                        cout << "Schopnost: " << schopName.at(ID) << endl;
                                        cout << "Ubral jste nepřítely: " << playerSchopAT << endl;
                                        if(IBossInd == true){
                                            IBossHP -= playerSchopAT;
                                        } else {
                                            IEnemyHP -= playerSchopAT;
                                        }
                                        break;
                                    }
                                    case 3:{
                                        playerER -= playerUltERCost;
                                        if(playerER < 0){
                                            cout << "Nedostatek ER" << endl;
                                            playerER += playerUltERCost;
                                            system("PAUSE");
                                            goto IFightStart;
                                        }
                                        cout << "Ultimátka: " << ultName.at(ID) << endl;
                                        cout << "Ubral jste nepřítely: " << playerUltAT << endl;
                                        if(IBossInd == true) {
                                            IBossHP -= playerUltAT;
                                        } else {
                                            IEnemyHP -= playerUltAT;
                                        }
                                        break;
                                    }
                                    case 4:{
                                        int IPSNVolba;
                                        IPSNVolba:
                                        system("cls");
                                        cout << "Máš " << playerHP << "/" << playerMaxHP << " HP" << endl << endl;
                                        for(int IISN = 0; IISN <= NarID.size() - 1; IISN++){// infinity Int pro Sadu Nařadi
                                            cout << IISN << ") " << playerInvNar.at(IISN) << "x - " << NarPureHR.at(IISN) + NarHR.at(IISN) * playerMaxHP << " HR - " << NarName.at(IISN) << endl;
                                        }
                                        cout << "4) Zpět do boje" << endl;

                                        cin >> IPSNVolba;
                                        switch(IPSNVolba){
                                            default:{
                                                cout << "Neplatná možnost" << endl;
                                                system("PAUSE");
                                                goto PSNVolba;
                                            }
                                            case 0:{
                                                if(playerInvNar.at(IPSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP;
                                                    if(playerHP > playerMaxHP){
                                                        playerHP = playerMaxHP;
                                                    }
                                                    cout << "Opravil sis " << NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP << endl;
                                                    playerInvNar.at(IPSNVolba) -= 1;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                }
                                            }
                                            case 1:{
                                                if(playerInvNar.at(IPSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP;
                                                    if(playerHP > playerMaxHP){
                                                        playerHP = playerMaxHP;
                                                    }
                                                    cout << "Opravil sis " << NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP << endl;
                                                    playerInvNar.at(IPSNVolba) -= 1;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                }
                                            }
                                            case 2:{
                                                if(playerInvNar.at(IPSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP;
                                                    if(playerHP > playerMaxHP){
                                                        playerHP = playerMaxHP;
                                                    }
                                                    cout << "Opravil sis " << NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP << endl;
                                                    playerInvNar.at(IPSNVolba) -= 1;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                }
                                            }
                                            case 3:{
                                                if(playerInvNar.at(IPSNVolba) <= 0){
                                                    cout << endl << "Nemáš toto nářadí" << endl;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                } else {
                                                    playerHP += NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP;
                                                    if(playerHP > playerMaxHP){
                                                        playerHP = playerMaxHP;
                                                    }
                                                    cout << "Opravil sis " << NarPureHR.at(IPSNVolba) + NarHR.at(IPSNVolba) * playerMaxHP << endl;
                                                    playerInvNar.at(IPSNVolba) -= 1;
                                                    system("PAUSE");
                                                    goto IFightStart;
                                                }
                                            }
                                            case 4:{
                                                system("cls");
                                                goto IFightStart;
                                            }
                                        }
                                    }
                                }
                                if(IBossInd == true){
                                    if(SBossHP <= 0){
                                        cout << "Zabil jsi Bose" << endl;
                                        playerXP += IBossXP;
                                        playerQB += IBossQB;
                                        IEnemyPoc = 0;
                                        break;
                                    } else {
                                        cout << "Boss útočí" << endl;
                                        cout << "Ubral ti " << IBossAT << endl;
                                        playerHP -= IBossAT;
                                        if(playerHP <= 0){
                                            system("cls");
                                            infinityWave = 1;
                                            cout << "Zemřel jsi" << endl;
                                            sleep(5);
                                            cout << "Znovu jsi nabyl vědom a jsi" << endl;
                                            system("PAUSE");
                                            system("cls");
                                            goto menu;
                                        }
                                        break;
                                    }
                                }
                                if(IEnemyHP <= 0){
                                    cout << "Zabil jsi nepřítele" << endl;
                                    IEnemyPoc -= 1;
                                    IEnemyHP = IEnemyMaxHP;
                                    playerXP += IEnemyXP;
                                    playerQB += IEnemyQB;
                                    break;
                                } else {
                                    cout << "Nepřítel útočí" << endl;
                                    cout << "Ubral ti " << IEnemyAT << endl;
                                    playerHP -= IEnemyAT;
                                    if(playerHP <= 0){
                                        system("cls");
                                        infinityWave = 1;
                                        cout << "Zemřel jsi" << endl;
                                        sleep(5);
                                        cout << "Znovu jsi nabyl vědom a jsi" << endl;
                                        system("PAUSE");
                                        system("cls");
                                        goto menu;
                                    }
                                    break;
                                }
                            }
                            system("PAUSE");
                        }
                        cout << "Dokončil jsi waveku" << endl;
                        playerER += 0.1 * playerMaxER;
                        if(playerER > playerMaxHP){
                            playerER = playerMaxER;
                        }
                        playerQB += (100 + infinityWave^2);
                        infinityWave += 1;
                        if(infinityWave % 5 == 0){
                            cout << endl << endl;
                            cout << "* dostal na check point *" << endl;
                            system("PAUSE");
                            goto menu;
                        }
                        system("PAUSE");
                        system("cls");
                    }
                }
                case 3:{
                    goto menu;
                }
            }
        }
        case 4: {
            int obchodMozn;
            obchodMozn:
            system("cls");
            cout << "Vyberte do jákého obchodu chcete:" << endl << endl;
            cout << "1.) Obchod se zbraněmi" << endl;
            cout << "2.) Obchod s opravným nářadím" << endl;

            cout << "    Zmáčkněte jakékoliv jiné číslo pro návrat do menu" << endl << endl;
            cout << "Vaše volba: ";
            cin >> obchodMozn;

            switch(obchodMozn) {
                default:{
                    goto menu;
                }
                case 1:{
                    int obchodZbran;
                    obchodZbran:
                    system("cls");
                    cout << "Obchod se zbraněmi:" << endl << endl;
                    cout << "Tyto zbraně vám permanentně zvyšují staty" << endl << endl;
                    cout << "Váš rozpočet: " << playerQB << " QB" << endl << endl;
                    for(int Z = 0; Z <= ZbranID.size() - 1; Z++ ){ // int I > pro coutovani specifickĂ˝ck parametru
                        cout << Z << ") " << ZName.at(Z) << endl;
                        cout << "Zbraň Cena " << ZQBCost.at(Z) << " QB (Quantum Bits)" << endl;
                        cout << "Zbraň AT: " << ZAT.at(Z) << endl;
                        cout << "Zbraň HP: " << ZHP.at(Z) << endl;
                        cout << "Zbraň ER: " << ZER.at(Z) << endl << endl;
                        playerInvZbran.push_back(0);
                        if(playerQB < ZQBCost.at(Z)){
                            cout << "!! nedostatek QB na " << ZName.at(Z) << " !!" << endl << endl;
                        }

                    }
                    cout << ZName.size() << ") Opustit obchod a jít do meny obchodu" << endl << endl;
                    int ZbID;
                    cout << "Zvolte číslo: ";
                    cin >> ZbID;
                    if(ZbID == ZName.size()){
                        goto obchodMozn;
                    }
                    if(ZbID < 0 || ZbID > ZbranID.size() - 1) {
                        cout << endl << "Neplatná možnost" << endl;
                        system("PAUSE");
                        goto obchodZbran;
                    }
                    if(playerQB < ZQBCost.at(ZbID)){
                        cout << endl << "Nedostatek QB" << endl;
                        system("PAUSE");
                        goto obchodZbran;
                    } else {
                        cout << "Koupil jste: " << ZName.at(ZbID) << endl;
                        playerQB -= ZQBCost.at(ZbID);
                        playerAT += ZAT.at(ZbID);
                        playerMaxHP += ZHP.at(ZbID);
                        playerMaxER += ZER.at(ZbID);
                        playerInvZbran.at(ZbID) += 1;
                        system("PAUSE");
                        goto obchodZbran;
                    }

                }
                case 2:{
                    int obchodNara;
                    obchodNara:
                    system("cls");
                    cout << "Obchod s nářadím:" << endl << endl;
                    cout << "Nářadí přidá hráčí HP a je přístupné v boji" << endl << endl;
                    cout << "Váš rozpočet: " << playerQB << " QB" << endl << endl;
                    for(int N = 0; N <= NarID.size() - 1; N++){
                        cout << N << ") " << NarName.at(N) << endl;
                        cout << "Cena: " << NarQBCost.at(N) << " QB" << endl;
                        cout << "Base HR: " << NarPureHR.at(N) << " HP" << endl;
                        cout << NarHR.at(N) * 100 << "% HR z max HP" << endl;
                        cout << "celkem: " << NarPureHR.at(N) + NarHR.at(N) * playerMaxHP << " HP" << endl << endl;
                        playerInvNar.push_back(0);
                        if(playerQB < NarQBCost.at(N)){
                            cout << "!! nedostatek QB na " << NarName.at(N) << " !!" << endl << endl;
                        }
                    }
                    cout << NarName.size() << ") Opustit obchod a jít do meny obchodu" << endl << endl;
                    int NID;
                    cout << "Zvolte číslo: ";
                    cin >> NID;
                    if(NID == NarName.size()){
                        goto obchodMozn;
                    }
                    if(NID < 0 || NID > NarID.size() - 1) {
                        cout << endl << "Neplatná možnost" << endl;
                        system("PAUSE");
                        goto obchodNara;
                    }
                    if(playerQB < NarQBCost.at(NID)){
                        cout << endl << "Nedostatek QB" << endl;
                        system("PAUSE");
                        goto obchodNara;
                    } else {
                        cout << "Koupil jste: " << NarName.at(NID) << endl;
                        playerQB -= NarQBCost.at(NID);
                        playerInvNar.at(NID) += 1;
                        system("PAUSE");
                        goto obchodNara;
                    }
                }
            }

        }
        case 5:{
            system("cls");
            cout << "Váš inventář" << endl << endl;
            cout << "Zbraně:" << endl;

            for(int ZS = 0; ZS <= ZbranID.size() - 1; ZS++) { // Zbran size
                cout << playerInvZbran.at(ZS) << "x   " <<  ZName.at(ZS) << "   " << endl;
            }
            cout << endl;
            cout << "Nařadí:" << endl;
            for(int NS = 0; NS <= NarID.size() - 1; NS++) {
                cout << playerInvNar.at(NS) << "x   " << NarName.at(NS) << "   " <<  endl;
            }
            cout << endl;
            system("PAUSE");
            goto menu;

        }
        case 6:{
            return 0;
            goto menu;
        }
    }
}


