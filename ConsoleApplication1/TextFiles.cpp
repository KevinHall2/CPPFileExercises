// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

int main()
{
    std::fstream writer;
    writer.open("File.txt", std::ios::out | std::ios::app);
    if (writer.is_open()) 
    {
            writer << "Hello World!" << std::endl;
    }
    else
    {
        std::cerr << "Failed to opent the file" << std::endl;
    }
    writer.close();

}

