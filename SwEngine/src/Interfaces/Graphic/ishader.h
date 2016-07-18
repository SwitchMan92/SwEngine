#ifndef ISHADER_H
#define ISHADER_H

#include "icontextdependependentresource.h"


class IShader : IContextDependentResource
{
    virtual unsigned int    getId()     =   0;
};

#endif // ISHADER_H
