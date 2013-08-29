  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * Scope - This program describes the scope of variables in C
   */

#include <stdio.h>

//global variable
int a = 50;

void Show()
{// start of block for show method
	printf("\nGlobal A : %d", a); // body of the show method
}// end of block for show method

int main()
{
	//local variable
	int a = 10;
	
	printf("Local A<Main> : %d", a);
	
	Show();
	
	int s;
	{
		int b = 10; // b variable is local to this block
		printf("\nB : %d", b);
	}
	
	{
		int d;	
		{
			int c;
		}
	}
	
	return 0;
}


