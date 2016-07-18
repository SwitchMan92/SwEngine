#ifndef CONTEXTRESOURCE_H
#define CONTEXTRESOURCE_H

#include <list>
#include "icontextresource.h"
#include "context.h"

class ContextResource : IContextResource, Resource
{

private:

    std::list<Context*> 	m_Contexts;
    Context*				m_CurrentContext;

    void 					contextBind        	(Context*) 				final;
    void 					contextUnbind      	(Context*) 				final;

protected:

    virtual void 			onContextBind      	(Context*)      		=   0;
    virtual void 			onContextUnbind    	(Context*)      		=   0;


public:

    						ContextResource		();

    virtual Context*		getCurrentContext	();

};

#endif // CONTEXTRESOURCE_H
