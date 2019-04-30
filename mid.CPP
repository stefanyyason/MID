#include <iostream.h>
#include <conio.h>
main()
{
int totalnilaitugas,nilaiakhir,nilaitugas1,nilaitugas2,nilaitugas3,nim,nilaimid,nilaifinal;
char nama[30],nilaihuruf;
cout<<"masukkan nama: ";cin>>nama;
cout<<"masukkan nim: ";cin>>nim;
cout<<"masukkan nilai tugas 1: ";cin>>nilaitugas1;
cout<<"masukkan nilai tugas 2: ";cin>>nilaitugas2;
cout<<"masukkan nilai tugas 3: ";cin>>nilaitugas3;
cout<<"masukkan nilai mid: ";cin>>nilaimid;
cout<<"masukkan nilai final: ";cin>>nilaifinal;
totalnilaitugas=(nilaitugas1+nilaitugas2+nilaitugas3)/3;
nilaiakhir=(totalnilaitugas*20/100)+(nilaimid*40/100)+(nilaifinal*40/100);

if ((nilaiakhir>=80)&&(nilaiakhir<=100))
{nilaihuruf='A';}
else if ((nilaiakhir>=70)&&(nilaiakhir<=79))
{nilaihuruf='B';}
else if ((nilaiakhir>=60)&&(nilaiakhir<=69))
{nilaihuruf='C';}
else if ((nilaiakhir>=50)&&(nilaiakhir<=59))
{nilaihuruf='D';}
else
{nilaihuruf='E';}

cout<<"nama mahasiswa: "<<nama;
cout<<"\nnim mahasiswa: "<<nim;
cout<<"\nnilai akhir: "<<nilaiakhir;
cout<<"\nnilai huruf: "<<nilaihuruf;
getch();
}
