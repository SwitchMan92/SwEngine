#ifndef IADAPTER_H
#define IADAPTER_H

#include <string>
#include <map>
#include "iadapteroutput.h"

class IAdapter
{
public:
    virtual unsigned int    getId()     =   0;
    virtual std::string     getName()   =   0;

    virtual void                                           createAdapterOutputs()               =   0;
    virtual IAdapterOutput*                                getAdapterOutput(unsigned int p_Id)  =   0;
    virtual std::map<unsigned int, IAdapterOutput*>        getAdapterOutputs()                  =   0;
    virtual void                                           clearAdapterOutputs()                =   0;
};



#endif // IADAPTER_H
