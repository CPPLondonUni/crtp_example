
#pragma once

#include "animal.hpp"

namespace runtime {

class Dog : public Animal {
    std::string do_speak() const override;
};



}