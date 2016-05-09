#ifndef __STATS_AGGREGATOR
#define __STATS_AGGREGATOR 1

#include "datatable.h"

class Aggregator
{
public:
    virtual double compute() =0;
    Aggregator(DataTable * dt);
    virtual ~Aggregator(){}
protected:
    DataTable *dataTable;
};

#endif