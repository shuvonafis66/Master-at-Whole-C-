#include<iostream>
#include<conio.h>

using namespace std;

int main()


{
    for(int i=1; i<=10; i++)

    {
        for(int j=1; j<=6; j++)
        {
            if(i==4 && j==4 ||i==4 && j==5||i==4 && j==6)
            {
                cout<<" "<<" ";
            }

            else if(i==7 && j==1 ||i==7 && j==2||i==7 && j==3)

            {
                cout<<" "<<" ";
            }
            else
                cout<<"*"<<" ";
        }

        cout<<endl;

    }

    cout<<endl<<endl<<endl;


    {
        int i,j;

        for(i=1; i<=4; i++)
        {
            for(j=1; j<=6; j++)

            {
                if(j==3||j==4)
                {

                    cout<<" "<<" ";
                }

                else
                    cout<<"*"<<" ";
            }
            cout<<endl;


        }


        for(int k=1; k<=2; k++)
        {
            for(int z=1; z<=6; z++)

            {
                cout<<"*"<<" ";
            }

            cout<<endl;
        }


        for(int m=1; m<=4; m++)
        {
            for(int n=1; n<=6; n++)

            {
                if(n==3||n==4)
                {

                    cout<<" "<<" ";
                }

                else
                    cout<<"*"<<" ";
            }
            cout<<endl;


        }

        cout<<endl<<endl<<endl;

        {
            for(int i=1; i<=7; i++)
            {
                for(int j=1; j<=6; j++)

                {

                    if(j==3||j==4)

                    {
                        cout<<" "<<" ";
                    }

                    else
                        cout<<"*"<<" ";
                }

                cout<<endl;

            }


            for(int i=1; i<=3; i++)
            {
                for(int j=1; j<=6; j++)

                {
                    cout<<"*"<<" ";
                }

                cout<<endl;
            }


            cout<<endl<<endl<<endl;

            {
                for(int i=1; i<=7; i++)
                {
                    for(int j=1; j<=7; j++)

                    {

                        if(j==3||j==4||j==5)

                        {
                            cout<<" "<<" ";
                        }

                        else
                            cout<<"*"<<" ";
                    }

                    cout<<endl;

                }


                for(int i=1; i<=3; i++)
                {

                    for(int j=1; j<=i; j++)
                    {
                        cout<<" "<<" ";
                    }


                    int k=2;
                    for ( int j=1; j<=7-k*i; j++)
                    {
                        cout<<"*"<<" ";

                    }

                    cout<<endl;
                }
                {


                    cout<<endl<<endl<<endl;
                    for(int i=1; i<=2; i++)
                    {
                        for(int j=1; j<=6; j++)
                        {
                            cout<<"*"<<" ";
                        }

                        cout<<endl;
                    }

                    for(int i=1; i<=6; i++)
                    {
                        for(int j=1; j<=6; j++)

                        {
                            if( j==3||j==4)
                            {
                                cout<<" "<<" ";
                            }

                            else
                                cout<<"*"<<" ";
                        }

                        cout<<endl;
                    }

                    for(int i=1; i<=2; i++)
                    {
                        for(int j=1; j<=6; j++)
                        {
                            cout<<"*"<<" ";
                        }

                        cout<<endl;
                    }





                    getch();

                }
            }
        }

    }
}

