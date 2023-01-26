#include <iostream>
int main()
{
    int n, q, c;
    std::cout << "inserisci il numero da elevare al quadrato ed al cubo ";
    std::cin >> n;
    q = n * n;
    c = n * n * n;
    std::cout << n
              << " al quadrato e' " 
              << q << std::endl
              << n
              << " al cubo e' "
              << c;
    return 0;
}