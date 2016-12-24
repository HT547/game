#include"2048.h"
#include<iostream>
#include<time.h>
int main()
{
		srand(static_cast<int>(time(NULL)));
		g2048 g; //creating an object of class 2048 
		g.loop();//the call of only public function in class which is further using private functions of class 

	

}