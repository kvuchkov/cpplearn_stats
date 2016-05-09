#include "datatable.h"
#include <string>
#include <fstream>

#ifndef __STATS_FILEDATATABLE
#define __STATS_FILEDATATABLE 1

class FileDataTable : public DataTable
{
public:
    double next();
    bool hasNext();
    FileDataTable(const std::string & filename);
    ~FileDataTable();
private:
    std::ifstream in;
};

#endif 