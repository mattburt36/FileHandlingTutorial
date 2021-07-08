#include <iostream>
#include <fstream>
#include <string> 
using namespace std; 

int main()
{
    fstream myFile; 
    myFile.open("Matt.txt", ios::out);  // Write to file and create
    if (myFile.is_open())
    {
        myFile << "Hello\n"; 
        myFile << "This is the second line\n";
        myFile.close();
    }
    myFile.open("Matt.txt", ios::app);  // Append, use this to add to end of file  
    if (myFile.is_open())
    {
        myFile << "Appended Hello\n";
        myFile.close();
    }
    system("pause>0");
}