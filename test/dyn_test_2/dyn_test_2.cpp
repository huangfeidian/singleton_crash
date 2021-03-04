#include "singleton_lib.h"
#include <iostream>
extern "C" void dyn_test()
{
    auto& cur_singleton = singleton_test::instance();
    std::cout<<"dyn_test_2 get singleton at "<<&cur_singleton<<std::endl;
    std::cout<<"dyn_test_2 get global var at "<<&global_var<<std::endl;
}