#include "iostream"
#include "vector"
#include <node/node.h>

#include "inc/data.h"
#include "inc/io.h"

int main(int argc, char const *argv[])
{

    std::vector<Data> v(io::readData());

    // v8::

    std::cout << v.size() << " Done!\n";
    return 0;
}