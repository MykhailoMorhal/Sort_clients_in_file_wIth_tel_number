/*
 * IProcessDataFromFile.hpp
 *
 *  Created on: 13 ���. 2020 �.
 *      Author: Mykhailo Morhal
 */

#ifndef IPROCESSDATAFROMFILE_HPP_
#define IPROCESSDATAFROMFILE_HPP_

namespace pdff
{
	/* @brief: 	Interface for read/write data from/to file and perform some process 
	 * 			which define in inherited class
	 */
	class IProcessDataFromFile
	{
	public:
		/*----------------------------------------------------------------------
								Constructor & Destructor
		*----------------------------------------------------------------------*/
		virtual ~IProcessDataFromFile() {};

		/*----------------------------------------------------------------------
										Interface
		*----------------------------------------------------------------------*/

		/* @brief: Read data from file
		 */
		virtual void readDataFromFile() = 0;

		/* @brief: Process file data. Depend on inherited implementation
		 */
		virtual void processData() = 0;
	};
}



#endif /* IPROCESSDATAFROMFILE_HPP_ */
