
#include "nonstd/any.hpp"
#include "nonstd/expected.hpp"
#include "nonstd/optional.hpp"
#include "nonstd/variant.hpp"

int main()
{
    nonstd::any a{ nonstd::in_place_type<double>, 1.23 };
    nonstd::expected<int, int> exp{ nonstd::in_place, 42 };
    nonstd::optional<int > opt{ nonstd::in_place, 7 };
    nonstd::variant<char, int, double > var{ nonstd::in_place_type<char>, '7' };
}

// try: c++11, c++14, c++17
// g++ -Wall -std=c++11 -I../../any-lite/include -I../../expected-lite/include -I../../optional-lite/include -I../../variant-lite/include -o combine-any-exp-opt-var.exe combine-any-exp-opt-var.cpp

// try: c++14, c++17, c++latest
// cl -EHsc -std:c++14 -I../../any-lite/include -I../../expected-lite/include -I../../optional-lite/include -I../../variant-lite/include combine-any-exp-opt-var.cpp
