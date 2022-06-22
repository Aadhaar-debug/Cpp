#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Declaring a file pointer and creating a file
    ofstream makefile("Aadhaar.txt");

    //Writing to the created file
    makefile << "This file belongs to aadhaar kolu and his roll number is 2020a1r0404\n";
    
    //Declaring a string variable to copy the contents to
    string my_text;

    // Declaring a file pointer to read the contents 
    ifstream Myfile("Aadhaar.txt");

    //using a loop to copy all the contents to the variable
    while(getline(Myfile,my_text))
    {
        cout<<my_text;
    }

    //closing the decared file fuction
    Myfile.close();
    
    return 0;
}