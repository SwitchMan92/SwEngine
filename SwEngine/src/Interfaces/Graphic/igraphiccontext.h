#ifndef IGRAPHICCONTEXT_H
#define IGRAPHICCONTEXT_H

#include "icontext.h"
#include "itexturefactory.h"

class IGraphicContext : IContext
{

protected:

    virtual void                bindTexture(ITexture*)  			=   0;
    virtual void                unbindTexture(ITexture*)			=   0;

    virtual void				bindShader(IShader*)				=	0;
    virtual void				unbindShader(IShader*)				=	0;

    virtual void 				bindRenderTarget(IRenderTarget*)	=	0;
    virtual void				unbindRenderTarget(IRenderTarget*)	=	0;




};


#endif // IGRAPHICCONTEXT_H
