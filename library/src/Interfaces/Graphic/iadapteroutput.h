#ifndef IADAPTEROUTPUT_H
#define IADAPTEROUTPUT_H

#include <string>
#include <map>
#include "igraphiccontext.h"

class IAdapterOutput
{

public:

    virtual std::string                                 getName()                           =   0;
    virtual unsigned int                                getId()                             =   0;

    virtual IGraphicContext*                            createContext()                     =   0;
    virtual void                                        deleteContext(unsigned int p_Id)    =   0;
    virtual IGraphicContext*                            getContext(unsigned int p_Id)       =   0;
    virtual std::map<unsigned int, IGraphicContext*>    getContexts()                       =   0;
    virtual void                                        clearContexts()                     =   0;
};

#endif // IADAPTEROUTPUT_H
