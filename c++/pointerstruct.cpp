#include<iostream>
#include<cstdlib>

int area(int lenght, int height)
{
if(lenght >0 || height >0)
    return lenght*height;

 else
return 0;
}

int main() {
    using namespace std;

    struct point{
        int x;
        int y;
    };
    struct {
       int length;
       int height; 
    }box;
   struct point p1;
   
   

       

    p1.x = 4;
    p1.y =6;
   /* struct point p2;
    struct point* ptr = &p2;
    (*ptr).x =9;
    (*ptr).y =8;
     cout <<(*ptr).x <<(*ptr).y <<"\n";
*/

  point *p2;
  p2 =(point*)malloc(sizeof(point));
  

if(p2==NULL)  {
    cout<< "No memory allocated";

} else {
  
  cout << "memory allocated!";
    (*p2).x=4;
    (*p2).y=5;
  cout <<(*p2).x <<p2->y;
  cout <<"\n";
  free(p2);
  if(p2)
  cout << "Free Memory";
  else
  cout<< "Memory leak";
}


    box.height = 10;
    box.length = 10;


    cout << "Area of the box" << area(box.height,box.length) <<"\n";


    cout << p1.x << p1.y << "\n";
    
    cout <<box.length << box.height;

    return 0;

}