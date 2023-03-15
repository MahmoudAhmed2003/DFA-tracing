#include<iostream>
using namespace std;

 int main() {
   string str;
   int f=0;
   int i;
   cout<<"enter the string to be checked: ";
   cin>>str;
   for(i=0;i<str.size();i++) {
      switch(f) {
         case 0:
            if(str[i]=='1')
                f=1;
            else
                f=-1;
            break;

         case 1:
            if(str[i]=='0')
                f=2;
            else if(str[i]=='1')
                f=4;
            else
                f=-1;
            break;

         case 2:
            if(str[i]=='1')
                f=3;
            else
               f=-1;
            break;

         case 3:
            if(str[i]=='0' || str[i]=='1')
                f=3;
            else
                f=-1;
            break;

         case 4:
             if(str[i]=='0')
                f=5;
             else
                f=-1;
            break;
      }
   }

   if(f==3 || f==5)
      cout<<"String is accepted and end state in "<< f<<endl;
   else
      cout<<"String is not accepted"<<endl;
      return 0;
}
