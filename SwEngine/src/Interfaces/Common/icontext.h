#ifndef ICONTEXT_H
#define ICONTEXT_H

#include <list>
#include "icontextresource.h"


class IContext
{

protected:

    virtual void bindResource(IContextResource*)   =   0;
    virtual void unbindResource(IContextResource*) =   0;
    virtual void resetResource(IContextResource*)  =   0;

};


#endif // ICONTEXT_H
