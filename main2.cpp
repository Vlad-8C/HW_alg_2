
#include <iostream>


int* Fibon_q(int* Arr, int a, int b, const int q)
{
    
    Arr[0] = a;
    Arr[1] = b;
    for (int i = 2; i < q; ++i)
    {
        Arr[i] = Arr[i - 2] + Arr[i - 1];
    }
    return Arr;
    
}


int main()
//int main()
{
    
    int a{ 1 }, b{ 2 }, Q{};
    std::cout << "Enter quantyty number Fibonacci: \n"; std::cin >> Q;
    int* Arr = new int [Q] {};
    Fibon_q(Arr, a, b, Q);

    /*
    for (int k = 0; k < Q; ++k)
    {
        std::cout << Arr[k] << std::endl;
    }
    */
    std::cout<< "Max num Fibonacci: " << std::numeric_limits<int>::max() << "\n";
    std::cout << Arr[Q - 1] << std::endl;
    delete[] Arr;
    return EXIT_SUCCESS;
}

