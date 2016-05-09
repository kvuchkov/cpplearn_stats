#include "average.h"

Average::Average(DataTable * dt) : Aggregator(dt)
{
    this->dataTable = dt;
}

double Average::compute()
{
    double sum=0;
    int count = 0;
    while(dataTable->hasNext())
    {
        count++;
        sum += dataTable->next();
    }
    
    return sum/count;
}