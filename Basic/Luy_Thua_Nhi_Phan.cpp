#include <iostream>
using namespace std;

// Hàm tính lũy thừa nhị phân bằng đệ quy
long long binpowRecursive(int a,int b){
    if(b==0)return 1;
    long long res=binpowRecursive(a,b/2);
    if(b%2==0) return res*res;
    else return res*res*a;
}
long long binpow(int a,int b){
    long long res=1;
    while(b!=0){
        if(b%2==1){
            res*=a;
        }
        b/=2;
        a*=a;
    }
    return res;
}
int main() {
    cout << binpow(2,5);
    return 0;
}
