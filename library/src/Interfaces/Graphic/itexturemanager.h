#ifndef ITEXTUREMANAGER_H
#define ITEXTUREMANAGER_H


#include <map>
#include "Interfaces/Graphic/itexture.h"

class ITextureManager
{

public:

    virtual ITexture*                           createTexture       ()                      =   0;
    virtual void                                deleteTexture       (unsigned int p_Id)     =   0;
    virtual ITexture*                           getTexture          (unsigned int p_Id)     =   0;
    virtual std::map<unsigned int, ITexture*>   getTextures         ()                      =   0;

    virtual										~ITextureManager	()						{}

};

#endif // ITEXTUREMANAGER_H
