#include "inc/io.h"

std::vector<Data> io::readData()
{
    std::vector<Data> v;

    int a[6];

    while (!feof(stdin)) {

        scanf("%d %d %d %d %d %d \n", &a[0] , &a[1] ,&a[2] ,&a[3] ,&a[4] ,&a[5]);

        v.push_back(Data(a));
    }

    return v;
}