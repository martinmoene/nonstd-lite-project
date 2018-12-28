// ./cmake/producer/test/producer.t.cpp

#include "producer/producer.hpp"
#include <cassert>

int main()
{
    assert( produce() == 42 );
}
