int solution(vector<int> &A) {
    int westCars= 0;
    int passings = 0;
    for(unsigned int i = 0; i < A.size(); i++) {
        if(A[i]!=0){
            passings = passings + westCars;
            if(passings > 1000000000){
                return -1;
            }
        } else {
            westCars = westCars +1;
        }
    }
    return passings;
}


