#pragma once

struct raii_test
{
    int i = 0;
    raii_test();
    ~raii_test();
};
extern raii_test global_var;
class singleton_test
{
    singleton_test();
    singleton_test(const singleton_test& other) = delete;
    
public:
    static singleton_test& instance();
    ~singleton_test();

};