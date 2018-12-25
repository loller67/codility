vector<int> solution(vector<int> &A, int K) {
    vector<int> B (A.size());
    for (unsigned int i =0; i<A.size(); i++) {
        B[(i+K) % (A.size())] = A[i];
    }
    return B;
}
