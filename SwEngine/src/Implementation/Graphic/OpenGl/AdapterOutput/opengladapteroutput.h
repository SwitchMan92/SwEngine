#ifndef OPENGLADAPTEROUTPUT_H
#define OPENGLADAPTEROUTPUT_H

#include "iadapteroutput.h"
#include "igraphiccontext.h"
#include "openglcontext.h"

class OpenGLAdapterOutput : IAdapterOutput
{

private:
    unsigned int m_Id;
    std::string m_Name;

    std::map<unsigned int, IGraphicContext*> m_Contexts;

public:
    OpenGLAdapterOutput();

    std::string                                 getName()                           ;
    unsigned int                                getId()                             ;

    IGraphicContext*                            createContext()                     ;
    void                                        deleteContext(unsigned int p_Id)    ;
    IGraphicContext*                            getContext(unsigned int p_Id)       ;
    std::map<unsigned int, IGraphicContext*>    getContexts()                       ;
    void                                        clearContexts()                     ;

};

#endif // OPENGLADAPTEROUTPUT_H
