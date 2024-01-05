#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,i,c,n,j;
    cout<<"Enter the limit: ";
    cin>>n;
    for(i=1;i<=n;i++) {
        a=0;
        b=1;
        cout<<b<<"\t";
        for(j=1;j<i;j++) {
            c=a+b;
            cout<<c<<"\t";
            a=b;
            b=c; 
        }
        cout<<"\n"; 
    }
    return 0; 
}

// Enter the limit: 10
// 1
// 1       1
// 1       1       2
// 1       1       2       3
// 1       1       2       3       5
// 1       1       2       3       5       8
// 1       1       2       3       5       8       13
// 1       1       2       3       5       8       13      21
// 1       1       2       3       5       8       13      21      34
// 1       1       2       3       5       8       13      21      34      55
