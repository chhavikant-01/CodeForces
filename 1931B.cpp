#include<iostream>
using namespace std;

void solution(){
        int n; // number of water containers
        cin>>n;
        long long int a[n]; 
        long long int sum=0;
    
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum=sum+a[i];
        }
        
        long long int quant = sum/n; // equal quantity of water for all containers 

        for(int i=0;i<n-1;i++){
            if(a[i]<quant){ 
                cout<<"NO"<<endl;
                return;
            }
            else{
                a[i+1]+=a[i]-quant;
                a[i]=quant;
            }
        }

        cout<<"YES"<<endl;
}
int main(){
    int t; //number of test cases
    cin>>t;

    while(t--){
        
        solution();
        
        }
    

    return 0;
}