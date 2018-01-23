
#include "dog.hpp"

namespace crtp {

std::string Dog::do_speak() const
{
    return "woof woof!";
}

}