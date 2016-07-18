#ifndef ICONTEXTRESOURCE_H
#define ICONTEXTRESOURCE_H

#include <list>
#include "IResource.h"

class IContext;

class IContextResource : IResource
{

protected:

    void ContextBind        (IContext*)	=	0;
    void ContextUnbind      (IContext*)	=	0;

public:

    virtual void                    onContextBind                   (IContext*)                     =   0;
    virtual void                    onContextUnbind                 (IContext*)                     =   0;


};

#endif // ICONTEXTRESOURCE_H
