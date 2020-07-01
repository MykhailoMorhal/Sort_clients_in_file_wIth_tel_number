/*
 * SortDataFileByNumber.hpp
 *
 *  Created on: 13 апр. 2020 г.
 *      Author: User
 */

#ifndef SORTDATAFILEBYNUMBER_HPP_
#define SORTDATAFILEBYNUMBER_HPP_

#include "IProcessDataFromFile.hpp"
#include <string>

namespace pdff
{
	class SortDataFileByNumber : public IProcessDataFromFile
	{
	public:
		SortDataFileByNumber(const std::string&);
		~SortDataFileByNumber();

		SortDataFileByNumber() = delete;
		SortDataFileByNumber(const SortDataFileByNumber&) = delete;
		SortDataFileByNumber(SortDataFileByNumber&&) = delete;
		SortDataFileByNumber& operator=(const SortDataFileByNumber&);
		SortDataFileByNumber operator=(SortDataFileByNumber&&);

		void processData() override;
	private:
		void readDataFromFile() override;

		std::string mPath;
	};
}



#endif /* SORTDATAFILEBYNUMBER_HPP_ */
