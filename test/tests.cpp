// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "alg.h"


TEST(st1, sumPrime1) {
  uint64_t res = sumPrime(2000000);
  uint64_t expected = 142913828922;
  EXPECT_EQ(expected, res);
}

TEST(st1, sumPrime2) {
  uint64_t res = sumPrime(10);
  uint64_t expected = 17;
  EXPECT_EQ(expected, res);
}

TEST(st2, checkPrime) {
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_TRUE(checkPrime(5));
  EXPECT_FALSE(checkPrime(1));
}

TEST(st2, nPrime) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(3), 5);
  EXPECT_EQ(nPrime(4), 7);
  EXPECT_EQ(nPrime(5), 11);
}

TEST(st2, nextPrime) {
  EXPECT_EQ(nextPrime(4), 5);
  EXPECT_EQ(nextPrime(5), 7);
  EXPECT_EQ(nextPrime(11), 13);
  EXPECT_EQ(nextPrime(14), 17);
}

TEST(st2, sumPrime) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(5), 5);
  EXPECT_EQ(sumPrime(6), 10);
  EXPECT_EQ(sumPrime(10), 17);
}

TEST(st3, edgeCases1) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
  EXPECT_EQ(sumPrime(2), 0);
}

TEST(st3, edgeCases2) {
  EXPECT_THROW(nPrime(0), std::invalid_argument);
}

TEST(st3, largeNumbers1) {
  EXPECT_EQ(nPrime(10000), 104729);
}

TEST(st3, largeNumbers2) {
  EXPECT_EQ(nextPrime(1000000), 1000003);
}
