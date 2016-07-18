#ifndef ISHADERCHAIN_H
#define ISHADERCHAIN_H

#include <map>

#include "ishader.h"
#include "icontextresource.h"

class IShaderChain : IContextResource
{

protected:

    virtual void							bindShaderChain		()										=	0;
    virtual void							unbindShaderChain	()										=	0;

public:

    virtual void                            addShader			(IShader* p_Shader)						=   0;
    virtual void                            removeShader		(int p_Index)							=   0;
    virtual void                            removeShader		(unsigned int p_Id)						=   0;
    virtual void                            setShader			(int p_Position, IShader* p_Shader)		=   0;
    virtual IShader*						getShader			(int p_Position)						=	0;

    virtual									~IShaderChain		()										{}

};

#endif // ISHADERCHAIN_H
