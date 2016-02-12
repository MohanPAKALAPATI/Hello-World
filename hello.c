#include <stdio.h>
#include "goodbye.h"
#include "hellomid.h"
//GoodbyeMSG(); //proto type
int main()
      {
          printf("Hello, world!\n");
		  printf("Hello, world From New Branch!\n");
		  printf("Hello, world From Jenkins Git Build!\n");
		  printf("Hello, Jenkins Build\n");
		   printf("Test, Jenkins Build\n");
		   printf("Test, Jenkins Build\n")//Inject bug
		  GoodbyeMSG();
		  HelloMid();
		  return 0;
	  }
      
