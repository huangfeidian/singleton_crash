#include "singleton_lib.h"

#include <iostream>

raii_test::raii_test()
{
    std::cout<<"raii_test ctor at "<<this<<std::endl;
}
raii_test::~raii_test()
{
    std::cout<<"raii_test dtor at "<<this<<std::endl;
}

raii_test global_var;
singleton_test::singleton_test()
{
    std::cout<<"singleton_test create at "<<this<<std::endl;
}

singleton_test::~singleton_test()
{
    std::cout<<"singleton_test destroyed at "<<this<<std::endl;
}

singleton_test& singleton_test::instance()
{
    static singleton_test the_one;
    return the_one;
}
