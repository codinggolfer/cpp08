#include "Span.hpp"
#include <random>
#include <limits>

int main()
{
    try {
        Span sp = Span(15693);
        std::vector<int> tmpvec;
        const int MIN_VALUE = 1; // Minimum random value
        const int MAX_VALUE = 1000;

        // Create a random number generator
        std::random_device rd;  // Seed generator
        std::mt19937 gen(rd()); // Mersenne Twister PRNG
        std::uniform_int_distribution<int> distrib(MIN_VALUE, MAX_VALUE);
        
        std::generate_n(std::back_inserter(tmpvec), 1500, [&]() { return distrib(gen); });
    // Fill the vector with random numbers
        // for (int i = 0; i < 1561; ++i) {
        //     tmpvec.push_back(distrib(gen));
        // }


        sp.addNumber(6);
        sp.addNumber(3);
		sp.addNumber(9);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        // sp.addNumber(111);
       // sp.adderAll(tmpvec.begin(), tmpvec.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
return 0;
}