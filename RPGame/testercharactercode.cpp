#include <iostream>
#include <string>

using namespace std;

class Character {
protected:
    double Health;
    double Defense;
    double Strength;

public:
    Character(double HP, double DF, double ST) : Health(HP), Defense(DF), Strength(ST) {}
    virtual void Attack() const = 0;
};

class Warrior : public Character {
public:
    Warrior(double HP, double DF, double ST) : Character(HP, DF, ST) {}

    void Attack() const {
        cout << "Warrior swings \"The Throngler\"\n";
    }
};

class Archer : public Character {
public:
    Archer(double HP, double DF, double ST) : Character(HP, DF, ST) {}

    void Attack() const {
        cout << "Archer shoots with \"The Great Eagle Bow\"!\n";
    }
};

class Mage : public Character {
public:
    Mage(double HP, double DF, double ST) : Character(HP, DF, ST) {}

    void Attack() const {
        cout << "Mage casts a spell of \"Self Destruct\"!\n";
    }
};

int main() {
    // sets stats
    Character* warrior = new Warrior(100, 80, 20);
    Character* archer = new Archer(80, 90, 30);
    Character* mage = new Mage(70, 60, 70);

    // showing off the attacks 
    warrior->Attack();
    archer->Attack();
    mage->Attack();

    return 0;
} 