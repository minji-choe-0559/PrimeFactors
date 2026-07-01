#include "gmock/gmock.h"
#include "prime-factors.cpp"

using namespace testing;

struct PrimeFactorsParam {
	int input;
	std::vector<int> expected;
};

class PrimeFactorsFixture : public TestWithParam<PrimeFactorsParam> {
protected:
	PrimeFactors primeFactors;
};

TEST_P(PrimeFactorsFixture, Of) {
	auto param = GetParam();
	EXPECT_EQ(param.expected, primeFactors.of(param.input));
}

INSTANTIATE_TEST_SUITE_P(
	PrimeFactorsTests,
	PrimeFactorsFixture,
	Values(
		PrimeFactorsParam{ 1, {} },
		PrimeFactorsParam{ 2, { 2 } },
		PrimeFactorsParam{ 3, { 3 } },
		PrimeFactorsParam{ 4, { 2, 2 } },
		PrimeFactorsParam{ 5, { 5 } },
		PrimeFactorsParam{ 6, { 2, 3 } },
		PrimeFactorsParam{ 7, { 7 } }
	)
);
