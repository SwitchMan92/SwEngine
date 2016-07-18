
#include "Implementation/Common/ResourceManager/resourcemanager.h"


IResource* ResourceManager::loadResource(std::string p_ResourcePath)
{
	Resource* l_Resource = this->onResourceLoad();
	this->m_Resources[this->m_ResourceCounter] = l_Resource;
	return l_Resource;
}

IResource* ResourceManager::getResource(unsigned int p_Id)
{
	return this->m_Resources[p_Id];
}

void ResourceManager::unloadResource(unsigned int p_Id)
{
	this->onResourceUnload(this->m_Resources[p_Id]);
	this->m_Resources.erase(p_Id);
}

std::map<unsigned int, IResource*> ResourceManager::getResources()
{
	return this->m_Resources;
}
