#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class job{
  public:
  void non_tech();
  void tech();
  void inter();
};
void job::non_tech()
{
  char edu[20],skill[50],d[10] ,degree[10],deploma[50];
  char ask;
  int year;
  cout<<"  NON -TECHNICAL JOBS";
  cout<<" PLEASE SHARE YOUR INFORMATION FOR  FURTHER PROCESS";
  cout<<"  YOUR EDUCATION";
  cout<<"DO YOU HAVE \n\aDEGREE \n\aDEPLOMA";
  cin >>d;
    if(strcmp(d,"DEGREE")==0)
    {
      cout<<" \nA)BBA \nB)BJMC\nC)BA \nD)B.COM \nE) B.DES";
      cin>>degree;
      if(strcmp(degree,"BBA")==0)
      {
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;
    if(ask=='y')
    {
      cout<<"hom many years of experince (1-12) ";
      cin>>year;
    }
    else if(ask=='n')
    {
     cout<<"as a fresher \n you salary must be 1.65 lakh annum";
      cout<<"\n your inhand salry=12500 ";
      cout<<"\n  your pf from salary 700\nmedical insurence 550 ";
    }

      }
      if(year>4)
      {
        
        cout<<" \n your salary must be 3 lakh annum";
      cout<<"\n your inhand salry=21000 ";
      cout<<"\n  your pf from salary2000  \nmedical insurence 1500";
       
      }
      if(year>8)
      {
       cout<<"salary  as experienced upto 5.3 lakh per annum ";
      cout<<"\n your inhand salry=42000 ";
      cout<<"\n  your pf from salary1.5k \nmedical insurence 600";
  
      }
      if(year>=12)
      {
        cout<<"highest salry is 23.6 lakhs per annum as an business administrator";
        
      cout<<"\n your inhand salry=1.86lakh ";
      cout<<"\n  your pf from salary   6000\nmedical insurence 5500";
  
      }
      if(strcmp(degree,"BJMC")==0)
      {
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;
    if(ask=='y')
    {
      cout<<"hom many years of experince (1-12) ";
      cin>>year;
      if (year>4)
      {cout<<"\nAS A JOURNLIST";
        cout<<"as you have experience your have chance to get mmore then 5lakh perannum pakage";
      }
      else if( year>8)
      cout<<"as you have experience your have chance to get mmore then 15lakh perannum pakage";
      else if(year>=12)
      cout<<"as you have experience your have chance to get mmore then 20lakh perannum pakage";
    }
    if (ask=='n')
    { 
     cout<<"\nAS A JOURNLIST";
     cout<<"\n average pakage as freshar is 3.5k aprox in INDIA";
     cout<<"YOU PF IS DEPND UPON YOR CHOICE SAME CHOICE WITH YOUR MEDIACL INCCURENCE"; 
    }
      }
      if(strcmpi(degree,"BA")==0)
      { cout<<"\n                         Business analyst";
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in B A  your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in B A  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    if (ask=='n')
    {
     cout<<"as a experienced in B A  your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
      }
    if(strcmpi(degree,"B.COM")==0)
    {
      cout<<"\n                        Bachelor of Commerce      ";
      cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {cout<<"hom many years of experince ";
      cin>>year;
        if(year>4)
        {
         cout<<"\nas an experienced you salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    } 
    if(year>8)
      {
       cout<<"salary  as experienced upto 5.3 lakh per annum ";
      cout<<"\n your inhand salry=42000 ";
      cout<<"\n  your pf from salary1.5k \nmedical insurence 600";
  
      }
      if(year>=12)
      {
        cout<<"highest salry is 23.6 lakhs per annum as an business administrator";
        
      cout<<"\n your inhand salry=1.86lakh ";
      cout<<"\n  your pf from salary   6000\nmedical insurence 5500";
      }}
      if(ask=='n')
      cout<<"you dont have any experience your salary must be below 1.5 lakh per annum";

        
    }
    if(strcmpi(degree,"B.DES")==0)
    {
cout<<"                        \n          Bachelor of Design [B.Des]"  ;
   cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
     {
        if(year>4)
        {
         cout<<"\nas an experienced you salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    } 
    if(year>8)
      {
       cout<<"salary  as experienced upto 5.3 lakh per annum ";
      cout<<"\n your inhand salry=42000 ";
      cout<<"\n  your pf from salary1.5k \nmedical insurence 600";
  
      }
      if(year>=12)
      {
        cout<<"highest salry is 23.6 lakhs per annum as a designer";
        
      cout<<"\n your inhand salry=1.86lakh ";
      cout<<"\n  your pf from salary   6000\nmedical insurence 5500";
      }

     } 
    }
    if (ask=='n')
    {
      
      cout<<"you dont have any experience your salary must be below 1.5 lakh per annum";

    }
    }
    }
    if(strcmpi(d,"DIPLOMA")==0)
{
    cout<<"a)fashion designing\nb) HOTEL .M";
      cout<<"\n tell us aboutyour diploma";
      cin>>deploma;
      if(strcmpi(deploma,"FASION")==0){
    cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
      if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in fasion designer your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in fasion designor  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    if (ask=='n')
    {
     cout<<"as a experienced in fasion designor your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
    }
}
      if(strcmpi(deploma,"HOTEL.M")==0){
        cout<<"\n\n  diploma with hotel managment";
    cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
      //cout<<"hom many years of experince ";
     // cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in fasion designer your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in fasion designor  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    if (ask=='n')
    {
     cout<<"as a experienced in fasion designor your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
    }
  
} 
}


void job::tech()
{
    int year;
    char degree[20],diploma[20];
}
void job::inter()
{
 char edu[20],skill[50],D[10],bg[10] ,deploma[50];
  char ask;
  int year;float p;
  cout<<"  INTERMEDIATE JOBS";
  cout<<" PLEASE SHARE YOUR INFORMATION FOR  FURTHER PROCESS";
  cout<<"WHAT IS YOUR INTERMEDIATE BACKGROUND?\n 1.ARTS\n2.COMMERCE\n3SCIENCE";
  cin >>bg;
    if(strcmpi(bg,"arts")==0){
    {
      cout<<" \n WHAT IS YOUR PERCENTAGE\n";
      cin>>p;
      cout<<"DO YOU HAVE ANY EXTRA SKILLS?\n1.Y\n2.N";
    cin>>skill;
    cout<<"do you have experience?\n";
    cout<<"y\\nn";
    cin>>ask;
    if(ask=='y')
    {
      cout<<"hom many years of experince (1-12) ";
      cin>>year;
    }
    else if(ask=='n')
    {
     cout<<"as a fresher \n you salary must be 1.65 lakh annum";
      cout<<"\n your inhand salry=12500 ";
    }

      }
      if(year>4)
      {
        
        cout<<" \n your salary must be 3 lakh annum";
      cout<<"\n your inhand salry=21000 ";
      cout<<"\n  your pf from salary2000  \nmedical insurence 1500";
       
      }
      if(year>8)
      {
       cout<<"salary  as experienced upto 5.3 lakh per annum ";
      cout<<"\n your inhand salry=42000 ";
      cout<<"\n  your pf from salary1.5k \nmedical insurence 600";
  
      }
      if(year>=12)
      {
        cout<<"highest salry is 23.6 lakhs per annum as an business administrator";
        
      cout<<"\n your inhand salry=1.86lakh ";
      cout<<"\n  your pf from salary   6000\nmedical insurence 5500";
  
      }
  }
    else  if(strcmp(bg,"COMMERCE")==0)
      {
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;
    if(ask=='y')
    {
      cout<<"hom many years of experince (1-12) ";
      cin>>year;
      if (year>4)
      {cout<<"\nAS A COMMERCE BACKGROUND";
        cout<<"as you have experience your have chance to get mmore then 5lakh perannum pakage";
      }
      else if( year>8)
      cout<<"as you have experience your have chance to get mmore then 15lakh perannum pakage";
      else if(year>=12)
      cout<<"as you have experience your have chance to get mmore then 20lakh perannum pakage";
    }
    if (ask=='n')
    { 
     cout<<"\nIN COMMERCE";
     cout<<"\n average pakage as freshar is 3.5k aprox in INDIA";
     cout<<"YOU PF IS DEPND UPON YOR CHOICE SAME CHOICE WITH YOUR MEDIACL INCCURENCE"; 
    }
      }
    else  if(strcmpi(bg,"SCIENCE")==0)
      { 
        cout<<"\n tell us somthing about your skills";
    cin>>skill;
    cout<<"do you have experience";
    cout<<"yess \n no";
    cin>>ask;      
    if(ask=='y')
    {
      cout<<"hom many years of experince ";
      cin>>year;
       if(year>6)
       {
       cout<<"as a freshar in  your salary must be in between 3-5 lakhs per annum";
     cout<<" in hand you get aprox 25000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 750 per mounth ";
       }
       if(year>=12)
       {
 cout<<"as a experienced in B A  your salary must be in between 5-10 lakhs per annum";
     cout<<" in hand you get aprox 36000\n PF cut from salary will be lewss then 1.5k per mounth\nmedical insu.aproxx 900per mounth ";
       }
    }
    if (ask=='n')
    {
     cout<<"as a experienced   your salary must be in between 1.2-2 lakhs per annum";
     cout<<" in hand you get aprox 10000\n PF cut from salary will be lewss then 1000 \nmedical insu.aproxx 600 per mounth ";
    }
      }
}


int main()
{ 
  job obj;
  string name1,name2;
  int ch;
  system ("cls");
  cout<<"\t\a            ###############PAYROL MANAGMENT SYSTEM##############";
  
   cout<<"\n Enter your first name\n";
  cin>>name1;
  cout<<"enter second name";
  cin>>name2;
  cout<<" your name"<<name1+" "+name2;
do{
   cout<<"tell us from which stream you come from";
   cout<<"\n 1 technical \n 2 non technical \n3 intermidiate";
   cin>>ch;
   switch(ch)
   {
    case 1:
      obj.tech();
      break;
    case 2:
       obj.non_tech();
       break;
    case 3:
		obj.inter();
		break;
    default:
      cout<<"invalid choice";
   }
  cout<<"do you want to perform again";
 cout<<"\n 1 yss \n 0 no";
 cin>>ch;
if(ch==0)
{
  cout<<"exit";
  break;
}
}
while(ch==1);
 return 0;
}