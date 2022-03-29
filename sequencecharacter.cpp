#include <iostream>
#include<stdlib.h>//rand() for the random number
#include<time.h>

using namespace std;
//[A-Z],[a-z],[0-9],[+-*/]
//1      5     2     1

string generateRandompassword(){


}

int main()
{
    char Calphabet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char Csalphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int digit[10]={0,1,2,3,4,5,6,7,8,9};
    char Recharacter[3]={'*','@','#'};


    srand(time(0));//seeds

    for(int i=0;i<3;i++){
    cout <<Calphabet [rand()%26];}
    for(int i=0;i<2;i++){
     cout <<Csalphabet [rand()%26];}
     for(int i=0;i<2;i++){
      cout <<digit[rand()%10];
    }
    for(int i=0;i<2;i++){
        cout<<Recharacter[rand()%6];
    }




    return 0;
}
