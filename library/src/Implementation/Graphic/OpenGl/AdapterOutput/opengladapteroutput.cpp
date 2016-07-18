#include "opengladapteroutput.h"

OpenGLAdapterOutput::OpenGLAdapterOutput()
{

}

unsigned int OpenGLAdapterOutput::getId()
{
    return this->m_Id;
}

std::string OpenGLAdapterOutput::getName()
{
    return this->m_Name;
}

IGraphicContext* OpenGLAdapterOutput::createContext()
{
    return new OpenGLContext();
}

IGraphicContext* OpenGLAdapterOutput::getContext(unsigned int p_Id)
{
    return this->m_Contexts.at(p_Id);
}

void OpenGLAdapterOutput::deleteContext(unsigned int p_Id)
{
    this->m_Contexts.erase(p_Id);
}

std::map<unsigned int, IGraphicContext*> OpenGLAdapterOutput::getContexts()
{
    return this->m_Contexts;
}

void OpenGLAdapterOutput::clearContexts()
{
    for (auto l_Iter : this->m_Contexts)
    {
        delete l_Iter.second;
    }
}
