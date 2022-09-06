#include <iostream>

using namespace std;

class Point {
    private:
        float x;
        float y;

    public:
        Point(float x, float y);
        float getX();
        float getY();
        void setX(float x);
        void setY(float y);    
};

Point::Point(float x, float y) {
    this -> x = x;
    this -> y = y;
}

float Point::getX() {
    return this -> x;
}

float Point::getY() {
    return this -> y;
}

void Point::setX(float x) {
    this -> x = x;
}

void Point::setY(float y) {
    this -> y = y;
}


int main() {
    Point p1 = Point(1.1, 2.2);         // statically allocated (stack)
    Point *p2 = new Point(4.5, 3.2);    // dynamically allocated (heap)

    cout << "p1's x is " << p1.getX() << '\n';
    cout << "p2's x is " << p2 -> getX() << '\n';

    cout << "changing p1's x" << '\n';
    p1.setX(10);

    cout << "p1's x is now " << p1.getX() << '\n';

    delete p2;

    return 0;
}
