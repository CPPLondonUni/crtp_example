
#include "crtp/dog.hpp"

int main()
{
    crtp::Dog dog{};

    crtp::listen_to(dog);
}
