#include<iostream>
using namespace std;
int main(){
    string password="3$677545",username="Hussam4";
    string inputpassword,inputusername;
    cout<<"Enter the password:";
    cin>>inputpassword;
    cout<<"Enter the username:";
    cin>>inputusername;
    if(password==inputpassword&&username==inputusername){
        cout<<"Access Granted"<<endl;
    }
    else{
        cout<<"Access Denied"<<endl;
    }
    return 0;
}