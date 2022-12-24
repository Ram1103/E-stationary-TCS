#include<iostream.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<iomanip.h>
#include<conio.h>
class user
{
char name[30];
char cn[10];
char addr[20];
char city[20];
char state[20];
char pc[6];
char un[5];
char pd[16];
char email[20];
public:
void input();
void display();
char*run()
{
return un;
}
char*rpass()
{
return pd;
}
}x;
void user::input()
{
int i;
for(i=0;i<80;i++)
cout<<'*';
cout<<'\n'<<setw(42)<<"REGISTER\n\n";
for(i=0;i<80;i++)
cout<<'*';
cout<<"\n Enter the details: ";
cout<<"\n Enter your name: ";
gets(name);
cout<<"\n Enter your contact number: ";
gets(cn);
cout<<"\n Enter your address,city, and state";
gets(addr);
gets(city);
gets(state);
cout<<"\n Enter the postal code: ";
gets(pc);
cout<<"\n Enter username:";
gets(un);
cout<<"\n Enter password:";
{
int i=0;
char a;
for(i=0;;)
{
a=getch();
if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>=0&&a<=9))
{
pd[i]=a;
++i;
cout<<"*";
}
if(a=='\b'&&i>=1)
{
cout<<'\b';
--i;
}
if(a=='\r')
{
pd[i]='\0';
break;
}
}
if(i<=7)
{
cout<<"\n atleast 8 characters required! \n please enter again!";
exit(0);
}
}
cout<<"\n Enter your email id:";
gets(email);
}
void user::display()
{
cout.write(name,strlen(name));
cout<<" ";
cout.write(cn,10);
cout.write(addr,strlen(addr));
cout<<" ";
cout.write(city,strlen(city));
cout<<" ";
cout.write(pc,6);
cout<<" ";
cout.write(un,5);
cout<<" ";
cout.write(pd,strlen(pd));
cout<<" ";
cout<<'\n';
cout<<'\n';
}
class pen
{
public:
int qty;
char name[30];
char brand[30];
char type[30];
int codenum;
char colour[30];
float price;
public:
void input();
void display();
void up(int x);
int rqty()
{
return qty;
}
int rprice()
{
return price;
}
}pe;
void pen::input()
{
clrscr();
int i;
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n"<<setw(40)<<" UPDATE PEN\n\n";
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n enter the pen name ";
gets(name);
cout<<"\n enter the pen brand";
gets(brand);
cout<<"\n enter the pen type ";
gets(type);
cout<<"\n enter the code number of the pen ";
cin>>codenum;
cout<<"\n enter the colour of the ink which you want in the pen ";
gets(colour);
cout<<"\n enter he price of each pen ";
cin>>price;
cout<<"\n enter the number of pens you wanted ";
cin>>qty;
}
void pen::display()
{
cout<<"\n your pen name is ";
cout.write(name,strlen(name));
cout<<"\t\t";
cout<<"\n your pen brand is";
cout.write(brand,strlen(brand));
cout<<"\t\t";
cout<<"\n your pen type is ";
cout.write(type,strlen(type));
cout<<"\t\t";
cout<<"\n the code number of the pen is ";
cout<<codenum;
cout<<"\n the the colour of the ink in the pen is ";
cout.write(colour,strlen(colour));
cout<<"\t\t";
cout<<"\n the price of the pen is ";
cout<<price;
cout<<"\n the number of pens you have ordered is ";
cout<<qty;
}
void pen::up(int x)
{
qty=x;
}
class pencils
{
int price;
int qty;
public:
char brand[20];
void input();
void display();
int codenum;
void up(int x);
int rqty()
{
return qty;
}
int rprice()
{
return price;
}
}p;
void pencils ::input()
{for(int i=0;i<80;i++)
cout<<"*";
cout<<"\n"<<setw(40)<<"INPUT \n\n";
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n ENTER THE CODE NUMBER:";
cin>>codenum;
cout<<"\n ENTER THE BRAND:";
gets(brand);
cout<<"\n ENTER THE QUANTITY OF THE ITEM:";
cin>>qty;
cout<<"\n ENTER THE PRICE OF THE ITEM:";
cin>>price;
}
void pencils::display()
{
cout<<"\n CODENUMBER:"<<codenum;
cout<<" ";
cout<<"\n BRAND:";
cout.write(brand,strlen(brand));
cout<<" ";
cout<<"\n QUANTITY:"<<qty;
cout<<"\n PRICE:"<<price;
/*cout<<"\n the code number is"<<p.codenum;
cout<<"\n the price is"<<p.price;
cout<<"\n brand is"<<p.brand;
cout<<"\n type is"<<p.type;
cout<<"\n colour is"<<p.colour;
cout<<"\n quantity is"<<p.qty; */
}
void pencils::up(int x)
{
qty=x;
}
class others
{
char type[15];
int price;
public:
char brand[20];
void input();
void display();
int codenum;
int qty;
void up(int x);
int rqty()
{
return qty;
}
int rprice()
{
return price;
}
}ot;
void others::input()
{
for(int i=0;i<81;i++)
cout<<'*';
cout<<"\n ENTER THE CODE NUMBER";
cin>>codenum;
cout<<"\n ENTER THE BRAND";
gets(brand);
cout<<"\n ENTER THE TYPE";
gets(type);
cout<<"\n ENTER THE QUANTITY OF THE ITEM";
cin>>qty;
cout<<"\n ENTER THE PRICE PER ITEM: ";
cin>>price;
}
void others::display()
{
cout<<"\n codenumber:"<<codenum<<"\t\t";
cout<<"\n BRAND";
cout.write(brand,strlen(brand));
cout<<"\t\t";
cout<<"\n TYPE:";
cout.write(type,strlen(type));
cout<<"\n QUANTITY:"<<qty;
cout<<"\n PRICE:"<<price;
}
void others::up (int x)
{
qty=x;
}
void place(int m,int n);
void mainmenu();
void search();
void firstmod();
void signup();
void signin();
void password(char pass[16]);
void admin();
void invent();
void del();
void contactus();
void shop();
void history();
void query();
char testun[5];
struct sorder
{
char name[5];
int codenum;
char brand[20];
int price,qty;
char status[10];
}vorder;
struct squery
{
char name[10];
int age;
char query[20];
}vquery;
void main()
{
firstmod();
}
void signup()
{
int i;
for(i=0;i<80;i++)
cout<<"*";
cout<<'\n'<<setw(43)<<"sign up \n\n";
for(i=0;i<80;i++)
cout<<'*';
ofstream f;
char ch;
f.open("user.dat",ios::app|ios::binary);
if(!f)
{
cerr<<"\n cannot open file!";
exit(1);
}
x.input();
f.write((char*)&x,sizeof(x));
f.close();
cout<<"\n do you want to sign in ?:";
cin>>ch;
if(ch=='y'||ch=='Y')
signin();
else
exit(0);
}
void firstmod()
{
clrscr();
for(int i=0;i<80;i++)
cout<<"*";
cout<<"\n \t\t\t\t E-STATIONARY \n \n" ;
for(i=0;i<80;i++)
cout<<"*";
char ch;
place(4,20);
int m;
long double n;
char s[100]=" enter any key to continue : ";
for(m=0;m<strlen(s);m++)
{
for(n=0;n<1000;n++);
cout<<s[m];
}
ch=getch();
if(ch=='a'||ch=='A')
{
clrscr();
admin();
}
else
{
clrscr();
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n";
cout<<"\n \n"<<setw(40)<<" E - STATIONARY \n \n";
for(i=0;i<80;i++)
cout<<"*";
place(4,20);
for(n=0;n<1000;n++);
cout<<"\n are you an existing user?(Y/N) : ";
cin>>ch;
if(ch=='Y'||ch=='y')
signin();
else
{
cout<<"\n do you want to register?(Y/N) : ";
cin>>ch;
if(ch=='Y'||ch=='y')
signup();
else
{
cout<<"\n do you want to continue as a guest?(Y/N) : ";
cin>>ch;
if(ch=='Y'||ch=='y')
mainmenu();
else
exit(0);
}
}
}
}
void signin()
{
int i;
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n"<<setw(40)<<"sign in"<<"\n";
for(i=0;i<80;i++)
cout<<"*";
char a[5],pass[16];
int flag=0;
int c=0;
top:
place(2,25);
cout<<"ENTER THE USERNAME";
cin>>a;
ifstream f;
f.open("user.dat",ios::binary);
if(!f)
{cerr<<"\n CANNOT OPEN";
exit(1);
}
while(f.read((char*)&x,sizeof(x))&& flag==0)
{
if (strcmpi(a,x.run())==0)
{flag=1;
break;
}
}
if (flag==0||c>=4)
{
cout<<"INVALID USERNAME";
cout<<"\n please register";
signup();
}
else
{
place(2,25);
cout<<"ENTER THE PASSWORD";
{
int i=0;
char a;
for(i=0;;)
{
a=getch();
if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>=0&&a<=9))
{
pass[i]=a;
++i;
cout<<"*";
}
if(a=='\b' && i>=1)
{
cout<<"\b";
--i;
}
if(a=='\r')
{
pass[i]='\0';
break;
}
}
if(i<=7)
{
cout<<"\n ATLEAST 8 CHARACTERS REQUIRED!\nPLEASE ENTER AGAIN!.";
exit(0);
c++;
goto top;
}
}
if(strcmpi(pass,x.rpass())==0)
{
cout<<"\n LOGIN SUCCESSFUL";
strcpy(testun,x.run());
mainmenu();
}
else
{if(c<4)
{
cout<<"\n PASSWORD INVALID";
c++;
goto top;
}
}
}
}
void password()
{
START:
cout<<"\nEnter Password : ";
char pass[32];//to store password.
int i = 0;
char a;//a Temp char
for(i=0;;)//infinite loop
{
a=getch();//stores char typed in a
if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9'))
//check if a is numeric or alphabet
{
pass[i]=a;//stores a in pass
++i;
cout<<"*";
}
if(a=='\b'&&i>=1)//if user typed backspace
//i should be greater than 1.
{
cout<<"\b \b";//rub the character behind the cursor.
--i;
}
if(a=='\r')//if enter is pressed
{
pass[i]='\0';
break;
}
}
cout<<"\nYou entered : "<<pass;
//here we can even check for minimum digits needed
if(i<=5)
{
 cout<<"\nMinimum 6 digits needed.\nEnter Again";
 getch();//It was not pausing :p
 goto START;
}
return ;
}
void place(int m,int n)
{
int i,j;
for(i=0;i<m;i++)
cout<<'\n';
for(j=0;j<n;j++)
cout<<" ";
}
void del()
{
ifstream f;
ofstream f1;
f1.open("temp.dat",ios::binary);
f.open("user.dat",ios::binary);
if(!f||!f1)
{
cerr<<"\n CANNOT OPEN FILE";
exit(1);
}
cerr<<"\n ENTER USERNAME TO BE DELETED:";
char a[5];
gets(a);
while(f.read((char*)&x,sizeof(x)))
{
if(strcmpi(x.run(),a)==0)
continue;
else
f1.write((char*)&x,sizeof(x));
}
f1.close();
f.close();
remove("user.dat");
rename("temp.dat","user.dat");
cout<<"username deleted successfully \n";
admin();
}
void admin()
{
char a[5],pass[16];
int i,j;
top:
cout<<'\n';
for(i=0;i<80;i++)
cout<<'*';
cout<<"\n\t\t\t\t ADMIN \n\n";
for(i=0;i<80;i++)
cout<<'*';
place(4,20);
cout<<"ENTER THE USERNAME: ";
gets(a);
cout<<'\n';
place(1,20);
cout<<"ENTER THE PASSWORD: ";
{
int i=0;
char b;
for(i=0;;)
{
b=getch();
if((b>='a'&&b<='z')||(b>='A' &&b<='Z')||(b>=0&&b<=9) )
{
pass[i]=b;
++i;
cout<<"*";
}
if(b=='\b' &&i>0)
{
cout<<"\b";
--i;
}
if(b=='\r')
{
pass[i]='\0';
break;
}
}
}
if((strcmpi(a,"admin")==0))
{
int i,j;
for(i=0;i<80;i++)
cout<<'*';
cout<<"\t\t\t\t ADMIN\n";
for(i=0;i<80;i++)
cout<<'*';
place(3,20);
cout<<"0.SEARCH";
place(3,20);
cout<<"1.ADD AN USER";
place(3,20);
cout<<"2.DELETE AN USER";
place(3,20);
cout<<"3.UPDATE INVENTORY";
place(3,20);
cout<<"4. TO VIEW ALL THE USER'S DETAILS";
place(3,20);
cout<<"5. TO VIEW THE INVENTORY";
place(3,20);
cout<<"6.MAIN MENU";
place(3,20);
cout<<"7. TO VIEW THE OTHERS";
place(3,20);
cout<<"8.TO VIEW THE QUERIES";
place(3,20);
cout<<"9. EXIT";
place(3,20);
cout<<"PRESS ANY KEY TO CONTINUE:";
cin>>i;
ifstream f;
char s;
switch(i)
{
case 0:
search();
s=getch();
firstmod();
 break;
case 1: signup();
s=getch();
firstmod();
break;
case 2: del();
s=getch();
firstmod() ;
break;
case 3: invent() ;
break;
case 4:
f.open("user.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE!" ;
exit(1);
}
while(f.read((char*)&x,sizeof(x)))
x.display();
f.close();
break;
case 6: strcpy(testun,"admin");
mainmenu();
case 7: strcpy(testun,"admin");
history();
f.close();
break;
case 8:
f.open("query.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN";
exit(1);
}
while(f.read((char*)&vquery,sizeof(vquery)))
{
cout<<vquery.name<<" ";
cout.write(vquery.query,strlen(vquery.query) );
cout<<'\n';
}
f.close();
break;
case 5:
for(i=0;i<80;i++)
cout<<'*';
cout<<"\t\t\t\t";
for(i=0;i<80;i++)
cout<<'*';
place(0,20);
cout<<"\n\n1.PEN";
place(0,20);
cout<<"\n\n2.PENCIL";
place(0,20);
cout<<"\n\n3.OTHERS\n";
cout<<"\n ENTER ANY KEY TO CONTINUE!";
cin>>j;
switch(j)
{
case 1: f.open("comeon.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE!";
exit(1);
}
while(f.read((char*)&pe,sizeof(pe)))
{
pe.display();
cout<<'\n';
}
f.close();
break;
case 2:
f.open("pencil.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE";
exit(1);
}
while(f.read((char*)&pe,sizeof(pe)))
{
p.display();
cout<<"\n";
}
f.close();
break;
case 3:
f.open("others.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE!";
exit(1);
}
while(f.read((char*)&ot,sizeof(ot)))
{
ot.display();
cout<<'\n';
}
f.close();
}
break;
case 9: exit (0);
break;
default:mainmenu();
}
}
else
{
char ch;
cout<<"\ do you want to continue as admin";
ch=getch();
if(ch=='y'||ch=='Y')
goto top;
else
signin();
}
}
void mainmenu()
{
for(int i=0;i<80;i++)
cout<<"-";
cout<<'\n'<<setw(40)<<"MAIN MENU \t"<<" hello mr "<<'\n';
for(i=0;i<80;i++)
{
cout<<"-";
}
int x;
place(3,20);
cout<<"1. GET SOME COOL ACCESSORIES";
place(3,20);
cout<<"2. ASK FOR SUGGESTIONS AND QUERIES";
place(3,20);
cout<<"3. HISTORY OF THE ORDERS YOU HAVE MADE HERE";
place(3,20);
cout<<"4. CONTACT US FOR CLARIFICATION RELATED TO THE PRODUCTS";
place(3,20);
cout<<"5. EXIT";
place(3,20);
cout<<"6.ADMIN";
place(3,20);
cout<<"\n WHAT DO YOU WANT TO DO NOW?";
cin>>x;
switch(x)
{
case 1: shop();
break;
case 2: query();
break;
case 3: history();
break;
case 4: contactus();
break;
case 5: exit(0);
break;
case 6: admin();
break;
default: exit(0);
}
}
void search ()
{
for(int i=0;i<80;i++)
cout<<'*';
cout<<'\n'<<setw(40)<<"\n SEARCH \n\n";
for(i=0;i<80;i++)
cout<<'*';
ifstream f;
char y[5];
f.open("user.dat",ios::binary);
cout<<"\n\n\n enter the username to be searched for: ";
gets(y);
int found=0;
while(f.read((char*)&x,sizeof(x))&&found==0)
{
if (strcmpi( y,x.run( ) ) ==0)
{
found=1;
cout<<"\n USER FOUND!";
x.display();
}
else
cout<<"\n USER NOT FOUND!";
}
f.close();
}
void invent()
{
for(int i=0;i<80;i++)
cout<<'*';
cout<<'\n'<<setw(40)<<"INVENT\n\n";
for(i=0;i<80;i++)
cout<<'*';
int x;
cout<<"\n\t\t 1.ADD \n\t\t 2.UPDATE \n";
cin>>x;
int code,found=0;
ifstream f;
ofstream pn,p1,o;
char ch;
switch(x)
{
case 1:
cout<<"DO YOU WANT TO ADD\?\N";
cout<<" 1.PEN\n ";
cout<<" 2.PENCILS\n ";
cout<<" 3.OTHERS\n ";
cin>>x;
switch(x)
{
case 1:
pn.open("comeon.dat",ios::out|ios::binary);
if(!pn)
{
cerr<<"\n cannot open file";
exit(1);
}
do
{
pe.input();
pn.write((char*)& pe,sizeof(pe));
cout<<"\n \t DO YOU WANT TO CONTINUE?";
cin>>ch;
}
while(ch=='y'||ch=='Y');
pn.close();
break;
case 2:
p1.open("pencil.dat",ios::app|ios::binary);
if(!p1)
{
cerr<<"\n cannot open file";
exit(1);
}
do
{
p.input();
p1.write((char*)&p,sizeof(p));
cout<<"\n DO YOU WANT TO CONTINUE?";
cin>>ch;
}
while(ch=='y'||ch=='Y');
p1.close();
break;
case 3:
o.open("others.dat",ios::out|ios::binary);
if(!o)
{
cerr<<"\n CANNOT OPEN FILE!";
exit(1);
}
do
{
ot.input();
int ch;
o.write((char*)&ot,sizeof(ot) );
cout<<"\n DO YOU WANT TO ENTER MORE\?";
cin>>ch;
}
while(ch=='y'|| ch=='Y');
o.close();
break;
}
break;
case 2:
cout<<"\n\n\n 1.PEN\n";
cout<<"\n\n\n 2.PENCIL\n";
cout<<"\n\n\n 3.OTHERS\n";
cout<<"\n\n\n ENTER THE NUMBER TO BE UPDATED: ";
cin>>x;
switch(x)
{
case 1:
cout<<"\n ENTER THE CODE NUMBER OF ITEMS TO BE UPDATED: ";
cin>>code;
f.open("comeon.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE!";
exit(1);
}
while(f.read((char*) &pe,sizeof(pe))&&found==0)
{
if(code==pe.codenum)
{
found=1;int g;
cout<<"\n enter the qty to be updated";
cin>>g;
pe.up(g);
}
}
f.close();
break;
case 2:
cout<<"\n ENTER THE CODE NUMBER TO BE UPDATED: ";
cin>>code;
f.open("pencils.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE!";
exit(1);
}
while(f.read((char*)&p,sizeof(p)&&found==0))
{
if(code==p.codenum)
{
found=1;
int g;
cout<<"\n enter the qty to be updated";
cin>>g;
p.up(g);
}
}
f.close();
break;
case 3:
cout<<"\n ENTER CODE NUMBER TO BE UPDATED: ";
cin>>code;
f.open("others.dat",ios::binary);
if(!f)
{
cerr<<"\n CANNOT OPEN FILE!";
exit(1);
}
while(f.read( (char*) &ot,sizeof (ot) ) &&found==0)
{
if(code==p.codenum)
{
found=1;
int g;
cout<<"\n enter the qty to be updated";
cin>>g;
ot.up(g);
}
}
f.close();
break;
}
break;
}
}
void contactus()
{
int i;
char ch;
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n"<<setw(50)<<"contact us \n\n";
for(i=0;i<80;i++)
cout<<"*";
cout<<" E STATIONARY \n";
cout<<" NO 9,NITHIN COMPLEX,\n";
cout<<" RAM ROAD,\n";
cout<<" REVANTHPURAM,\n";
cout<<" CHENNAI-600081.\n";
cout<<" CONTACT NO-91 9840913665 \n";
cout<<" LANDLINE:+044 28156277 \n";
cout<<" E-MAIL:nithin999@gmail.com \n \n";
cout<<" \t\tEnter 1 to login as admin";
cin>>ch ;
if(ch=='1')
admin();
else
mainmenu();
}
void shop()
{
clrscr();
int i;
for(i=0;i<80;i++)
cout<<"*";
cout<<"\n "<<setw(40)<<"SHOP \n\n";
for(i=0;i<80;i++)
cout<<"*";
int j,ord;
int cdn;
int price=0;
int qt;
int ans;
ifstream f;
ofstream f1;
clrscr();
f1.open("order.dat",ios::binary|ios::app);
if(!f1)
{
cerr<<"\n file not found at all";
exit(1);
}
cout<<"\n WHAT ARE YOU GOING TO BUY? : ";
cout<<"\n 1.PENS";
cout<<"\n 2.PENCILS";
cout<<"\n 3.OTHER STATIONERY ITEMS";
cin>>ord;
char ch='y';
int found=0;
switch(ord)
{
case 1:
clrscr();
f.open("comeon.dat",ios::binary);
if(!f)
{
cerr<<"\n file not found at all";
exit(1);
}
while(f.read((char*)&pe,sizeof(pe)))
{
pe.display();
cout<<'\n';
}
f.close();
x:
f.open("comeon.dat",ios::binary);
if(!f)
{
cerr<<"\n file not found at all";
exit(1);
}
ch='y';
cout<<"\n enter the codenumber needed";
cin>>cdn;
cout<<"\n enter the quantity needed";
cin>>qt;
while(f.read((char*)&pe,sizeof(pe))&&found==0)
{
i=pe.rqty();
if((pe.codenum==cdn)&&(qt<=i))
{
found=1;
break;
}
}
if(found)
{
j=pe.rprice();
price+=(qt*j);
int g=i-qt;
pe.up(g);
strcpy(vorder.name,testun);
strcpy(vorder.brand,p.brand);
vorder.codenum=pe.codenum;
vorder.price=qt*j;
f1.write((char*)&vorder,sizeof(vorder));
}
else
{
cout<<"\n entered code number is not present";
f.close();
goto x;
}
cout<<"\n do you want to continue";
cin>>ch;
if(ch=='y'||ch=='Y')
{
f.close();
goto x;
}
else
{
f.close();
break;
}
break;
case 2:
f.open("pencil.dat",ios::binary);
if(!f)
{
cerr<<"\n cannot open file";
exit(1);
}
while(f.read((char*)&p,sizeof(p)))
{
p.display();
cout<<"\n";
}
f.close();
y:
f.open("pencil.dat",ios::binary);
if(!f)
{
cerr<<"\n cannot open file";
exit(1);
}
ch='y';
cout<<"enter the codenumber needed";
cin>>cdn;
cout<<"enter the quamtity needed";
cin>>qt;
while(f.read((char*)&p,sizeof(p))&&found==0)
{
i=p.rqty();
if((p.codenum==cdn)&&(qt<=i))
{
found=1;
break;
}
}
if(found)
{
j=p.rprice();
price+=(qt*j);
int g=i-qt;
p.up(g);
strcpy(vorder.name,testun);&vorder;
strcpy(vorder.brand,p.brand);
vorder.codenum=p.codenum;
vorder.price=qt*j;
f1.write((char*)&vorder,sizeof(vorder));
}
else
{
cout<<"\n entered code number is not present";
f.close();
goto y;
}
cout<<"\n do you want to continue?";
cin>>ch;
if(ch=='y'||ch=='Y')
{
f.close();
goto y;
}
else
{
f.close();
break;
}
case 3:
f.open("others.dat",ios::binary);
if(!f)
{
cerr<<"\n cannot open file";
exit(1);
}
while(f.read((char*)&ot,sizeof(ot)))
{
ot.display();
cout<<"\n";
}
f.close();
z:
f.open("others.dat",ios::binary);
if(!f)
{
cerr<<"\n cannot open file";
exit(1);
}
ch='y';
cout<<"enter the codenumber needed";
cin>>cdn;
cout<<"enter the qty needed";
cin>>qt;
while(f.read((char*)&ot,sizeof(ot))&&found==0)
{
i=ot.rqty();
if((ot.codenum==cdn)&&(qt<=i))
{
found=1;
break;
}
}
if(found)
{
j=ot.rprice();
price+=(qt*j);
int g=i-qt;
ot.up(g);
strcpy(vorder.name,testun);
strcpy(vorder.brand,ot.brand);
vorder.codenum=ot.codenum;
vorder.price=qt*j;
f1.write((char*)&vorder,sizeof(vorder));
}
else
cout<<"\n entered code number is not present";
f.close();
cout<<"\n do u want to continue";
cin>>ch;
if(ch=='y'||ch=='Y')
{
f.close();
goto z;
}
else
{
f.close();
}
f1.close();
cout<<"\n\n\n"<<price;
}
}
void history()
{
for(int i=0;i<80;i++)
cout<<'*';
cout<<'\n'<<setw(40)<<"\n ORDER HISTORY\n\n";
for(i=0;i<80;i++)
cout<<'*';
place(3,20);
ifstream f;
f.open("order.dat",ios::binary);
if(!f)
{
cerr<<"\n cannot open";
exit(1);
}
int found=0;
while(f.read((char*)&vorder,sizeof(vorder))&&found==0)
if (strcmpi(testun,vorder.name)==0)
{
found=1;
f.seekg(0,ios::beg);
break;
}
if (found==1)
{
cout<<"codenum"<<" "<<setw(20)<<"brand"<<" "<<"quantity"<<" "<<"price"<<" "<<"status";
place(1,20);
while(f.read((char*)&vorder,sizeof(vorder)))
if(strcmpi(testun,vorder.name)==0)
{
cout<<"codenum"<<" "<<setw(20)<<"brand"<<" "<<"quantity"<<" "<<"price"<<" "<<"status";
place(1,20);
}
}
else if(strcmpi(testun,"admin")==0)
{
cout<<"codenum"<<" "<<setw(20)<<"brand"<<" "<<"quantity"<<" "<<"price"<<" "<<"status";
place(1,20);
while(f.read((char*)&vorder,sizeof(vorder)))
{
cout<<vorder.codenum<<" "<<setw(20)<<vorder.brand<<" "<<vorder.qty<<" "<<vorder.price<<"
"<<vorder.status;
place(1,20);
}
}
else
cout<<"there are no orders placed";
f.close() ;
}
void query()
{
ofstream f;
f.open("query.dat",ios::binary|ios::app);
if(!f)
{
cerr<<"\n file not available";
exit(1);
}
cout<<"\n enter your name : ";
gets(vquery.name);
cout<<"\n enter your age : ";
cin>>vquery.age;
cout<<"\n enter your queries and suggestions : ";
gets(vquery.query);
cout<<"\n\n\n";
f.write((char*)&vquery,sizeof(vquery));
place(0,25);
cout<<"\n your queries were noted down and appropriate acion will be taken";
clrscr();
f.close();
int x;
cout<<"\n enter 1 to go to main menu and \n enter 2 to exit \n";
cin>>x;
if(x==1)
mainmenu();
else
exit(0);
}