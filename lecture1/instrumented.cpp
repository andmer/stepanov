//
// Created by andmer on 3/20/16.
//

#include "instrumented.h"
#include <algorithm>

double instrumented_base::counts[];
const char* instrumented_base::counter_names[] = {"n",
                                                  "copy",
                                                  "assign",
                                                  "destruct",
                                                  "default",
                                                  "equal",
                                                  "less",
                                                  "construct"};

void instrumented_base::initialize(size_t x) {
    std::fill(counts, counts + number_ops, 0.0);
    counts[n] = double(x);
}