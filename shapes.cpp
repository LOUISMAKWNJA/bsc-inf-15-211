#include <iostream>
#include <string>
using namespace std;

int main(){

    cout<<"please select the area of the shape to be calculated "<< endl << "1.square" <<endl<<"2.rectangle"<<endl<<"3.triangle"<<endl<<"4.quit program";

    string shape ;

    string square , rectangle ,triangle , quitprogram ;

    cin>> shape;

    if(shape == square){

        cout<<"ENTER LENGTH" ;
        double Area ;
        double length ;

        cin>> length ;

        Area = length * length ;

        cout<<"THE AREA OF THE SQUARE IS"<<" " <<Area ;

    }else if(shape==rectangle){
        double length ;
        double width ;
        double Area ;
        cout <<"ENTER LENGTH" ;

        cin >>length ; 

        cout <<"ENTER WIDTH" ;

         cin >>width ; 

         Area = length * width ;

        cout<<"THE AREA OF THE RECTANGLE IS"<<" " <<Area ;
    }else if (shape==triangle){
        double Area;
        double base ;
        double height;
        cout <<"ENTER THE HEIGHT OF THE TRIANGLE" ;
        cin>>height ;

        cout <<"ENTER THE BASE OF THE TRIANGLE" ;
        cin>>base ;
        Area = 0.5 * base * height ;

        cout<<"THE AREA OF THE TRIANGLE IS"<<" " <<Area ;

    }
    
return 0 ;

}