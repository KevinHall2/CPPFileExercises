#include <iostream>
#include <fstream>

int main()
{
	struct Data
	{
		int health;
		int attack;
    };

	//makes a binary file with 15 datas saved in it
	std::fstream file;

	//opens the file in binary mode for reading
	file.open("Data.dat", std::ios::in | std::ios::binary);

	//checks if the file is open
	if (file.is_open())
	{
		//moves the read marker to the 13th data point
		file.seekg(sizeof(Data) * 12, std::ios::beg);
		//creates a buffer
		Data item;
		//reads into the buffer
		file.read((char*)&item, sizeof(Data));
		//prints the data
		std::cout << item.health << ", " << item.attack << std::endl;
	}
	else
	{
		std::cerr << "Failed to open the file." << std::endl;
	}
	file.close();
}
