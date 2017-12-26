#include <iostream>
using namespace std;
int main() 
{
 int elements[100],n,i,left,right,index,mid;

	cout<<"Enter the Number of Elements in the array(Only distinct sorted integers)\n";
	cin>>n;
	
	cout<<"Enter the Elements seperated by space\t";
	for (i = 1; i <= n; i++)
	{
		cin>>elements[i];
	}
    left = 1;
    right=n;
    index=-1;
    while(left<=right)
        {
            mid = (left+right)/2;
           if(elements[mid]==mid)
                {
                    index = mid;
                    break;
                }
                
            else if(elements[mid]>mid)
                left=mid+1;
            else if(elements[mid]<mid)
                right=mid-1;
        }
    if(index==-1)
        cout<<"\n"<<"False";
    else
        cout<<"\n"<<"True"<<"\nFound at index:"<<index;
	return 0;
}