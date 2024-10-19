#include<iostream>
using namespace std;
class animal {
public:
 //   virtual void move()=0;

};
class lion: public animal {
public:
    void move() {
        cout << "lion moves in an unusual manner" << endl;

    }
};
class wolf: public animal {
public:
    void move () {
        cout << "wolves move for hours" << endl;
    }
};
int main() {
    lion l;
    l.move();
    wolf w;
    w.move();
    return 0;
}