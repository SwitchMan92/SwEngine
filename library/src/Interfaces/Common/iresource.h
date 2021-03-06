#ifndef IRESOURCE_H
#define IRESOURCE_H

#include <string>

class IResource
{

protected:

	virtual void 					resourceLoad()			=	0;
	virtual void 					resourceUnload()		=	0;

	virtual int						setId(unsigned int)		=	0;

public:

	virtual void 					onResourceLoad()		=	0;
	virtual void 					onResourceUnload()		=	0;

	virtual unsigned int    		getId()     			=   0;

	virtual	std::string				getName()				=	0;
	virtual	std::string				getPath()				=	0;

	virtual							~IResource()			{}

};




#endif
