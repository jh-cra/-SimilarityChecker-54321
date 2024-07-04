#include <string>

using namespace std;

class SimilerChecker {
public:
	int checkDiffLength(const string& stringA, const string& stringB) {
		int longerLength = getLongerLength(stringA, stringB);
		int shorterLength = getShorterLength(stringA, stringB);

		if (longerLength == shorterLength) return DIFF_LENGTH_MAX_SCORE;
		if (longerLength >= shorterLength * 2) return DIFF_LENGTH_MIN_SCORE;

		return getDiffLengthScore(longerLength - shorterLength, shorterLength);
	}

	int getLongerLength(const string& stringA, const string& stringB)
	{
		if (stringA.length() > stringB.length()) {
			return stringA.length();
		}
		return stringB.length();
	}

	int getShorterLength(const string& stringA, const string& stringB)
	{
		if (stringA.length() > stringB.length()) {
			return stringB.length();
		}
		return stringA.length();
	}

	int getDiffLengthScore(int gap, int shorter)
	{
		return (60 - 60 * gap / shorter);
	}

private:
	const int DIFF_LENGTH_MAX_SCORE = 60;
	const int DIFF_LENGTH_MIN_SCORE = 0;
};