#include<bits/stdc++.h>
using namespace std;

class prac {
    public:
        int price[5], sum = 0; // Fixed extra semicolon
        void input() {
            cout << "Enter each Price of five product:";
            for(int i = 0; i < 5; i++) {
                cin >> price[i];
            }
        }
        friend int sum(prac& sumobj); // Pass by reference for better practice
};

int sum(prac& sumobj) { // Updated to reference
    for(int i = 0; i < 5; i++) {
        sumobj.sum += sumobj.price[i];
    }
    cout << sumobj.sum;
    return sumobj.sum; // Added return statement
}

int main() {
    prac obj;
    obj.input();
    sum(obj); // Call friend function correctly
    return 0;
}
