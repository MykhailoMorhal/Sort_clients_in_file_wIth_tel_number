/*----------------------------------------------------------------------
								Include
*----------------------------------------------------------------------*/
#include <stdlib.h>
#include <iostream>
#include <memory>
#include "ProcessDataFromFileRunner.hpp"
#include "SortDataFileByNumber.hpp"

//namespace pdff (process data from file) contain feature for sort data from file with tel number
using namespace pdff;

/* Main program loop */
int main()
{
	pdff::SortDataFileByNumber sortDataFile("Text.txt");
	pdff::ProcessDataFromFileRunner procDataFileRunner(&sortDataFile);
	procDataFileRunner.start();
}



