#ifndef QUADRATIC_TEST_H
#define QUADRATIC_TEST_H

#include <gtest/gtest.h>
#include <math.h>

extern "C" {
#include "quadratic.h"
}

double x1, x2;

int quad(double a, double b, double c) {
    return quadratic(a, b, c, &x1, &x2);
}

TEST(quadraticTest, noRoots) {
    ASSERT_EQ(quad(1, 1, 1), 0);
    ASSERT_TRUE(isnan(x1));
    ASSERT_TRUE(isnan(x2));
    ASSERT_EQ(quad(1, 1, 2), 0);
    ASSERT_TRUE(isnan(x1));
    ASSERT_TRUE(isnan(x2));
}

TEST(quadraticTest, wrongParams) {
    ASSERT_EQ(quad(0, 5, 4), 0);
    ASSERT_TRUE(isnan(x1));
    ASSERT_TRUE(isnan(x2));
    ASSERT_EQ(quad(0, 0, 3), 0);
    ASSERT_TRUE(isnan(x1));
    ASSERT_TRUE(isnan(x2));
}

TEST(quadraticTest, roots) {
    ASSERT_EQ(quad(1, 2, 1), 1);
    ASSERT_DOUBLE_EQ(x1, -1.0);
    ASSERT_DOUBLE_EQ(x2, -1.0);
    ASSERT_EQ(quad(1, 5, 6), 2);
    ASSERT_DOUBLE_EQ(x1, -2.0);
    ASSERT_DOUBLE_EQ(x2, -3.0);
    ASSERT_EQ(quad(8, -6, 1), 2);  
    ASSERT_DOUBLE_EQ(x1, 0.5);
    ASSERT_DOUBLE_EQ(x2, 0.25);
}

#endif // QUADRATIC_TEST_H
