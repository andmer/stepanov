#ifndef LECTURE1_INSTRUMENTED_H
#define LECTURE1_INSTRUMENTED_H

#include <cstdlib>

struct instrumented_base {
    enum operations {
        n, copy, assignment, dtor, default_ctor, comparison, ordering, construction
    };

    static const size_t number_ops = 8;
    static double counts[number_ops];
    static const char* counter_names[number_ops];

    static void initialize(size_t);
};

template<typename T>
struct instrumented : instrumented_base {
    typedef T value_type;
    T value;

    // conversion from T to T:
    explicit instrumented(const T& x) : value(x) { ++counts[construction]; }

    // conversion from instrumented to T
    explicit operator T() const { return value; }

    // convert from instrumented<U> to instrumented<U>
    template<typename U>
    instrumented(const instrumented<U>& x) { value = x.value; }

    //semiregular type:

    //default ctor
    instrumented() { ++counts[default_ctor]; }

    //copy ctor
    instrumented(const instrumented& x) : value(x.value) {
        ++counts[copy];
    }

    //dtor
    ~instrumented() { ++counts[dtor]; }

    //assignment operator
    instrumented& operator=(const instrumented& x) {
        ++counts[assignment];
        value = x.value;
        return *this;
    }

    // regular type:
    friend
    bool operator==(const instrumented& x, const instrumented& y) {
        ++counts[comparison];
        return x.value == y.value;
    }

    friend
    bool operator!=(const instrumented& x, const instrumented& y) {
        return !(x == y);
    }

    // totally ordered type:
    friend
    bool operator<(const instrumented& x, const instrumented& y) {
        ++counts[ordering];
        return x.value < y.value;
    }

    friend
    bool operator>(const instrumented& x, const instrumented& y) {
        return y < x;
    }

    friend
    bool operator<=(const instrumented& x, const instrumented& y) {
        return !(y < x);
    }

    friend
    bool operator>=(const instrumented& x, const instrumented& y) {
        return !(x < y);
    }
};

#endif //LECTURE1_INSTRUMENTED_H
