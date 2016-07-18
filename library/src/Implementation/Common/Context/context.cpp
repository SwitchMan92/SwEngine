#include "context.h"

Context::Context()
{

}

Context::~Context()
{

}

/*
void IContext::bindResource(IContextResource* p_Resource)
{
    p_Resource->ContextBind(this);
}

void IContext::unbindResource(IContextResource* p_Resource)
{
    p_Resource->ContextUnbind(this);
}

void IContext::resetResource(IContextResource* p_Resource)
{
    this->unbindResource(p_Resource);
    this->bindResource(p_Resource);
}
*/

void Context::bindResource(IContextResource* p_Resource)
{
    this->m_ContextResources.push_back(p_Resource);
    IContext::bindResource(p_Resource);
}

void Context::unbindResource(IContextResource* p_Resource)
{
    this->m_ContextResources.remove(p_Resource);
    IContext::unbindResource(p_Resource);
}

void Context::resetResource(IContextResource* p_Resource)
{
    IContext::resetResource(p_Resource);
}

