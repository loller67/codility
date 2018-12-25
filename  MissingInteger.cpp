#include <algorithm>

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    vector<bool> B(A.size(),false);
    for(unsigned int i = 0; i<A.size();i++){
        unsigned int index = A[i];
        if (index > 0 && index<A.size()+1){
            B[index-1] = true;
        }
    }
    for(unsigned int i = 0; i<A.size();i++){
        if (B[i]==false){
            return i+1;
        }
    }
    return A.size()+1;
}
