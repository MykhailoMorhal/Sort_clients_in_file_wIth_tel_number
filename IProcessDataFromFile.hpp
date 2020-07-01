/*
 * IProcessDataFromFile.hpp
 *
 *  Created on: 13 апр. 2020 г.
 *      Author: User
 */

#ifndef IPROCESSDATAFROMFILE_HPP_
#define IPROCESSDATAFROMFILE_HPP_

namespace pdff
{
	class IProcessDataFromFile
	{
	public:
		virtual ~IProcessDataFromFile() {};

		virtual void readDataFromFile() = 0;
		virtual void processData() = 0;
	};
}



#endif /* IPROCESSDATAFROMFILE_HPP_ */
