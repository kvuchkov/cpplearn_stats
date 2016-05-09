
#ifndef __STATS_DATATABLE
#define __STATS_DATATABLE 1

class DataTable
{
public:
    virtual double next()=0;
    virtual bool hasNext()=0;
    DataTable(){}
    virtual ~DataTable(){}
private:
    DataTable(const DataTable& copy){}
};

#endif