#include <bits/stdc++.h>
using namespace std;

void perimeter(float x, float y) { 
    float pm = 2 * x + 2 * y;
    cout << "Perimeter:" << pm;
}
    
void area(float x, float y) {
    float zone = x * y;
    cout << "Area :" << zone;
}
    
int main() {
    float x, y;
    cout << "Enter Length & Width: " << endl;
    cin >> x >> y;
    perimeter(x, y);
    cout<<endl;
    area(x, y);
    return 0;
}
