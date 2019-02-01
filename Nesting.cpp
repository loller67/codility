#include <stack> 

int solution(string &S) {

    stack <char> s; 
    for (unsigned int i = 0; i <S.size(); i++) {
        if (S[i] == '(') {
            s.push(S[i]);
        } else{
            if (S[i] == ')' && s.top() == '(') {
                s.pop();
            }else{
                return 0;
            }
        }
    }

    if (s.size() == 0) {
            return 1;
    }
    return 0;
}
