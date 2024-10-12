#include <iostream>
#include <string>

using namespace std;

int main() {
	string D = "1", N = "1";
	cin>>D>>N;
	while (D != "0" || N != "0") {
		string removed = "";
		for (int i = 0; i < N.size(); i++) {
			if (N[i] != D[0]) {
				removed += N[i];
			}
		}

		string result = "";
		for(int j = 0; j < removed.size(); j++) {
			if(removed[j] != '0') {
				for(int k = j; k < removed.size(); k++) {
					result += removed[k];
				}
				break;
			}
		}

		if (result.size() == 0) {
			cout << "0" << endl;
		} else {
			cout << result << endl;
		}
		cin>>D>>N;
	}

	return 0;
}
