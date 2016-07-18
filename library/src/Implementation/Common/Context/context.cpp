#include "context.h"

Context::Context()
{

}

Context::~Context()
{

}

void Context::bindResource(ContextResource* p_Resource)
{
    this->m_ContextResources.push_back(p_Resource);
}

void Context::unbindResource(ContextResource* p_Resource)
{
    this->m_ContextResources.remove(p_Resource);
}


