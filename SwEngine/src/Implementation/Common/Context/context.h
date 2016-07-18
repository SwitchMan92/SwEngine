#ifndef CONTEXT_H
#define CONTEXT_H

#include "icontext.h"

class Context : IContext
{

private:

    std::list<IContextResource*> m_ContextResources;

public:

    Context();
     ~Context();

protected:

    void bindResource(IContextResource*);
    void unbindResource(IContextResource*);
    void resetResource(IContextResource*);

};

#endif // CONTEXT_H
