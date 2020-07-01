/*
 * ProcessDataFromFileRunner.hpp
 *
 *  Created on: 13 ���. 2020 �.
 *      Author: User
 */

#ifndef PROCESSDATAFROMFILERUNNER_HPP_
#define PROCESSDATAFROMFILERUNNER_HPP_

#include "IProcessDataFromFile.hpp"

namespace pdff
{
	class ProcessDataFromFileRunner
	{
	public:
		ProcessDataFromFileRunner(IProcessDataFromFile*);
		ProcessDataFromFileRunner() = delete;
		ProcessDataFromFileRunner(const ProcessDataFromFileRunner&) = delete;
		ProcessDataFromFileRunner(ProcessDataFromFileRunner&&) = delete;
		ProcessDataFromFileRunner& operator=(const ProcessDataFromFileRunner&) = delete;
		ProcessDataFromFileRunner operator=(ProcessDataFromFileRunner&&) = delete;

		void start();
	private:
		IProcessDataFromFile* mProcDataFile;
	};
}



#endif /* PROCESSDATAFROMFILERUNNER_HPP_ */
