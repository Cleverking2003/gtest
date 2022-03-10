#ifndef QUADRATIC_TEST_H
#define QUADRATIC_TEST_H

#include <gtest/gtest.h>
#include <math.h>

extern "C" {
#include "quadratic.h"
}

TEST(quadraticTest, noRoots) {
    ASSERT_TRUE(isnan(quadratic(1, 1, 1)));
    ASSERT_TRUE(isnan(quadratic(1, 1, 2)));
}

TEST(quadraticTest, wrongParams) {
    ASSERT_TRUE(isnan(quadratic(0, 5, 4)));
    ASSERT_TRUE(isnan(quadratic(0, 0, 3)));
}

TEST(quadraticTest, roots) {
    ASSERT_DOUBLE_EQ(quadratic(1, 2, 1), -1.0);
    ASSERT_DOUBLE_EQ(quadratic(1, 5, 6), -2.0);
}

#endif // QUADRATIC_TEST_H
