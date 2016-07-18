#ifndef IResourceMANAGER_H
#define IResourceMANAGER_H

#include <map>
#include <string>
#include "Implementation/Common/Resource/resource.h"

class ResourceManager
{
	private:

		unsigned int 							m_ResourceCounter;
		std::map<unsigned int, Resource*> 		m_Resources;

	protected:

		virtual Resource* 						onResourceLoad		(std::string p_ResourcePath)			=	0;
		virtual void 							onResourceUnload	(Resource* p_Resource)					=	0;

	public:

		Resource* 								loadResource		(std::string p_ResourcePath) 			final;
		virtual Resource* 						getResource			(unsigned int p_Id) 					final;
		void									unloadResource		(unsigned int p_Id)						final;
		std::map<unsigned int, IResource*>		getResources		()										final;


};



#endif
