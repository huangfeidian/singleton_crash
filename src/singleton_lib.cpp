#include "singleton_lib.h"

#include <iostream>

int global_var  = 1314;
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
