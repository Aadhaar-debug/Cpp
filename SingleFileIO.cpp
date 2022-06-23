// cpp program - working with a single file 
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream outf("ITEM");       //connect the item file to outf

    cout << "Enter the item name" << endl;

    char name[30];

    cin >> name;

    outf << name << endl;        //write to file item

    cout << "Enter the item cost" << endl;

    float cost;

    cin >> cost;

    outf << cost << "\n"; 

    outf.close();               //Disconnect the item file from the outf

    // ifstream inf("ITEM");       //Connect the item file to inf

    // inf >> name;
    // inf >> cost;
    // cout << endl;
    // cout << "Item name : " << name << endl;
    // cout << "Item cost : " << cost << endl;

    // inf.close();                //Disconnect item from the inf
    
    return 0;
}