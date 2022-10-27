#include <stdio.h>
#include <iostream>

using namespace std;

class Creature {
    public:
        int die() {
            cout << "die";
          return 0;
        }
        int reproduce() {
            cout << "reproduce";
            return 0;
        }
};

class World {
    public:
        int food() {
            cout << "food";
            return 0;
        }
        int createCreature() {
            cout << "new boi";
            return 0;
        }
};

class mainCreature : public Creature {
    
};

class otherCreature : public Creature {

};

int main() {
    Creature myCreature;
    myCreature.die();
    return 0;
}