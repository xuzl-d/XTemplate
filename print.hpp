#ifndef __PRINT_H__
#define __PRINT_H__
#include <iostream>

namespace XTP
{
    template <typename T>
    void print(T val)
    {
        std::cout << val << std::endl;
    }

    template<typename T, typename... Types>
    void print(T val, Types... arg)
    {
        std::cout<<val<<std::endl;
        print(arg...);
    }

} // namespace XTP




#endif