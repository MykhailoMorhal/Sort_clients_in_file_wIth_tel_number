/*
 * ProcessDataFromFileRunner.cpp
 *
 *  Created on: 13 ���. 2020 �.
 *      Author: User
 */

#include "ProcessDataFromFileRunner.hpp"

namespace pdff
{
	ProcessDataFromFileRunner::ProcessDataFromFileRunner(IProcessDataFromFile* procDataFile)
	: mProcDataFile(procDataFile) {}

	void ProcessDataFromFileRunner::ProcessDataFromFileRunner::start()
	{
		if(nullptr != mProcDataFile)
		{
			mProcDataFile->processData();
		}
	}
}


