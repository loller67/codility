int solution(vector<int> &A) {
    int sol = 0;
    for(unsigned int i=0; i < A.size(); i++) {
        sol ^= A[i];
    }
    return sol;
}
