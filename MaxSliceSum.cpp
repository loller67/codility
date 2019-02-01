int solution(vector<int> &A) {
    int sum = 0;
    int max = -1000000;
    for (unsigned int i = 0; i < A.size(); i++) {
        sum = sum + A[i];
        if (sum < 0) {
            sum = 0;
        }
        if (sum > max) {
            max = sum;
        }
    }

    if (max <= 0){
        max = -1000000;
        for (unsigned int i = 0; i < A.size(); i++) {
            if (A[i] > max) {
                max = A[i];
            }
        }
    }

    return max;
}


