#include<iostream>

using namespace std;

int main(){

    int num;

    cout<<"Enter The number: "<<endl;
    cin>>num;

    if(num>40)


    {
       cout<<"Congratulations!.You passed"<<endl;
       if (num>80)
            cout<<"Your Grade is A+"<<endl;
            if (num>70)
            cout<<"Your Grade is B"<<endl;
            else if (num>60)
            cout<<"Your Grade is C"<<endl;
            else if (num>50)
            cout<<"Your Grade is D"<<endl;
            else if (num>40)
            cout<<"Your Grade is E"<<endl;
    }



        else

            cout<<"You are Failed"<<endl;

        return 0;







}
