#include<bits/stdc++.h>
using namespace std;

int display(string name[],int ID[],int size) { 
    for(int i=0;i<5;i++) { 
        cout<<"Student Information "<< i+1 <<endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"Enter ID: "<<ID[i]<<endl;
        cout<<endl<<endl; } 
    return 0; }
        
int main() { 
    string name[5];
    int ID[5];
    cout<<"--Enter Students Information--"<<endl;
    for(int i=0;i<5;i++) { 
        cout<<"Enter Student Information "<< i+1 <<endl;
        cout<<"Enter Name: "<<endl;
        cin>>name[i];
        cout<<"Enter ID: "<<endl;
        cin>>ID[i]; 
        cout<<endl<<endl; }
    
    display(name, ID, 5);
    
    return 0;
}
