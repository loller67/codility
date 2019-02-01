#include <set> 

int solution(vector<int> &A) {

    set <int> s;
    for (unsigned int i = 0; i < A.size() ; i++) {
        s.insert(A[i]);
    }
    return s.size();
}
