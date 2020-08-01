/*
 * SortDataFileByNumber.hpp
 *
 *  Created on: 13 ���. 2020 �.
 *      Author: User
 */

#ifndef SORTDATAFILEBYNUMBER_HPP_
#define SORTDATAFILEBYNUMBER_HPP_

/*----------------------------------------------------------------------
								Include
*----------------------------------------------------------------------*/
#include "IProcessDataFromFile.hpp"
#include <string>

namespace pdff
{
	/* @brief: Sort data for file.
	 * Strucrute data file:
	 * ->Number: 
	 * ->SName: 
	 * ->Name: 
	 * ->Streat: 
	 * ->Flat number
	 * Main sorting criteria with client number 
	 */
	class SortDataFileByNumber : public IProcessDataFromFile
	{
	public:

		/*----------------------------------------------------------------------
								Constructor & Destructor
		*----------------------------------------------------------------------*/
		SortDataFileByNumber(const std::string&);
		~SortDataFileByNumber();

		/*----------------------------------------------------------------------
										Delete
		*----------------------------------------------------------------------*/
		SortDataFileByNumber() = delete;
		SortDataFileByNumber(const SortDataFileByNumber&) = delete;
		SortDataFileByNumber(SortDataFileByNumber&&) = delete;
		SortDataFileByNumber& operator=(const SortDataFileByNumber&);
		SortDataFileByNumber operator=(SortDataFileByNumber&&);

		/*----------------------------------------------------------------------
										Interface
		*----------------------------------------------------------------------*/
		void processData() override;
	private:
		void readDataFromFile() override;

		/* Values */
		std::string mPath;
	};
}



#endif /* SORTDATAFILEBYNUMBER_HPP_ */
