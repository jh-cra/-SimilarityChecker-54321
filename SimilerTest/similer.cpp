#include <string>

using namespace std;

class SimilerChecker {
public:
	int checkLengh(const string& a, const string& b) {
		if (a.size() == b.size()) {
			return 60;
		}
		return 0;
	}
};