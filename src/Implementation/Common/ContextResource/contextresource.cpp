#include "contextresource.h"

ContextResource::ContextResource()
{

}

void ContextResource::contextBind(IContext* p_Context)
{
	this->onContextBind(p_Context);
    this->m_Contexts.push_back(p_Context);
}

void ContextResource::contextUnbind(IContext* p_Context)
{
	this->onContextUnbind(p_Context);
    this->m_Contexts.remove(p_Context);
}

IContext* ContextResource::getCurrentContext()
{
	return this->m_CurrentContext;
}
