#include <set> 

int solution(int X, vector<int> &A) {
    set <int> elements;    
    int index = 0;
    for(unsigned int i =0; i<A.size();i++){
        elements.insert(A[i]);
        if(elements.size() == X){
            return i;
        }
    }
    return -1; 
}
