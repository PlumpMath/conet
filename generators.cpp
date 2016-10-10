#include <iostream>

#include "generator.h"

namespace stdx = std::experimental;

stdx::generator<int> numbers() {
    for (int i = 0;; ++i) {
        co_await i;
    }
}

// template<class Generator>
// auto take(Generator gen, int count) {
//     for (auto it = gen.begin(); count; --count, ++it) {
//         co_yield *it;
//     }
// }

// template<class Generator, class Pred>
// auto filter(Generator gen, Pred pred) {
//     for (auto v: gen) {
//         if (pred(v)) {
//             co_yield v;
//         }
//     }
// }

int main()
{
    _coro_resume(nullptr);
    // for(auto v : filter(take(numbers(), 10),
    //                     [](const auto& v) {
    //                         return v % 2;
    //                     })) {
    //     std::cout << v << std::endl;
    // }
}