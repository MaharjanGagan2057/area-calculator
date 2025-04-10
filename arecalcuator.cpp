#include <iostream>
using namespace std;
int main()
{
    //first rectangle
   double length1,breath1;
   string a="Sq.ft";
   
    cout <<"Enter Length 1:" <<endl;
    cin >>length1;

    cout<<"Enter Breath 1"<<endl;
    cin >> breath1;
      double area = length1*breath1;
    cout << "The area of the rectangle 1 is :"<<area <<" "<<a <<endl<<endl;
    
 //second rectangle
   double length2,breath2;
   
    cout <<"Enter Length2:" <<endl;
    cin >>length2;

    cout<<"Enter Breath2"<<endl;
    cin >> breath2;
      double area2 = length2*breath2;
    cout << "The area of the rectangle 2 is :"<<area2 <<" "<<a <<endl <<endl;
    
    
    if (area<area2){
        cout<<"----> ""2st Rectangle Bigger";
    }
    
    
    else if (area>area2){
        cout  <<" 1st Rectangle is Bigger ";
        }
        
        else{ 
        cout<<"Both Are Equal";
        }
    return 0;
}       
    
    