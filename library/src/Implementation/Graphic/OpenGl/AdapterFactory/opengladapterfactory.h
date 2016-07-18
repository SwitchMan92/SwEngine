#ifndef OPENGLADAPTERFACTORY_H
#define OPENGLADAPTERFACTORY_H

#include "iadapterfactory.h"
#include "opengladapter.h"

class OpenGLAdapterFactory : IAdapterFactory
{

private:
    OpenGLAdapterFactory();

    std::map<unsigned int, IAdapter*> m_Adapters;

    static OpenGLAdapterFactory* m_Instance;

public:

    IAdapter*                               createAdapters();
    std::map<unsigned int, IAdapter*>       getAdapters();
    IAdapter*                               getAdapter(unsigned int p_Id);
    void                                    clearAdapters();
    static OpenGLAdapterFactory*            getInstance();
};

#endif // OPENGLADAPTERFACTORY_H
