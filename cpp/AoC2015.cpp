#include <map>
#include <iostream>
#include "..\hpp\AoC2015.hpp"

int main(int argc, char* argv[])
{
    std::pair <long long int, long long int> myAnsw;
    

    std::cout << "Problema 1 Anno 2015:" << std::endl;
    myAnsw = AoC01_15();
    std::cout << myAnsw.first << "\t" << myAnsw.second << std::endl << std::endl;

    std::cout << "Problema 2 Anno 2015:" << std::endl;
    myAnsw = AoC02_15();
    std::cout << myAnsw.first << "\t" << myAnsw.second << std::endl << std::endl;

    std::cout << "Problema 3 Anno 2015:" << std::endl;
    myAnsw = AoC03_15();
    std::cout << myAnsw.first << "\t" << myAnsw.second << std::endl << std::endl;

	return 0;
}