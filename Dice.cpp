#include <iostream>
#include <random>

using namespace std;

int main() {
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
    return 0;
}
