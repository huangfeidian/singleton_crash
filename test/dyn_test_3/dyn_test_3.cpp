#include "singleton_lib.h"
#include <iostream>
#include "dyn_test_3.h"
void dyn_test_3()
{
    auto& cur_singleton = singleton_test::instance();
    std::cout<<"dyn_test_3 get singleton at "<<&cur_singleton<<std::endl;
    std::cout<<"dyn_test_3 get global var at "<<&global_var<<std::endl;
}