/*input
2 4 6
7 8 9
4 12 16
0 0 0
*/


#include <iostream>
#include <cstdlib>
using namespace std;

int main()

{											

int a1,a2,a3;
while(cin>>a1>>a2>>a3)
{

  if(a1==0 && a2==0 && a3==0) {break;}
  else
  {

  	if(a2-a1 == a3-a2){ cout<<"AP "<< (a3-a2) + a3<<endl;}
  	else {cout<<"GP "<<(a2/a1) * a3<<endl;}

  }

}
return 0;
}