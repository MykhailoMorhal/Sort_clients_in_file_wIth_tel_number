/*
 * ProcessDataFromFileRunner.hpp
 *
 *  Created on: 13 ���. 2020 �.
 *      Author: User
 */

#ifndef PROCESSDATAFROMFILERUNNER_HPP_
#define PROCESSDATAFROMFILERUNNER_HPP_

/*----------------------------------------------------------------------
								Include
*----------------------------------------------------------------------*/
#include "IProcessDataFromFile.hpp"

namespace pdff
{
	/* @brief: Runner for classes inherited from IProcessDataFromFile 
	 */
	class ProcessDataFromFileRunner
	{
	public:

		/*----------------------------------------------------------------------
								Constructors & Destructors
		*----------------------------------------------------------------------*/
		ProcessDataFromFileRunner(IProcessDataFromFile*);
		~ProcessDataFromFileRunner() = default;

		/*----------------------------------------------------------------------
										  Delete
		*----------------------------------------------------------------------*/
		ProcessDataFromFileRunner(const ProcessDataFromFileRunner&) = delete;
		ProcessDataFromFileRunner(ProcessDataFromFileRunner&&) = delete;
		ProcessDataFromFileRunner& operator=(const ProcessDataFromFileRunner&) = delete;
		ProcessDataFromFileRunner operator=(ProcessDataFromFileRunner&&) = delete;

		/*----------------------------------------------------------------------
										Interface
		*----------------------------------------------------------------------*/

		/* @brif: Run process data from IProcessDataFromFile
		 */
		void start();

	private:

		/* Values */
		IProcessDataFromFile* mProcDataFile;
	};
}



#endif /* PROCESSDATAFROMFILERUNNER_HPP_ */
