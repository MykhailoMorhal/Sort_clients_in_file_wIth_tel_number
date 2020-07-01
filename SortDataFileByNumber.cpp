/*
 * SortDataFileByNumber.cpp
 *
 *  Created on: 13 апр. 2020 г.
 *      Author: User
 */
#include <fstream>
#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include "SortDataFileByNumber.hpp"

namespace pdff
{
	SortDataFileByNumber::SortDataFileByNumber(const std::string& path)
	: mPath(path) {}

	SortDataFileByNumber::~SortDataFileByNumber() {}

	void SortDataFileByNumber::readDataFromFile()
	{
		/* do nothing */
	}

	void SortDataFileByNumber::processData()
	{
		std::vector<std::string> sortData;
		try
		{
			std::fstream infile(mPath, std::ifstream::in );
			std::string line;

			while (std::getline(infile, line))
			{
				sortData.push_back(line);
			}
			infile.close();

			std::sort ( sortData.begin(), sortData.end() );

			std::fstream outFile(mPath, std::fstream::out );
			for(auto elem : sortData)
			{
				std::cout<< elem << std::endl;
				outFile << elem << "\n";
			}
			outFile.close();

		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
}

