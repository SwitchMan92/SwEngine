#ifndef IGRAPHICCONTEXTFACTORY_H
#define IGRAPHICCONTEXTFACTORY_H

#include <map>
#include "igraphiccontext.h"

class IGraphicContextFactory
{
    virtual IGraphicContext*                           	createContext()                     =   0;
    virtual void                                        deleteContext(unsigned int p_Id)    =   0;
    virtual IGraphicContext                             getContext(unsigned int p_Id)       =   0;
    virtual IGraphicContext                             getContext(int p_Index)             =   0;
    virtual std::map<unsigned int, IGraphicContext>     getContexts()                       =   0;

    virtual												~IGraphicContext()					{}

};

#endif // ICONTEXTFACTORY_H
