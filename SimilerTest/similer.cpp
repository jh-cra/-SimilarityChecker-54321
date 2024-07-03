#include <string>

using namespace std;

class SimilerChecker {
public:
	int checkLengh(const string& stringA, const string& stringB) {
		int result = 0;
		int sizeA = stringA.size();
		int sizeB = stringB.size();
		int min = 0;
		int gap = 0;

		if (sizeA == sizeB) {
			return 60;
		}

		if (sizeA > sizeB) {
			if (sizeA >= sizeB*2) return 0;

			min = sizeB;
			gap = sizeA - sizeB;
		}
		else {
			if (sizeB >= sizeA*2) return 0;

			min = sizeA;
			gap = sizeB - sizeA;
		}

		result = (100 - 100 * gap / min) * 60 / 100;

		return result;
	}
};