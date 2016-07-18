#include "opengltextureManager.h"

OpenGLTextureManager::OpenGLTextureManager()
{

}

ITexture* OpenGLTextureManager::createTexture()
{
    return nullptr;
}

void OpenGLTextureManager::deleteTexture(unsigned int p_Id)
{
    delete this->m_Textures.at(p_Id);
    this->m_Textures.erase(p_Id);
}

ITexture* OpenGLTextureManager::getTexture(unsigned int p_Id)
{
    return this->m_Textures.at(p_Id);
}

std::map<unsigned int, ITexture*> OpenGLTextureManager::getTextures()
{
    return this->m_Textures;
}
