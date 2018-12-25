int BinaryGap(int N) {
    int maxGap = 0;
    int actualGap = 0;
    bool isAGap = false;
    while (N != 0) {
        if (N % 2 == 1) {
            if(maxGap < actualGap) {
                maxGap = actualGap;
            }
            actualGap = 0;
            isAGap = true;
        }
        if (N % 2 == 0 && isAGap) {
            actualGap++;
        }
        N = N/2;
    }
    return max(maxGap,actualGap);
}
