#include <iostream>
#include <windows.h>

void Gen()
{
    // should start from 33 aned end at 126 , because 32 is a space bar and 127 mean Delete
    for (int i = 33; i < 127; i++)
    {
         std::cout  <<  "ASCII Code: "  << i << " = " <<(char)i    <<"\n";
    }
}


int main()
{
    Gen(); //calling function
    std::cin.get(); // waitting for inut
    return 0; 
}