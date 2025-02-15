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
            cout << "The perimeter of square = " << side*4 << endl;
        }
};
    cout << "1 = Square" << endl;
    cout << "2 = Rectancle" << endl;
    cout << "3 = Triangle" << endl;
    cout << "4 = rhombus" << endl;
    cout << "5 = Parallelogram" << endl;
    cout << "6 = Kite-shaped rectangular" << endl;
    cout << "7 = trapezium" << endl;
    
    int choice;
    cout << endl << "Enter the number : ";
    cin >> choice;
    area a;
    
    if (choice == 1) {
        a.square();
    }
    if (choice == 2) {
        
    }
    if (choice == 3) {
        
    }
    if (choice == 4) {
        
    }
    if (choice == 5) {
        
    }
    if (choice == 6) {
        
    }
    if (choice == 7) {
        
    }
    return 0;
}
