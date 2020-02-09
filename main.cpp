#include <sqlite3.h>
#include <stdio.h>
#include <boost/atomic.hpp>
#include <google/protobuf/stubs/common.h>

int main()
{
    boost::atomic_bool b(true);

    printf("%s\n", sqlite3_libversion());

    printf("Hello world!!!!\n\n\n");
    return 0;
}