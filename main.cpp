#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string dc1[1000], dc2[1000];
int dc1i[1000], dc2i[1000];
int main(){
    freopen("cc.txt","r",stdin);
    int a;
    cin >> a;
    int zt=true;
    if(a == 0){
        zt = false;
    }

    //freopen("CON", "w", stdout);//win
    //freopen("/dev/tty", "w", stdout);//linux
    if(zt){
        printf("是否继续之前进度,1(是)或0(否):");
        freopen("/dev/tty", "r", stdin);
        int n;
        cin >> n;
        if(n == 1){
            
        } else{

        }
    }  else {
        

    }
    return 0;
}