#include "openglcontext.h"

OpenGLContext::OpenGLContext()
{

}

void OpenGLContext::bindTexture(ITexture* p_Tex)
{
    Context::bindResource(p_Tex);
}

void OpenGLContext::unbindTexture(ITexture* p_Tex)
{
    Context::unbindResource(p_Tex);
}

void OpenGLContext::bindResource(IContextResource* p_Resource)
{
    Context::bindResource(p_Resource);
}

void OpenGLContext::unbindResource(IContextResource* p_Resource)
{
    Context::unbindResource(p_Resource);
}

void OpenGLContext::resetResource(IContextResource* p_Resource)
{
    Context::resetResource(p_Resource);
}

ITexture* OpenGLContext::createTexture()
{
    return OpenGLTextureFactory::createTexture();
}

void OpenGLContext::deleteTexture(unsigned int p_Id)
{
    OpenGLTextureFactory::deleteTexture(p_Id);
}

ITexture* OpenGLContext::getTexture(unsigned int p_Id)
{
    return OpenGLTextureFactory::getTexture(p_Id);
}

std::map<unsigned int, ITexture*> OpenGLContext::getTextures()
{
    return OpenGLTextureFactory::getTextures();
}




