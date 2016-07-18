#ifndef ICONTEXTRESOURCE_H
#define ICONTEXTRESOURCE_H

#include <list>
#include "iresource.h"

class IContext;

class IContextResource : IResource
{

protected:

    virtual void 					ContextBind        				(IContext*)						=	0;
    virtual void 					ContextUnbind      				(IContext*)						=	0;

public:

    virtual void                    onContextBind                   (IContext*)                     =   0;
    virtual void                    onContextUnbind                 (IContext*)                     =   0;

    virtual 						~IContextResource				()								{}
};

#endif // ICONTEXTRESOURCE_H
