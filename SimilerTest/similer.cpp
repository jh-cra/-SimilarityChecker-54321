#include <string>

using namespace std;

class SimilerChecker {
public:
	int checkDiffLength(const string& stringA, const string& stringB) {
		int lengthA = stringA.length();
		int lengthB = stringB.length();
		int shorter = 0;
		int gap = 0;

		if (lengthA == lengthB) return DIFF_LENGTH_MAX_SCORE;
		if (lengthA >= lengthB * 2) return DIFF_LENGTH_MIN_SCORE;
		if (lengthB >= lengthA * 2) return DIFF_LENGTH_MIN_SCORE;

		gap = getGap(lengthA, lengthB);
		shorter = getShorter(lengthA, lengthB);

		return getDiffLengthScore(gap, shorter);
	}

	int getGap(int lengthA, int lengthB)
	{
		if (lengthA > lengthB) {
			return lengthA - lengthB;
		}
		return lengthB - lengthA;
	}

	int getShorter(int lengthA, int lengthB)
	{
		if (lengthA > lengthB) {
			return lengthB;
		}
		return lengthA;
	}

	int getDiffLengthScore(int gap, int shorter)
	{
		return (100 - 100 * gap / shorter) * 60 / 100;
	}

private:
	const int DIFF_LENGTH_MAX_SCORE = 60;
	const int DIFF_LENGTH_MIN_SCORE = 0;
};