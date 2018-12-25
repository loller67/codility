int solution(vector<int> &A) {
    if (A.size() == 1) return A[0];
    if (A.size() == 2) return abs(A[0] - A[1]);
    for(unsigned int i = 1; i < A.size();i++){
        A[i] =A[i] + A[i-1];
    }
    int min = 100001;
    for(unsigned int i = 0; i < A.size() - 1;i++){
        int value = abs(A[A.size()-1] - A[i]*2);
        if(value < min ) {
            min = value;
        }
    }
    return min;
}


