#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

class PrimeFactorsFixture : public Test {
protected:
	void runTest(int num) {
		EXPECT_EQ(expected, primeFactors.of(num));
	}

	static PrimeFactors primeFactors;
	static std::vector <int> expected;
};

PrimeFactors PrimeFactorsFixture::primeFactors;
std::vector<int> PrimeFactorsFixture::expected;

TEST_F(PrimeFactorsFixture, Of1) {
	expected = {};
	runTest(1);
}

TEST_F(PrimeFactorsFixture, Of2) {
	expected = { 2 };
	runTest(2);
}

TEST_F(PrimeFactorsFixture, Of3) {
	expected = { 3 };
	runTest(3);
}

TEST_F(PrimeFactorsFixture, Of4) {
	expected = { 2, 2 };
	runTest(4);
}

TEST_F(PrimeFactorsFixture, Of5) {
	expected = { 5 };
	runTest(5);
}

TEST_F(PrimeFactorsFixture, Of6Of7) {
	expected = { 2, 3 };
	runTest(6);
	expected = { 7 };
	runTest(7);
}