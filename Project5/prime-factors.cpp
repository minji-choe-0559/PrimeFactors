#include <vector>

class PrimeFactors {
public:
	std::vector <int>& of(int num) {
        for (int i = 2; i * i <= num; ++i)
        {
            while (num % i == 0)
            {
                result.push_back(i);
                num /= i;
            }
        }

        if (num > 1)
            result.push_back(num);
		return result;
	}
private:
	std::vector <int> result;
};