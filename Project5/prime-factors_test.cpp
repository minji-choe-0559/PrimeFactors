#include "gmock/gmock.h"
#include "prime-factors.cpp"

TEST(PrimeFactors, Of1) {
	PrimeFactors primeFactors;
	std::vector<int>expected = {};
	EXPECT_EQ(expected, primeFactors.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactors primeFactors;
	std::vector<int>expected = { 2 };
	EXPECT_EQ(expected, primeFactors.of(2));
}

TEST(PrimeFactors, Of3) {
	PrimeFactors primeFactors;
	std::vector<int>expected = { 3 };
	EXPECT_EQ(expected, primeFactors.of(3));
}

TEST(PrimeFactors, Of4) {
	PrimeFactors primeFactors;
	std::vector<int>expected = { 2, 2 };
	EXPECT_EQ(expected, primeFactors.of(4));
}

TEST(PrimeFactors, Of5) {
	PrimeFactors primeFactors;
	std::vector<int>expected = { 5 };
	EXPECT_EQ(expected, primeFactors.of(5));
}

TEST(PrimeFactors, Of6Of7) {
	PrimeFactors primeFactors;
	std::vector<int>expected = { 2, 3 };
	EXPECT_EQ(expected, primeFactors.of(6));
	expected = { 7 };
	EXPECT_EQ(expected, primeFactors.of(7));
}