#include<iostream>
using namespace std;
int main(){
 char charachter;
  cout<<"Enter a single charachteer Dont Enter number outside of this range(0-9)";
    cin>>charachter;
    if(charachter>='0'&&charachter<='9'){
        cout<<"You Entered a Digit "<<endl;
    }
    else if(charachter>='A'&&charachter<='Z'){
        cout<<"You Entered UpperCase"<<endl;
    }
    else if(charachter>='a'&&charachter<='z'){
        cout<<"You Entered LowerCase"<<endl;
    }
    else{

        cout<<"You Entered a special Charachter"<<endl;
    }
    
}