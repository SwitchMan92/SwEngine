#ifndef IRENDERTARGETFACTORY_H
#define IRENDERTARGETFACTORY_H

#include "irendertarget.h"

class IRenderTargetFactory
{

public:

    virtual IRenderTarget*		createRenderTarget		(int, int)			=   0;
    virtual IRenderTarget*		getRenderTarget			(unsigned int)		=   0;
    virtual void            	deleteRenderTarget		(unsigned int)		=   0;

    virtual						~IRenderTargetFactory	()					{}

};

#endif // IRENDERTARGETFACTORY_H
