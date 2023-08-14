#include<iostream>
using namespace std;

int power(int num1, int num2){
    // cout<<<<end;
    int ans =1;
    for(int i =1; i<=num2;i++){
        ans = ans * num2;
    }
    return ans;
}

int  main(){
    int a,b;
    cin>>a>>b;
    int answer = power(a,b);
    cout<<"answwer is "<<answer<<endl;

    int c,d;
    cin>>c>>d;
    int answer = power (c,d);
    cout<<"answer is"<<answer<<endl;
}