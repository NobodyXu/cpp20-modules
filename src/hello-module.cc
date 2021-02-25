module;

#include <cstdio>

export module hello;

/**
 * Put pure template header after "export module", otherwise
 * use of std::is_same_v will be treated as error.
 */
#include <type_traits>

export void hello()
{
    std::puts("Hello, world!");
}

export
template <class T>
void template_function(T obj)
{
    if constexpr(std::is_same_v<T, int>)
        std::printf("obj = %d\n", obj);
    else if constexpr(std::is_same_v<T, const char*>)
        std::printf("obj = %s\n", obj);
    else if constexpr(std::is_same_v<T, char>)
        std::printf("obj = %c\n", obj);
    else
        std::printf("Unknown type");
}
