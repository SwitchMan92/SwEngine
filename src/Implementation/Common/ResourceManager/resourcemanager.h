#ifndef IResourceMANAGER_H
#define IResourceMANAGER_H

#include <map>
#include <string>
#include "Interfaces/Common/Resource.h"

class ResourceManager
{
	private:

		unsigned int 						m_ResourceCounter;
		std::map<unsigned int, IResource*> 	m_Resources;

	protected:

		virtual IResource* 						onResourceLoad		(IResource* p_Resource)					=	0;
		virtual void 							onResourceUnload	(IResource* p_Resource)					=	0;

	public:

		IResource* 								loadResource		(std::string p_ResourcePath) 			final;
		IResource* 								getResource			(unsigned int p_Id) 					final;
		void									unloadResource		(unsigned int p_Id)						final;
		std::map<unsigned int, IResource*>		getResources		()										final;


};



#endif
