int solution(vector<int> &A) {
    long n = A.size();
    long long sum = ((n+1)*(n+2))/2;
    for(int i=0; i<n; i++) {
        sum -= A[i];
    }
    return sum;
}
