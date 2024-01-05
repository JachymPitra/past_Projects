#include <iostream> //iostream
#include <vector> //prikaz pro praci s vectorama
#include <experimental/random> // prikaz na random hodnoty

using namespace std;

vector<int> hodnota = {

};

vector<int> velkaHodnota = {

};


int main() {
    int q;

    cout << "Mchani v poli" << endl << endl;
    cout << "Zadejte kolik cisel chcete mit na promichani(vcetne nuly):";
    cin >> q;
    for(int a = 0; a < q; a++){
        hodnota.push_back(a);
        velkaHodnota.push_back(a * 10);
    }
    for(int b = 0; b < hodnota.size(); b++){
        cout << hodnota[b] << " --- " << velkaHodnota[b] << endl;
    }

    cout << endl << "*cary mary*" << endl << endl;

    for(int w = 0; w < q; w++) {
        //cout << experimental::randint(0, w) << endl;
        int random = experimental::randint(0, q - 1 - w);
        swap(velkaHodnota.at(q - 1),velkaHodnota.at(random));

    }
    for(int c = 0; c < hodnota.size(); c++){
        cout << hodnota[c] << " --- " << velkaHodnota[c] << endl;
    }
}
