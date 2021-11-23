//Check if a matrix a magic square

//Declare function
int isMagicSquare(int ** square, const int n) {

//If n < then 0 stop
    if(n < 0) {
        return 0;
    }
// Declare integers
// M is the sum of each row and column
    int M = (n * (n*n + 1))/2;

    int i, j;
//Looping through every row and column
    for(i = 0; i < n; i++) {
        int rowSum = 0;
        int colSum = 0;
        for(j = 0; j < n; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        if(rowSum != M || colSum != M) {
            return 0;
        }
    }
//Checking the diagonals add up to m
    int diagSum = 0;
    int secDiagSum = 0;
    for(i = 0; i < n; i++) {
        diagSum += square[i][i];
        secDiagSum += square[i][n-i-1];
    }
//If Diagonal = m, then it is a magic square!
    if(diagSum != M || secDiagSum != M) {
        return 0;
    }


    return 1;
}
