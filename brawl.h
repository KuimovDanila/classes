#include <string>
using namespace std;
class Brawler {
protected:
    int hp;

    int damage;

    float ReloadTime;

    int level;

    int rang ;

    string type;

    string rarity;

public:
    Brawler();
    int GetHp();
    int GetDamage();
    float GetDPS();
    virtual void say();
    string GetRange();
    void GetType();
    string GetRarity();
    int GetRang();
    int GetLevel();
};
class Tank: public Brawler {

public:
    Tank();
    string GetRange();
};

class Support: public Brawler {
private:
    bool CanHill;
public:
    Support();
};

class Thrower: public Brawler {
public:
    Thrower();
    string GetRange();
};

class Sniper: public Brawler {


public:
    Sniper();
    string GetRange();
};

class Assasin: public Brawler {
public:
    Assasin();
};

class Piper: public Sniper {
public:

    Piper(int level, int rang);
    void say();
};
class ElPrimo: public Tank {
public:
    ElPrimo(int level, int rang);
    void say();
};
class Bull: public Tank {
public:
    Bull(int level, int rang);
    void say();
};
class Leon: public Assasin {
public:
    Leon(int level, int rang);
    void say();
};
class Spike: public Assasin {
public:
    Spike(int level, int rang);
    void say();
};
class Dynamike: public Thrower {
public:
    Dynamike(int level, int rang);
    void say();
};
class Poco: public Support {
public:
    Poco(int level, int rang);
    void say();
};




