#ifndef OPENGLTEXTUREMANAGER_H
#define OPENGLTEXTUREMANAGER_H


#include "itexturemanager.h"

class OpenGLTextureManager : ITextureManager
{
private:
    std::map<unsigned int, ITexture*> m_Textures;

public:
    OpenGLTextureManager();

    ITexture*                           createTexture       ();
    ITexture*                           getTexture          (unsigned int p_Id);
    void                                deleteTexture       (unsigned int p_Id);

    std::map<unsigned int, ITexture*>   getTextures         ();
};

#endif // OPENGLTEXTUREMANAGER_H
