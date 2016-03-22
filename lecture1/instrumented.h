//
// Created by andmer on 3/20/16.
//

#ifndef LECTURE1_INSTRUMENTED_H
#define LECTURE1_INSTRUMENTED_H


//
// Created by andmer on 3/20/16.
//

#include <cstdio>
#include <iostream>

#ifndef LECTURE1_INSTRUMENTED_H
#define LECTURE1_INSTRUMENTED_H

#endif //LECTURE1_INSTRUMENTED_H

template<typename T>
class instrumented {
public:
    const static size_t number_ops = 10;
    static constexpr const char* counter_names[2] = {"a", "b"};
    static constexpr double* counts = (double*) 4;

    instrumented() = default;

    instrumented(T&) {
        printf("ref ctor");
    };

    instrumented(const instrumented& copy) {
        //
    };

    instrumented& operator=(const instrumented& assn) {
        return *this;
    };

    bool operator<(const instrumented& cmp) {
        /* do actual comparison */
        return true;
    };

    static void initialize(size_t i) {
        std::cout << i << std::endl;
    };
};

#endif //LECTURE1_INSTRUMENTED_H
