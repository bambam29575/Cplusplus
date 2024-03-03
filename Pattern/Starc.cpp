void nStarTriangle(int n) {
    // Write your code here.
    int row, col, copy=n; //Find relation
    for(row = 1; row <= n; row++){
        int space=1;
        while(space<copy){
            cout << " ";
            space++;
        }
        for(col=1; col <= 2*row-1; col++){
            cout << "*";
        }
        copy--;
        cout << endl;
    }
}
