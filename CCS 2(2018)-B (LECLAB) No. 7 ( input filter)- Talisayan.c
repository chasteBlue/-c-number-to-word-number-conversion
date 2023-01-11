#include <stdio.h>
 
main()
{
int num;
printf(" Input Filler\n");
printf("Enter the integers between 1 to 9999: \n");
scanf("%d",&num);

	int thousand = num/1000;
	int hundred = ((num/100) % 10);
	int teens= (num % 100);
	int tens = ((num/10) % 10);
	int ones= num % 10;
	
if( num < 1) 
{	printf(" The number is invalid.");
} 
else
if(num > 9999) 
{	printf(" The number is invalid.");
} 

	else	
{
	if(thousand == 1) 
	{
		printf("One Thousand ");
	}	
	if(thousand == 2)
	{
		printf ("Two Thousand ");
	}
	if(thousand == 3) 
	{
		printf("Three Thousand ");
	}	
	if(thousand == 4)
	{
		printf ("Four Thousand ");
	}
	if(thousand == 5) 
	{
		printf("Five Thousand ");
	}	
	if(thousand == 6)
	{
		printf ("Six Thousand ");
	}
	if(thousand == 7) 
	{
		printf("Seven Thousand ");
	}	
	if (thousand == 8)
	{
		printf ("Eight Thousand ");
	}
	if(thousand == 9) 
	{
		printf("Nine Thousand ");
	}	

	if(hundred == 1) 
	{
		printf("One Hundred ");
	}	
	if(hundred == 2)
	{
		printf ("Two Hundred ");
	}
	if(hundred == 3) 
	{
		printf("Three Hundred ");
	}	
	if(hundred == 4)
	{
		printf ("Four Hundred ");
	}
	if(hundred == 5) 
	{
		printf ("Five Hundred ");
	}	
	if( hundred== 6)
	{
		printf ("Six Hundred ");
	}
	if(hundred == 7) 
	{
		printf ("Seven Hundred ");
	}	
	if(hundred == 8)
	{
		printf ("Eight Hundred ");
	}
	if(hundred == 9)
	{
	printf ("Nine Hundred ");
	}
	
if(teens == 10)
{
	printf ("Ten ");		
}
if(teens == 11) 
{
	printf ("Eleven ");
}	
if(teens == 12)
{
	printf ("Twelve ");
}
if(teens == 13) 
{
	printf ("Thirteen ");
}	
if(teens == 14)
{
	printf ("Fourteen ");
}
if(teens == 15) 
{
	printf ("Fifteen ");
}	
if(teens == 16)
{
	printf ("Sixteen ");
}
if(teens == 17) 
{
	printf ("Seventeen ");
}	
if(teens == 18)
{
	printf ("Eighteen ");
}
if(teens == 19) 
{
	printf ("Nineteen ");
}

if(teens < 10 || teens> 19)
{ 
  	if(tens == 2)
	{
		printf ("Twenty ");
	}
	if(tens == 3) 
	{
		printf ("Thirty ");
	}		
	if(tens == 4)
	{
		printf ("Forty ");
	}
	if(tens == 5) 
	{
		printf ("Fifty ");
	}	
	if(tens == 6)
	{
		printf ("Sixty ");
	}
	if(tens == 7) 
	{
		printf ("Seventy ");
	}	
	if(tens == 8)
	{
		printf ("Eighty ");
	}
	if(tens == 9) 
	{
		printf ("Ninety ");
	}		
			
	if(ones == 1) 
	{
		printf ("One");
	}	
	if(ones == 2)
	{
		printf ("Two");
	}
	if(ones == 3) 
	{		
		printf ("Three");
	}	
	if(ones == 4)
	{
		printf ("Four");
	}
	if(ones == 5) 
	{
		printf ("Five");
	}	
	if(ones == 6)
	{
		printf ("Six");
	}
	if(ones == 7) 
	{
		printf ("Seven");
	}	
	if(ones == 8)
	{
		printf ("Eight");
	}
	if(ones == 9) 
	{
		printf ("Nine ");
	}	
}
}
}

