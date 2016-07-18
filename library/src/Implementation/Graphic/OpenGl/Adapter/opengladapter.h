#ifndef OPENGLADAPTER_H
#define OPENGLADAPTER_H

#include "iadapter.h"

class OpenGLAdapter : IAdapter
{
    friend class OpenGLAdapterFactory;

private:
    unsigned int    m_Id;
    std::string     m_Name;

    OpenGLAdapter();

    std::map<unsigned int, IAdapterOutput*> m_AdapterOutputs;

public:


    unsigned int                                   getId();
    std::string                                    getName();

    void                                           createAdapterOutputs();
    IAdapterOutput*                                getAdapterOutput(unsigned int p_Id);
    std::map<unsigned int, IAdapterOutput*>        getAdapterOutputs();
    void                                           clearAdapterOutputs();

};

#endif // OPENGLADAPTER_H
