#pragma once

extern int global_var;
class singleton_test
{
    singleton_test();
    singleton_test(const singleton_test& other) = delete;
    
public:
    static singleton_test& instance();
    ~singleton_test();

};