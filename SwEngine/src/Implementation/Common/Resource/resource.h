#ifndef RESOURCE_H
#define RESOURCE_H

#include <string>
#include "Interfaces/Common/iresource.h"

class Resource : IResource
{
	private:

		std::string m_Name;
		std::string m_Path;

	public:

		std::string getName();
		std::string getPath();
};

#endif
