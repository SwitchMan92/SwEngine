#ifndef IADAPTERFACTORY_H
#define IADAPTERFACTORY_H

#include <map>
#include "iadapter.h"

class IAdapterFactory
{
    virtual IAdapter*                              createAdapters()                 = 0;
    virtual std::map<unsigned int, IAdapter*>      getAdapters()                    = 0;
    virtual IAdapter*                              getAdapter(unsigned int p_Id)    = 0;
    virtual void                                   clearAdapters()                  = 0;
};

#endif // IADAPTERFACTORY_H
