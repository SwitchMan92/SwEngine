#ifndef IGRAPHICCONTEXT_H
#define IGRAPHICCONTEXT_H

#include "icontext.h"
#include "istateful.h"
#include "itexturefactory.h"

class IGraphicContext : IContext, IStateful
{

protected:

    virtual void                bindTexture			(ITexture*)  			=   0;
    virtual void                unbindTexture		(ITexture*)				=   0;

    virtual void				bindShaderChain		(IShader*)				=	0;
    virtual void				unbindShaderChain	(IShader*)				=	0;

    virtual void 				bindRenderTarget	(IRenderTarget*)		=	0;
    virtual void				unbindRenderTarget	(IRenderTarget*)		=	0;

    virtual void				onContextLost		()						=	0;
    virtual	void				onContextReset		()						=	0;
    virtual void				onFrameRender		()						=	0;

public:

    virtual						~IGraphicContext	()						{}

};


#endif // IGRAPHICCONTEXT_H
