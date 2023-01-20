//2. input is a & b. Output should be total no. of set bits in a&b.
int countBits1(int a){
    
    int count = 0;
    while(a) {
        count+= a&1;

        a>>=1;

    }
    
    return count;
} 

int countBits2(int b){
    
    int count2 = 0;
    while(b) {
        count2+= b&1;

        b>>=1;

    }
    
    return count2;
} 
int main() {
    int a , b;
    cin >> a >> b;
    //int n;
    //cin>>n;
    
    //n = a&b;
    
    //cout << "Total no. of set bits in a&b are " << countBits(a,b)<<endl;
    int count1 = 0;
    int count2 = 0;
    int count = 0;

    count1 = countBits1(a);
    count2 = countBits2(b);

    count = count1 + count2;

    cout << "Total no. of bits in a & b are " << count<<endl;
    return 0;
}