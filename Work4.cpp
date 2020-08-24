#include <iostream>
using namespace std;
int main()
{char grade ;
 float a =  0;
 int   t = -1;
  do{
     cout<<"Enter the letter grade(Enter 'x' to exit)"<<endl;
     cin>>grade;
	 if(grade == 'a'||grade == 'A') a += 4;
     else if(grade =='b'||grade =='B') a += 3;
	 else if(grade =='c'||grade =='C') a += 2;
	 else if(grade =='d'||grade =='D') a += 1;
     else if(grade =='f'||grade =='F') a += 0;
	 t++;
    }
  while(grade != 'X' && grade != 'x') ;
  cout<<"total grade point"<<a<<endl;
  cout<<"GPA :"<<a/t<<endl;

return 0;
}
