
#pragma once

#include "animal.hpp"

namespace crtp {

class Dog : public Animal<Dog> {
    std::string do_speak() const;

    friend class Animal<Dog>;
};

}