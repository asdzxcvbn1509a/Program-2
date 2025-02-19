#include <iostream>
#include <random>

using namespace std;

void dice() {
    int num_rolls;
    cout << "How many times do you want to roll the dice? : ";
    cin >> num_rolls;
    
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dist(1,6);
    
    int roll, counts[6];
    for (int i=0; i<num_rolls; i++) {
        roll = dist(gen);
        counts[roll-1]++;
    }
    for (int i=0; i<6; i++) {
        double percen = ((double)counts[i]/num_rolls) *100;
        cout << "Face " << i+1 << " = " << counts[i] << " times "<< "( " << percen << "% )"<<endl;
    }
}

void area() {
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
    else if (choice == 2) {
        a.rectancle();
    }
    else if (choice == 3) {
        a.triangle();
    }
    else if (choice == 4) {
        a.rhombus();
    }
}

void ball() {
    cout << "Permutation with Repetition" << endl;
    long long red, blue, sum, red_fac=1, blue_fac=1, sum_fac=1, result;
    cout << "Enter the number of red ball : ";
    cin >> red; 
    cout << "Enter the number of blue ball : ";
    cin >> blue;
    sum = red+blue;
    
    for (int i=1; i<=sum; i++) {
        sum_fac = sum_fac*i;
    }
    for (int i=1; i<=red; i++) {
        red_fac = red_fac*i;
    }
    for (int i=1; i<=blue; i++) {
        blue_fac = blue_fac*i;
    }
    result = sum_fac/(red_fac*blue_fac);//(a+b)!/(a!*b!)
    cout << "Number of possibilities for arranging balls = "<< result << " ways";
}
int main() {
    cout << "1 = Dice" << endl;
    cout << "2 = Area" << endl;
    cout << "3 = Ball" << endl;
    cout << "Enter the number : ";
    
    int num;
    cin >> num;
    cout << endl;
    
    if (num == 1) {
        dice();
    }
    else if (num == 2) {
        area();
    }
    else if (num == 3) {
        ball();
    }
    
    return 0;
}
