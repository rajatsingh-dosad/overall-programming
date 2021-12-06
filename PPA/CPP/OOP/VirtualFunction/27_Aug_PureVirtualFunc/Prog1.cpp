
#include <iostream>

class Ambani {

    public:
        virtual void JIO(int x) {
            std::cout << "JIO" << std::endl;
        }


        virtual void Reliance() {
            std::cout << "Reliance Industry" << std::endl;
        }
};

class Anant : public Ambani {

    public:
        void  JIO(float y) override {
            std::cout << "JIO-mart" << std::endl;
        }
};

int main() {

    Ambani *obj1 = new Anant();
    obj1->JIO(19);

    return 0;
}