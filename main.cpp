#include <iostream>
#include <windows.h>

using namespace std;

void Gen()
{
    // should start from 33 aned end at 126 , because 32 is a space bar and 127 mean Delete
    for (int i = 33; i < 127; i++)
    {
         std::cout  <<  "ASCII Code: "  << i << " = " <<(char)i    <<"\n";
    }
}

void Welcome()
{
    system("cls"); // clean everything from console
    std::string username; // set up a new var

    std::cout<<"Enter Your Name: " <<endl;
    std::cin >> username; // input
    Sleep(600); 
    system("cls"); // clean everything from console
    std::cout<<"Welcome "<< "To the Code House, " << username << "\n" <<std::endl;
    std::cout<<"Enjoy your coding journey~ Have Fun with it." <<std::endl;
}

int main()
{
    Gen(); //calling function
    Welcome(); //calling function
    std::cin.get(); // waitting for input(pasue console for us to see)
    return 0; 
}