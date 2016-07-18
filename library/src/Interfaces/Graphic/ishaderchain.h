#ifndef ISHADERCHAIN_H
#define ISHADERCHAIN_H

#include <map>

#include "ishader.h"
#include "icontextdependependentresource.h"

class IShaderChain : IContextDependentResource
{
    virtual map<unsigned int, IShader*>     getShaderChain()                                            =   0;
    virtual void                            setShaderChain(map<unsigned int, Ishader*> p_ShaderChain)   =   0;
    virtual void                            addShader(IShader* p_Shader)                                =   0;
    virtual void                            removeShader(int p_Index)                                   =   0;
    virtual void                            removeShader(unsigned int p_Id)                             =   0;
    virtual void                            setShader(int p_Position, IShader* p_Shader)                =   0;
    virtual void							bindShaderChain()											=	0;
    virtual void							unbindShaderChain()											=	0;
};

#endif // ISHADERCHAIN_H
