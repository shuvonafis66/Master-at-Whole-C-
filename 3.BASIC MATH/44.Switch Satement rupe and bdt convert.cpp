#include <iostream>

using namespace std;

int main()
{


    int x;
    double rupee,rupee_r,bdt,bdt_r;

    cout<<"1.Rupee To BDT"<<endl<<"2.BDT to Rupee"<<endl;
    cout<<"Choice your option: ";
    cin>>x;


    switch(x)


    {


    case 1:

        cout<<"How much Rupee You want to convert: ";
        cin>>rupee;

        bdt_r=(100.0/74.0)*rupee;

        cout<<"You will get: "<<bdt_r<<" BDT"<<endl;

        break;

    case 2:

        cout<<"How much BDT You want to convert: ";
        cin>>bdt;

        rupee_r=(74.0/100.0)*bdt;

        cout<<"You will get: "<<rupee_r<<" RUPEE"<<endl;

        break;


    default :


        cout<<"Invalid Input"<<endl;

        break;


    }


    return 0;


}
