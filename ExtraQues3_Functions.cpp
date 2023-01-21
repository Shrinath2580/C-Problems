// Fibonacci Series 
void series(int n) {
    int a = 0;
    int b = 1;
    int nextDigit;
    //cout<< a << " " << b << " ";
    for (int i = 3; i<=n; i++){
        nextDigit = a + b;
        //cout << nextDigit << " ";
        a = b;
        b = nextDigit;
        
    }
    cout << nextDigit;
}


int main() {

    int n;
    cin >> n;

    series(n);
    return 0;

}
