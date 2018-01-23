
# C++ London University CRTP Example #

This is a mini-project comparing an implementation of *dynamic polymorphism*
(using virtual functions) with *static polymorphism* (via templates).

This project contains two executables, `runtime_example` `crtp_example`.

Tasks
-----

  * Look at the code in both the `runtime` and `crtp` folders. Notice the
    CRTP allows us to use static polymorphism in a way that closely resembles
    runtime polymorphism.
    
  * Add a new derived class `Cat` to both projects. What happens if you don't
    implement the `do_speak()` function? What sort of errors do you get?
    
  * Add a new base class called `AnimalFood`, and derived classed `CatFood` and
    `DogFood`. See if you can do this in both runtime-style and CRTP-style.
    
  * Add a new method `bool eat(const AnimalFood& food)` to the `Animal` base class,
    dispatching to a `bool do_eat(food)` implementation in the derived classes.
    
    - For the `Dog` implementation, return `true` if `food` is a `DogFood`, and
      `false` otherwise
    - For the `Cat` implementation, do the same for `CatFood`