#include<stdlib.h>
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
#include<windows.h>
using namespace std;
void chiefguest()
{
   int ch;
   system("cls");
   for(;;)
   {
       cout<<"\nGUESTS::";
       cin>>ch;
       if(ch>5)
       {
           break;
       }
    switch(ch)
   {

    case 1:
    cout<<"Mrs. Bhanu Chaitanya Varma \nMember, NES\n";
    initwindow(480,480,"Dr. Bhanu Chaitanya Varma\nMember, NES");
    readimagefile("C:\\Users\\rahul\\Desktop\\bh.jpg",0,0,480,480);
    break;
    case 2:
    cout<<"Dr. S.G Gopala Krishna Director, NGI\n";
    initwindow(480,480,"Dr. S.G Gopala Krishna \n(Director, NGI)");
    readimagefile("C:\\Users\\rahul\\Desktop\\sg.jpg",0,0,480,480);
    break;
    case 3:
    cout<<"Dr. Srikanta Murthy.K \nPrincipal, NCET)\n";
    initwindow(480,480,"Dr. Srikanta Murthy.K \nPrincipal, NCET\n");
    readimagefile("C:\\Users\\rahul\\Desktop\\sri.jpg",0,0,480,480);
    break;
    case 4:
    cout<<"Dr. P Harisha(Vice-Principal,NCET)\n";
    initwindow(480,480,"Dr. P Harisha\nVice-Principal,NCET\n");
    readimagefile("C:\\Users\\rahul\\Desktop\\ph.jpg",0,0,480,480);
    break;
    case 5:
    cout<<"Dr. Gururaj Murtugudde(HOD,CSE,NCET)\n";
    initwindow(480,480,"Dr. Gururaj Murtugudde \nHOD,CSE,NCET");
    readimagefile("C:\\Users\\rahul\\Desktop\\hod.jpg",0,0,480,480);
    break;




   //by Arpitha
}}
return;
}
void song()
{
    system("cls");
    delay(1000);
  cout<<"\n\n\n\n\t\t\t\t||||WELCOME SONG|||| \n\n\n\t\t\t  ||||";
  delay(1000);
  cout<<"By Yashaswini (CSE, 5th sem)||||\n\n\n\n\n\n\n\n\n";
  return;
}
void lamp()
{
   initwindow(1280,780,"WELCOME");
    readimagefile("C:\\Users\\rahul\\Desktop\\lamp.jpg",0,0,1280,780);
   return;
}
void codingclub()
{
    system("cls");
    cout<<"\n\n\n\t\t\t\t::::::::::WHY CODING ? ::::::::::";
    cout<<"\n\n\t\t\t\t::::::::::BY MR. BHARGAVA R::::::::::";
    delay(1000);cout<<"\nC:::::";
    delay(1000);cout<<"\ndo{";
    delay(1000);cout<<"\ncode();\ncompile();\nexecute();";
    delay(1000);cout<<"\nfun=fun*3;";
    delay(1000);cout<<"\n}";
    delay(1000);cout<<"\nwhile(interest>999);";
   return;
}                      //bhargava r
void purpose()
{
    system("cls");
   cout<<"\n\n\n\n\n\n\n\t\t\t>>>>PURPOSE OF CODING CLUB<<<<<<\n\n\n\n";
   cout<<"\t\t\t  >>>>>BY MR. GOPINATH AR<<<<<<\n\n\n\n\n\n\n";
   return;//gopinath ar
}
void thxvideo()
{
    system("cls");
    cout<<"\n\n\n\n\n\n\t\t\t\tLOADING VIDEO........\n\n\n\n\n\n\n\n\n";
   return;
}
void voteofthanks()
{
    system("cls");
     cout<<"\n\n\n\n\n\n\n\t\t\t\t*****VOTE OF THANKS*****\n\n\n\n";
   cout<<"\t\t\t  *****BY PRIYANKA,5TH SEM,CSE*****\n\n\n\n\n\n\n\n";
   return;
}


int main()
{
	int a,j,l;

    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,WHITEONBLACK);
    for(int i=1;i<=10; ++i)
	{
		for(int j = 1; j <= i; ++j)
	{
	    cout<<"* ";
	    delay(100);
	}
	cout << "\n";
	delay(100);
	}
	delay(100);
	delay(100);
    SetConsoleTextAttribute(h,RED);
	cout<<"\t\t\t\tHello Everyone,Good Morning";
	delay(100);
	cout<<"\n";
	delay(100);
	cout<<"\t\t\t";
	cout<<"\tWelcome to the Coding Club";
	cout<<"\n\n\n\n";
	delay(100);
	SetConsoleTextAttribute(h,WHITEONBLACK);
	cout<<"1.Invocation Song";
	cout<<"\n";
	delay(100);
	cout<<"2.Lighting the lamp";
	cout<<"\n";
	delay(100);
	cout<<"3.Why Coding Club?";
	cout<<"\n";
	delay(100);
	cout<<"4.LOGO ";
	cout<<"\n";
	delay(100);
	cout<<"5.FACEBOOK PAGE";
	cout<<"\n";
	delay(100);
	cout<<"6.Welcome to Dignitary Guests"; //bhanumam

	cout<<"\n";
	delay(100);
	cout<<"7.Purpose of Coding Club"; //bhanumam

	cout<<"\n";
	delay(100);
					//video
	cout<<"8.Thanksgiving Video";
	cout<<"\n";
	delay(100);
	cout<<"9.Vote of Thanks";
	cout<<"\n";
	delay(100);
    for(;;)
   {
    cout<<"\nEVENTS::";
    cin>>a;
    if(a>9&&a!='a')
    {
        break;
    }
    switch(a)
    {

	case 1:

		song();
		break;
	case 2:
		lamp();
		break;
	case 3:

		codingclub();
		break;
	case 4:
		cout<<"LOGO\n\n";
		 initwindow(1780,1000,"LOGO");
         readimagefile("C:\\Users\\rahul\\Desktop\\logo.jpg",0,0,1780,1000);
          break;
	case 5:
		cout<<"FACEBOOK PAGE\n";
         initwindow(1280,780,"fbpage");
         readimagefile("C:\\Users\\rahul\\Desktop\\cclub.jpg",0,0,1280,780);
         break;

	case 6:
	    chiefguest();
	    break;


	case 7:
		 purpose();
		break;
    case 8:
        thxvideo();
		break;
    case 9:
        voteofthanks();
		break;

         }
	}
	for(int k = 10; k >= 1; --k)
    {   delay(100);
	for(int l = 1; l <= k; ++l)
	{
	    cout<< "* ";
	    delay(100);
	}
	cout << endl;
	delay(100);
    }   delay(100);

    return 0;
	getch();

}
