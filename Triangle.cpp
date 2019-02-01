#include <algorithm>

int solution(vector<int> &A) {

    if (A.size() < 3) {
            return 0;
    }

    sort(A.begin(), A.end());
    for(unsigned int i = 2; i<A.size(); i++) {
        if (A[i- 2] > 0 && A[i - 2] > A[i] - A[i - 1]) {
            return 1;
        }
    }
    return 0;
}


