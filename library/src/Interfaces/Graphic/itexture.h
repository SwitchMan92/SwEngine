#ifndef ITEXTURE_H
#define ITEXTURE_H


#include "icontextdependependentresource.h"

class ITextureManager;

class ITexture : public IContextResource
{
    friend class ITextureManager;

protected:
    virtual void setId(unsigned int)    =   0;

public:
    virtual unsigned int getId()        =   0;

};

#endif // ITEXTURE_H
