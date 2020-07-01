#include <stdlib.h>
#include <iostream>
#include <memory>
using namespace std;

#include "ProcessDataFromFileRunner.hpp"
#include "SortDataFileByNumber.hpp"

int main()
{
	pdff::SortDataFileByNumber sortDataFile("Text.txt");
	pdff::ProcessDataFromFileRunner procDataFileRunner(&sortDataFile);
	procDataFileRunner.start();
}



