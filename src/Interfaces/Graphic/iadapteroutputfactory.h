#ifndef IADAPTEROUTPUTFACTORY_H
#define IADAPTEROUTPUTFACTORY_H


#include <map>
#include "iadapteroutput.h"

class IAdapterOutputFactory
{
    virtual void                                    createAdapterOutputs()              =   0;
    virtual IAdapterOutput                          getAdapterOutput(unsigned int p_Id) =   0;
    virtual IAdapterOutput                          getAdapterOutput(int p_Index)       =   0;
    virtual std::map<unsigned int, IAdapterOutput>  getAdapterOutputs()                 =   0;
    virtual void                                    clearAdapterOutputs()               =   0;
};

#endif // IADAPTEROUTPUTFACTORY_H
