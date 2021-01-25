#include <string>
#include <vector>

auto foo(int a, float b)
{
//    if (a < b)
//        return a;
    return b;
//    return (a < b) ? a : b;
}

auto bar(int a, int b);

auto baz(int a, int b) -> int;

auto boo(int a, int b) -> decltype(a);


void autoCheck()
{
    int i = 0;
    auto ai = 0; // идентично

    float f = 1 + 2;
    auto af = float(1 + 2); // идентично

    int j = 0, k = 0.0;
    //auto aj = 0, ak = 0.0; // не компилируется

    std::string s = "hello";
    auto as = "hello"; // идентично

    std::vector<bool> v;
    std::vector<bool>::iterator vi = v.begin(); // мгого букв
    auto avi = v.begin(); // мало букв

    //auto a; // тип не выведется

    auto z1 = foo(1, 2);
    //auto z2 = bar(1, 2); // не скомпилится
    //auto z3 = baz(1, 2); // нет тела ф-ции, а так все ок
    //auto z4 = boo(1, 2); // нет тела ф-ции, а так все ок

}