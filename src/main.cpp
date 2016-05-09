#include <iostream>
#include "filedatatable.h"
#include "average.h"
using namespace std;

int main(int argc, char * argv[])
{
    if(argc != 2)
    {
        cout << "Missing input file.\nUsage: ./e <path to input file>" << endl;
        return -1;
    }
    string datafile = argv[1];
    DataTable *dt = new FileDataTable(datafile);
    Aggregator *agg = new Average(dt);
    cout << "agg:" << agg->compute() << endl;
    delete agg;
    delete dt;
    return 0;
}