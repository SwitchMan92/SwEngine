#ifndef IRENDERTARGET_H
#define IRENDERTARGET_H

#include "icontextdependependentresource.h"

class IRenderTarget : IContextDependentResource
{
    virtual unsigned int getId()    =   0;
};

#endif // IRENDERTARGET_H
