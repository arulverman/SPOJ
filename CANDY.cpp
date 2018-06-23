/*input
5
1
1
1
1
6
2
3
4
1
5
2
8
4
4
4
4
4
4
3
1
4
4
-1
*/


#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main()
{
	int candy_packets;

	 while(cin>>candy_packets && candy_packets>=1 && candy_packets<=10000)
    {
    	int sum=0,count=0;

	vector <int> sizes(candy_packets+1);

	for(int i=0;i<candy_packets;i++)
	{
		cin>>sizes[i];
		sum = sum + sizes[i];
	}

if(sum%candy_packets!=0){cout<<"-1";}
else{

      for(int i=0;i<candy_packets;i++)
	{
		if(candy_packets>1 && (sizes[i]< (sum/candy_packets))) {count= count + sum/candy_packets - sizes[i];}
	}

	cout<<count;
}
sizes.clear();
cout<<endl;
}

return 0;
}
