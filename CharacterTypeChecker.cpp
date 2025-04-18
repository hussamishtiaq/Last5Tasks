#include<iostream>
using namespace std;
int main(){
    char charachter;
    bool a=true;
    char UpperCases[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char LowerCase[26]={ 'a','b', 'c', 'd','e','f', 'g', 'h','i', 'j','k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
    cout<<"Enter a single charachteer Dont Enter number outside of this range(0-9)";
    cin>>charachter;

     if(charachter){
          if(charachter=='0'||charachter=='1'||charachter=='2'||charachter=='3'||charachter=='4'||charachter=='5'||charachter=='6'||charachter=='6'||charachter=='7'||charachter=='8'||charachter=='9'){
        cout<<"Digit"<<endl;
        a=false;
    }else{

    
        for(int i=1;i<=26;i++){
            if(charachter==UpperCases[i]){
cout<<"UpperCase"<<endl;
a=false;
            }
            else if(charachter==LowerCase[i]){
cout<<"Lower Case"<<endl;
a=false;
            }
      
        }}
     
    }
    if(a){
cout<<"Special Charachter"<<endl;
    }
   
    

}