#include "opengladapter.h"

OpenGLAdapter::OpenGLAdapter()
{

}

unsigned int OpenGLAdapter::getId()
{
    return this->m_Id;
}

std::string OpenGLAdapter::getName()
{
    return this->m_Name;
}

void OpenGLAdapter::createAdapterOutputs()
{

}

IAdapterOutput* OpenGLAdapter::getAdapterOutput(unsigned int p_Id)
{
    return this->m_AdapterOutputs.at(p_Id);
}

std::map<unsigned int, IAdapterOutput*> OpenGLAdapter::getAdapterOutputs()
{
    return this->m_AdapterOutputs;
}

void OpenGLAdapter::clearAdapterOutputs()
{
    for (auto l_Iter : this->m_AdapterOutputs)
        l_Iter.second->clearContexts();
}


