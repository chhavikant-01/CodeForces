#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[6];
        int a,b;
        a=b=0;
        for(int i=0;i<5;i++){
            cin>>s[i];
            if(s[i]=='A'){
                a++;
            }
            else{
                b++;
            }
        }
        if(a>b)
            cout<<"A"<<endl;
        else
            cout<<"B"<<endl;
    }
    return 0;
}