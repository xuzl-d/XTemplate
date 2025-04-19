#ifndef __PRINT_H__
#define __PRINT_H__
#include <iostream>

namespace XTP
{
    //打印任意参数
    template <typename T>
    void print(T val)
    {
        std::cout << val << std::endl;
    }

    template<typename T, typename... Types>
    void print(T val, Types... arg)
    {
        print(val);
        print(arg...);
    }

    //利用sizeof... 得到参数数量；折叠表达式展开参数
    template<typename... Types>
    void print2(Types... args)
    {
        //std::cout << sizeof...(Types) << std::endl; //输出剩余参数数量
        //(std::cout << ... << args) << std::endl; //直接输出无法分隔
        //(print(args), ...);
        (..., print(args));
    }


} // namespace XTP




#endif