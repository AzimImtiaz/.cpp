#include <bits/stdc++.h>
using namespace std;
int main() 
{ 
    float x, y;
    int floor_val,ceil_val,round_val;
    cin >> x >> y; 
    floor_val = floor(x/y); 
    ceil_val = ceil(x/y);   
    round_val = round(x/y);
    cout << "floor "<< x<<" / "<<y <<" = "<< floor_val << endl;
    cout << "ceil "<< x<<" / "<<y<<" = " << ceil_val << endl;
    cout << "round "<< x<<" / "<<y<<" = " << round_val << endl; 
    return 0; 
}
