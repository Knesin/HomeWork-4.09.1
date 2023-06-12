#include <iostream>
#include <vector>
#include <string>
#include "move_vector.h"


int main()
{
    std::vector <std::string> one = { "test_string1", "test_string2" };
    std::vector <std::string> two;
    move_vectors(one, two);
    for (const auto& i : two) {
        std::cout << i << std::endl;
    }
}
