#ifndef CONTEXTRESOURCE_H
#define CONTEXTRESOURCE_H

#include <list>
#include "icontextresource.h"
#include "context.h"

class ContextResource : IContextResource, Resource
{

private:

    std::list<IContext*> 	m_Contexts;
    IContext*				m_CurrentContext;

    void 			contextBind        (IContext*) 			final;
    void 			contextUnbind      (IContext*) 			final;

protected:

    virtual void 	onContextBind      (Context*)      		=   0;
    virtual void 	onContextUnbind    (Context*)      		=   0;

    //virtual void 	resourceLoad		()					=	0;
    //virtual void 	resourceUnload		()					=	0;

public:

    				ContextResource		();

    IContext*		getCurrentContext	()					final;

};

#endif // CONTEXTRESOURCE_H
