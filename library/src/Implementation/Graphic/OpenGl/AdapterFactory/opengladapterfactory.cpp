#include "opengladapterfactory.h"

OpenGLAdapterFactory* OpenGLAdapterFactory::m_Instance = new OpenGLAdapterFactory();

OpenGLAdapterFactory* OpenGLAdapterFactory::getInstance()
{
    return OpenGLAdapterFactory::m_Instance;
}


OpenGLAdapterFactory::OpenGLAdapterFactory()
{
    this->createAdapters();
}

IAdapter* OpenGLAdapterFactory::createAdapters()
{
    return new OpenGLAdapter();
}

std::map<unsigned int, IAdapter*> OpenGLAdapterFactory::getAdapters()
{
    return this->m_Adapters;
}

IAdapter* OpenGLAdapterFactory::getAdapter(unsigned int p_Id)
{
    return this->m_Adapters.at(p_Id);
}

void OpenGLAdapterFactory::clearAdapters()
{
    for (auto l_Iter : this->m_Adapters)
        {
            l_Iter.second->clearAdapterOutputs();
        }
}

