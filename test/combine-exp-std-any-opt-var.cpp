
#include "nonstd/expected.hpp"

#include <any>
#include <optional>
#include <variant>

int main()
{
    nonstd::expected<int, int> exp{ nonstd::in_place, 42 };

    std::any a{ std::in_place_type<double>, 1.23 };
    std::optional<int > opt{ std::in_place, 7 };
    std::variant<char, int, double > var{ std::in_place_type<char>, '7' };
}

// g++ -Wall -std=c++17 -Dnsel_CONFIG_SELECT_EXPECTED=nsel_EXPECTED_NONSTD -I../../any-lite/include -I../../expected-lite/include -I../../optional-lite/include -I../../variant-lite/include -o combine-exp-std-any-opt-var.exe combine-exp-std-any-opt-var.cpp

// cl -EHsc -std:c++17 -Dnsel_CONFIG_SELECT_EXPECTED=nsel_EXPECTED_NONSTD -I../../any-lite/include -I../../expected-lite/include -I../../optional-lite/include -I../../variant-lite/include combine-exp-std-any-opt-var.cpp
