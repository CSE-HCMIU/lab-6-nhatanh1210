/*
1. Input a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: "one thousand two hundred thirty four" |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>

int ex1(int testcase){
//*input your code
	int n = testcase,m,i, a[size];
    for (i=0; i<4; i++)
    {
    	a[i] = n%10;
    	n=n/10;
	}
    switch (a[3])
    {
    	case 1: printf (" one"); 
    	break;
		case 2: printf (" two"); 
    	break;
    	case 3: printf (" three"); 
    	break;
    	case 4: printf (" four"); 
    	break;
    	case 5: printf (" five"); 
    	break;
    	case 6: printf (" six"); 
    	break;
    	case 7: printf (" seven"); 
    	break;
    	case 8: printf (" eight"); 
    	break;
    	case 9: printf (" nine"); 
    	break;
	}
    printf(" thousand");
	switch (a[2])
    {
    	case 1: printf (" one"); 
    	break;
		case 2: printf (" two"); 
    	break;
    	case 3: printf (" three"); 
    	break;
    	case 4: printf (" four"); 
    	break;
    	case 5: printf (" five"); 
    	break;
    	case 6: printf (" six"); 
    	break;
    	case 7: printf (" seven"); 
    	break;
    	case 8: printf (" eight"); 
    	break;
    	case 9: printf (" nine"); 
    	break;
	}
	printf (" hundred");
	switch (a[1])
    {
    	case 1: printf (" one"); 
    	break;
		case 2: printf (" twenty"); 
    	break;
    	case 3: printf (" thirdty"); 
    	break;
    	case 4: printf (" forty"); 
    	break;
    	case 5: printf (" fifty"); 
    	break;
    	case 6: printf (" sixty"); 
    	break;
    	case 7: printf (" seventy"); 
    	break;
    	case 8: printf (" eighty"); 
    	break;
    	case 9: printf (" ninety"); 
    	break;
	}
	switch (a[0])
    {
    	case 1: printf (" one"); 
    	break;
		case 2: printf (" two"); 
    	break;
    	case 3: printf (" three"); 
    	break;
    	case 4: printf (" four"); 
    	break;
    	case 5: printf (" five"); 
    	break;
    	case 6: printf (" six"); 
    	break;
    	case 7: printf (" seven"); 
    	break;
    	case 8: printf (" eight"); 
    	break;
    	case 9: printf (" nine"); 
    	break;
}

int main(int argc, char *argv[]) {
	int testcase = atoi(argv[1]);
	
	ex1(testcase);
		
	return 0;
}
