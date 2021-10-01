#include <iostream>
using namespace std;
    int main()
    {
    	int width, lngth, peri;	
        cout<<" Input the length of the rectangle : ";
    	cin>>lngth;
        cout<<" Input the width of the rectangle : ";
    	cin>>width;
        peri=2*(lngth+width);
        cout<<" The perimeter of the rectangle is : "<< peri << endl;		
        cout << endl;
        return 0;
    }
