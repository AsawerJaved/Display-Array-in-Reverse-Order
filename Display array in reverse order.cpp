#include <iostream>
using namespace std;
int main()
{
    char array[50];
    int i=0;
    
    cout<<"Enter an array: ";
    cin.getline(array,50);      // input spaces also
    
    cout<<"\n--------Before Reversal--------"<<endl;
    
    for(i=0;array[i]!='\0';i++)
    {                                    // before
    	cout<<array[i];
    }
    
    cout<<"\n\n--------After Reversal--------"<<endl;
    
    for(int a=i-1;a>=0;a--)
    {                                    // after
    	cout<<array[a];
    }
    

    return 0;
}
