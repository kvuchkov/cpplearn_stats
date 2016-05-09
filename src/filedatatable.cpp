#include "filedatatable.h"

static int a = 10;

FileDataTable::FileDataTable(const std::string & filename) : DataTable()
{
    in.open(filename);
}

FileDataTable::~FileDataTable()
{
    in.close();
    // std::cout << "dest" << std::endl;   
}

double FileDataTable::next()
{
    double d;
    in >> d;
    return d;  
}

bool FileDataTable::hasNext()
{
    return !!in;
}

