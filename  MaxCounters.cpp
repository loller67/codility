vector<int> solution(int N, vector<int> &A) {
    vector<int> B(N, 0);
    int highest = 0;    
    int lastIncrease = 0;
    for(unsigned int i = 0; i<A.size();i++){
        int index = A[i];
        if (index<=N){
            B[index-1] = max(B[index-1], lastIncrease);
            B[index-1] = B[index-1] + 1;
            int actual = B[index-1];
            highest = max(actual, highest);
        }else {
            lastIncrease = highest;
        }
    }
    
    for(int i=0; i<N;i++){
        B[i] = max(B[i], lastIncrease);
    }
    return B;
}


