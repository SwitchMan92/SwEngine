#ifndef CONTEXT_H
#define CONTEXT_H

#include "icontext.h"
#include "contextresource.h"

class Context : IContext
{

private:

    std::list<ContextResource*> 		m_ContextResources;

protected:

    void 			bindResource		(ContextResource*);
    void 			unbindResource		(ContextResource*);

public:

    				Context				();
    				~Context			();


};

#endif // CONTEXT_H
