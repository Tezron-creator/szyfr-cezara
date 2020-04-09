#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int main()
{

    string koniec;
    koniec[0]=48;
    int dlkoniec=0;

    do
    {
        string z;
        string wybor;
        int key=0;
        int suma=0;
        int dl=0;
        int i=0;
        int dlwybor=0;

        cout<<"Je"<<char(190)<<"eli chcesz zaszyfrowa"<<char(134)<<" tekst, napisz 1"<<endl;
        cout<<"Je"<<char(190)<<"eli chcesz odszyfrowa"<<char(134)<<" tekst, napisz 2"<<endl;
        cout<<endl;
        cout<<"Wybierz: ";
        cin>>wybor;
        cout<<"---------------------------------------------------------------------------"<<endl;


        dlwybor=wybor.size();

        if(dlwybor==1)
        {

        }
        else
        {
            konieczle:;
            cout<<"Nie ma takiej opcji"<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;
            Sleep(2000);
            cout<<"Je"<<char(190)<<"eli chcesz pozosta"<<char(134)<<" w programie, napisz 0, je"<<char(190)<<"eli chcesz wyj"<<char(152)<<char(134)<<" napisz 1"<<endl;
            cout<<endl;
            cout<<"Wybierz: ";
            cin>>koniec;
            cout<<"---------------------------------------------------------------------------"<<endl;
            dlkoniec=koniec.size();

            if(dlkoniec==1)
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }
            }
            else
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }

            }

            system("cls");
            goto koniec;
        }



        if(wybor[0]==49)
        {
            cout<<"Podaj wiadomo"<<char(152)<<char(134)<<": ";
            cin>>z;
            cout<<"---------------------------------------------------------------------------"<<endl;
            dl=z.size();
            for(i=0;i<dl;i++)
            {
                if(z[i]<91 && z[i]>64)
                {

                }
                else if(z[i]<123 && z[i]>96)
                {

                }
                else
                {
                  cout<<"U"<<char(190)<<"y"<<char(136)<<"e"<<char(152)<<" niedozwolonych znak"<<char(162)<<"w, spr"<<char(162)<<"buj ponownie"<<endl;
                  cout<<"---------------------------------------------------------------------------"<<endl;
                  goto zle1;
                }
            }
            cout<<"Podaj klucz: ";
            cin>>key;
            cout<<"---------------------------------------------------------------------------"<<endl;
            key=key%52;
            cout<<"Zaszyfrowana wiadomo"<<char(152)<<char(134)<<": ";


            for(i=0;i<dl;i++)
            {
               suma=z[i]+key;

               if(z[i]<123 && z[i]>96)
               {
                   if(suma>122)
                   {
                       suma=suma-52;

                       if(suma<97)
                       {
                           suma=suma-6;
                           cout<<char(suma);
                       }
                       else
                       {
                           cout<<char(suma);
                       }
                   }
                   else
                   {
                       cout<<char(suma);
                   }
               }
               else if(z[i]<91 && z[i]>64)
               {
                   if(suma>90)
                   {
                       suma=suma+6;

                       if(suma>122)
                       {
                           suma=suma-52;

                           if(suma<97)
                           {
                               suma=suma-6;
                               cout<<char(suma);
                           }
                           else
                           {
                               cout<<char(suma);
                           }
                       }
                       else
                       {
                           cout<<char(suma);
                       }
                   }
                   else
                   {
                       cout<<char(suma);
                   }
               }

            }


            cout<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;

            zle1:;
            cout<<"Je"<<char(190)<<"eli chcesz pozosta"<<char(134)<<" w programie, napisz 0, je"<<char(190)<<"eli chcesz wyj"<<char(152)<<char(134)<<" napisz 1"<<endl;
            cout<<endl;
            cout<<"Wybierz: ";
            cin>>koniec;
            cout<<"---------------------------------------------------------------------------"<<endl;
            dlkoniec=koniec.size();

            if(dlkoniec==1)
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }
            }
            else
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }

            }
        }
        else if(wybor[0]==50)
        {
            cout<<"Podaj zaszyfrowan"<<char(165)<<" wiadomo"<<char(152)<<char(134)<<": ";
            cin>>z;
            cout<<"---------------------------------------------------------------------------"<<endl;
            dl=z.size();
            for(i=0;i<dl;i++)
            {
                if(z[i]<91 && z[i]>64)
                {

                }
                else if(z[i]<123 && z[i]>96)
                {

                }
                else
                {
                  cout<<"U"<<char(190)<<"y"<<char(136)<<"e"<<char(152)<<" niedozwolonych znak"<<char(162)<<"w, spr"<<char(162)<<"buj ponownie"<<endl;
                  cout<<"---------------------------------------------------------------------------"<<endl;
                  goto zle2;
                }
            }
            cout<<"Podaj klucz: ";
            cin>>key;
            cout<<"---------------------------------------------------------------------------"<<endl;
            key=key%52;
            cout<<"Odszyfrowana wiadomo"<<char(152)<<char(134)<<": ";

            for(i=0;i<dl;i++)
            {
                suma=z[i]-key;

                if(z[i]<123 && z[i]>96)
                {
                    if(suma<97)
                    {
                        suma=suma-6;

                        if(suma<65)
                        {
                            suma=suma+58;
                            cout<<char(suma);
                        }
                        else
                        {
                            cout<<char(suma);
                        }
                    }
                    else
                    {
                        cout<<char(suma);
                    }
                }
                else if(z[i]<91 && z[i]>64)
                {
                    if(suma<65)
                    {
                        suma=suma+52;

                        if(suma>90)
                        {
                            suma=suma+6;
                            cout<<char(suma);
                        }
                        else
                        {
                            cout<<char(suma);
                        }

                    }
                    else
                    {
                        cout<<char(suma);
                    }
                }


            }
            cout<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;

            zle2:;
            cout<<"Je"<<char(190)<<"eli chcesz pozosta"<<char(134)<<" w programie, napisz 0, je"<<char(190)<<"eli chcesz wyj"<<char(152)<<char(134)<<" napisz 1"<<endl;
            cout<<endl;
            cout<<"Wybierz: ";
            cin>>koniec;
            cout<<"---------------------------------------------------------------------------"<<endl;
            dlkoniec=koniec.size();

            if(dlkoniec==1)
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }
            }
            else
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }

            }
        }
        else
        {
            cout<<"Nie ma takiej opcji"<<endl;
            cout<<"---------------------------------------------------------------------------"<<endl;
            Sleep(2000);
            cout<<"Je"<<char(190)<<"eli chcesz pozosta"<<char(134)<<" w programie, napisz 0, je"<<char(190)<<"eli chcesz wyj"<<char(152)<<char(134)<<" napisz 1"<<endl;
            cout<<endl;
            cout<<"Wybierz: ";
            cin>>koniec;
            cout<<"---------------------------------------------------------------------------"<<endl;
            dlkoniec=koniec.size();

            if(dlkoniec==1)
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }
            }
            else
            {
                if(koniec[0]==48)
                {

                }
                else if(koniec[0]==49)
                {

                }
                else
                {
                    koniec[0]=48;
                    system("cls");
                    cout<<"---------------------------------------------------------------------------"<<endl;
                    goto konieczle;
                }

            }
            koniec:;

        }



    }
    while(koniec[0]==48);

    return 0;
}

