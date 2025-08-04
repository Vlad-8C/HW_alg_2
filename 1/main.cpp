
#include <iostream>


int Fibon(int a, int b, int q)
{
    if (q == 0) return b;
    int buf{ a + b };
    Fibon(b, buf, q - 1);
}


int main()
{
    int a{ 1 }, b{ 2 }, Q{};
    std::cout << "Enter quantyty number Fibonacci: \n"; std::cin >> Q;
    std::cout << Fibon(a,b,Q-2) << "\n";
    return EXIT_SUCCESS;
}

