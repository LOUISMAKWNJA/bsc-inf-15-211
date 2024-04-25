#include <iostream>
using namespace std;

int main()
{

 std::string codes[8]={"B123","C234","A345","C15","B177","G3003","C235","B179"} ;
 for (const string & element : codes){

    if(element[0] == 'B'){
        cout << element << endl;
    }
 }
  return 0;
}


