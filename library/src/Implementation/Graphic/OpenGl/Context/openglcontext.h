#ifndef OPENGLCONTEXT_H
#define OPENGLCONTEXT_H

#include "context.h"
#include "igraphiccontext.h"
#include "opengltexturefactory.h"

class OpenGLContext : Context, IGraphicContext, OpenGLTextureFactory
{

private:
    OpenGLContext();

    void                                bindResource        (IContextResource*);
    void                                unbindResource      (IContextResource*);
    void                                resetResource       (IContextResource*);

public:
    void                                bindTexture         (ITexture*);
    void                                unbindTexture       (ITexture*);

    ITexture*                           createTexture       ();
    void                                deleteTexture       (unsigned int p_Id);
    ITexture*                           getTexture          (unsigned int p_Id);
    std::map<unsigned int, ITexture*>   getTextures         ();

};

#endif // OPENGLCONTEXT_H
