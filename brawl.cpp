#include "brawl.h"


    Brawler::Brawler() {

    }

    Brawler::GetHp() {
    return hp;
    }

    Brawler::GetDamage() {
    return damage;
    }

    Brawler::GetDPS() {
    return (int(100*damage/ReloadTime)/100);
    }

    Brawler::say() {
    cout << "RRRrrRRrrrRR" << endl;
    };

    Brawler::GetRange() {
    return "No info";
    };

    Brawler::GetType() {
    cout << type << endl;
    }

    Brawler::GetRarity() {
    return rarity;
    }

    Brawler::GetRang() {
    return rang;
    }

    Brawler::GetLevel() {
    return level;
    }

    Tank::Tank() {
    this -> type = "Tank";
    this -> ReloadTime = 0.7;
    }
    Tank::GetRange() {
    return "Low Range";
    }

    Support::Support() {
    this -> type = "Support";
    this -> ReloadTime = 1.2;
    this -> CanHill = true;
    }

    Thrower::Thrower() {
    this -> type = "Thrower";
    this -> ReloadTime = 1.0;
    }

    Thrower::GetRange() {
    return "Above average";
    }

    Sniper::Sniper() {
    this -> type = "Sniper";
    this -> ReloadTime = 1.6;
    }
    Sniper::GetRange() {
    return "High";
    }


    Assasin::Assasin() {
    this -> type = "Assasin";
    this -> ReloadTime = 1.3;
    }

    Piper::Piper(int level, int rang) {
    cout << "A Piper created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 2400 + 240*(level - 1);
    this -> damage = 1520 + 152*(level - 1);
    this -> rarity = "EPIC";
    }

    Piper::say() {
    cout << "I'm sugar and spice!" << endl;
    }



    ElPrimo::ElPrimo(int level, int rang) {
    cout << "A ElPrimo created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 6000 + 600*(level - 1);
    this -> damage = 1440 + 144*(level - 1);
    this -> rarity = "RARE";
    }

    ElPrimo::say() {
    cout << "EEEEEEEEl PRIIIIIIIIIMOOO" << endl;
    }

    Bull::Bull(int level, int rang) {
    cout << "A Bull created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 5000 + 500*(level - 1);
    this -> damage = 2000 + 200*(level - 1);
    this -> rarity = "RARE";
    }

    Bull::say() {
    cout << "Do you wanna browl??" << endl;
    }


    Leon::Leon(int level, int rang) {
    cout << "A Leon created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 3400 + 340*(level - 1);
    this -> damage = 1920 + 192*(level - 1);
    this -> rarity = "LEGENDARY";
    }

    Leon::say() {
    cout << "Invisibility!" << endl;
    }


    Spike::Spike(int level, int rang) {
    cout << "A Spike created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 2400 + 240*(level - 1);
    this -> damage = 3360 + 336*(level - 1);
    this -> rarity = "LEGENDARY";
    }

    Spike::say() {
    cout << "(silence...)" << endl;
    }

    Dynamike::Dynamike(int level, int rang) {
    cout << "A Dynamike created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 2800 + 280*(level - 1);
    this -> damage = 1600 + 160*(level - 1);
    this -> rarity = "SUPER-RARE";
    }

    Dynamike::void say() {
    cout << "Diino - miiite!" << endl;
    }


    Poco::Poco(int level, int rang) {
    cout << "A Poco created" << endl;
    this -> level = level;
    this -> rang = rang;
    this -> hp = 3700 + 370*(level - 1);
    this -> damage = 800 + 80*(level - 1);
    this -> rarity = "RARE";
    }

    Poco::say() {
    cout << "Give me a beat!" << endl;
    }
