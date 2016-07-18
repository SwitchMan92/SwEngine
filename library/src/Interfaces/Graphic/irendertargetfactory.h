#ifndef IRENDERTARGETFACTORY_H
#define IRENDERTARGETFACTORY_H

#include "irendertarget.h"

class IRenderTargetFactory
{
    virtual IRenderTarget   createRenderTarget(int p_Width, int p_Height)   =   0;
    virtual IRenderTarget   getRenderTarget(unsigned int p_Id)              =   0;
    virtual IRenderTarget   getRenderTarget(int p_Index)                    =   0;
    virtual void            deleteRenderTarget(unsigned int p_Id)           =   0;
};

#endif // IRENDERTARGETFACTORY_H
