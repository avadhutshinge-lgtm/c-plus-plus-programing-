#include<iostream>
using namespace std;
int main()
{
int Science;
cout<<"enter your stream(1 or 2):"<<endl<<"1.science"<<endl<<"2.Arts"<<endl;
cin>>Science;
if(Science==1)
{
cout<<"*******YOU CHOOSE SCIENCE STREAM**********"<<endl<<"YOUR SUBJECTS:"<<endl<<"Maths"<<endl<<"Chemistry"<<endl<<"Physics"<<endl<<"English";
}
else if(Science==2)
{
cout<<"*******YOU CHOOSE ARTS STREAM**********"<<endl<<endl<<"YOUR SUBJECTS:"<<endl<<"Marathi"<<endl<<"Hindi"<<endl<<"geography"<<endl<<"History";
}
else
{
cout<<"invalid choice"<<endl<<"****PLEASE SELECT CORRECT****";
}
return 0;
}

