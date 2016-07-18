
#include <string>

#include "Interfaces/Common/iresource.h"

class IResourceManager
{

public:

	virtual IResource* 	loadResource	(std::string p_ResourcePath)	=	0;
	virtual	IResource* 	getResource		(unsigned int p_Id)				=	0;
	virtual void		unloadResource	(unsigned int p_Id)				=	0;
};

