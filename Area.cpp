#include <iostream>

using namespace std;

int main() {
    class area {
        public:
        void square() {
            double side;
            cout << endl << "Square" << endl;
            cout << "Enter number of side : ";
            cin >> side;
            cout << "The area of square = " << side*side << endl;
        }
        void rectancle() {
            double width, length;
            cout << endl << "Rectancle" << endl;
            cout << "Enter number of width : ";
            cin >> width;
            cout << "Enter number of length : ";
            cin >> length;
            cout << "The area of rectancle = " << width*length;
        }
        void triangle() {
            double base, height;
            cout << endl << "Triangle" << endl;
            cout << "Enter number of base : ";
            cin >> base;
            cout << "Enter number of height : ";
            cin >> height;
            cout << "The area of triangle = " << 0.5*base*height;
        }
        void rhombus() {
            double base, height;
            cout << endl << "Rhombus" << endl;
            cout << "Enter number of base : ";
            cin >> base;
            cout << "Enter number of height : ";
            cin >> height;
            cout << "The area of rhombus = " << base*height;
        }
};
    cout << "1 = Square" << endl;
    cout << "2 = Rectancle" << endl;
    cout << "3 = Triangle" << endl;
    cout << "4 = Rhombus" << endl;

    int choice;
    cout << endl << "Enter the number : ";
    cin >> choice;
    area a;
    
    if (choice == 1) {
        a.square();
    }
    if (choice == 2) {
        a.rectancle();
    }
    if (choice == 3) {
        a.triangle();
    }
    if (choice == 4) {
        a.rhombus();
    }
    
    return 0;
}
