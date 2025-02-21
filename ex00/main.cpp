#include "easyfind.hpp"
#include <random>

void addRandomIntToVector(std::vector<int>& vec, int lower, int upper) {
    std::random_device rd; //creates a random number
    std::mt19937 gen(rd()); //like srand(), makes the random number without it being the same every time at runtime
    std::uniform_int_distribution<> dis(lower, upper); //creates the range of random numbers in range of lower and upper

    // Add a random integer to the vector
    if (std::count(vec.begin(), vec.end(), dis(gen)) > 0) {
        return;
    }
    vec.push_back(dis(gen));
    // auto it = vec.end() - 1;
    // std::cout << "Added " << *it << " to the vector" << std::endl;
}

int main() {
    std::vector<int> vec;
    // for (int i = 0; i < 10; i++)
    //     vec.push_back(i);
    for (int i = 0; i < 100; ++i) {
        addRandomIntToVector(vec, 1, 100);
    }
    try {
        easyfind(vec, 5);
        easyfind(vec, 2);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}