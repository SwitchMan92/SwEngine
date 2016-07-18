#ifndef IRENDERTARGET_H
#define IRENDERTARGET_H

#include "icontextresource.h"

class IRenderTarget : IContextResource
{
    virtual unsigned int getId()    =   0;
};

#endif // IRENDERTARGET_H
