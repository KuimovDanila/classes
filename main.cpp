#include <iostream>
#include <cmath>
#include <string>
#include <chrono>
#include <random>
#include <fstream>
#include "brawl.h"

using namespace std;



int rand_uns(int min, int max) {
unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
static std::default_random_engine e(seed);
std::uniform_int_distribution<int> d(min, max);
return d(e);
}


int main()
{
    Brawler* brawlers[6];

     brawlers[0]= new Piper(rand_uns(1, 11), rand_uns(1, 35));
     brawlers[1]= new Poco(rand_uns(1, 11), rand_uns(1, 35));
     brawlers[2]= new Spike(rand_uns(1, 11), rand_uns(1, 35));
     brawlers[3]= new Bull(rand_uns(1, 11), rand_uns(1, 35));
     brawlers[4]= new Leon(rand_uns(1, 11), rand_uns(1, 35));
     brawlers[5]= new Dynamike(rand_uns(1, 11), rand_uns(1, 35));

    for (int i = 0; i < 6; i++) {
        brawlers[i] -> say();
        cout << brawlers[i] -> GetLevel() << " level" << endl;
        cout << brawlers[i] -> GetHp() << " HP" << endl;
        cout << "The Type is: ";
        brawlers[i] -> GetType();
        cout << "Range: " << brawlers[i] -> GetRange() << endl;
        if (i%2 == 0) {
            cout << "Rarity: " << brawlers[i] -> GetRarity()<< endl;
        }
        if (i == 1) {
            cout << "Damage per sec: " << brawlers[i] -> GetDPS() << endl;
        }
        if (i==5) {
            cout << "The rang is " << brawlers[i] -> GetRang() << endl;
        }
        cout << "=====================" << endl;
    }

    for (int i = 0; i < 6; i++) {
        delete brawlers[i];
    }
    return 0;
}
