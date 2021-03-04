#include <iostream>
#include <dlfcn.h>
#include "singleton_lib.h"

void call_dyn_test(const std::string& lib_name, int load_flag)
{
    void (*foo)();
    void *handle = dlopen(lib_name.c_str(), load_flag);
    if(!handle)
    {
        std::cout<<"cant open lib "<<lib_name<<std::endl;
        return;
    }
    *(void **) (&foo) = dlsym(handle, "dyn_test");
    const char* error;
    if((error = dlerror()) != NULL)
    {
        std::cout<<"fail to dlsym "<<error<<std::endl;
        return;
    }
    (*foo)();
}
int main()
{
    int flag = RTLD_LOCAL|RTLD_NOW;
    const auto& the_one = singleton_test::instance();
    call_dyn_test("./libdyn_test_1.so", flag);
    call_dyn_test("./libdyn_test_2.so", flag);
    return 1;
}