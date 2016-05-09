#ifndef __STATS_AVERAGE
#define __STATS_AVERAGE 1

#include "aggregator.h"

class Average : public Aggregator
{
public:
    Average(DataTable * dt);
    double compute();
};

#endif