#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
    
    
int Temp_conversion();
int Currency_conversion();
int Number_Conversion();
 
void start()
{
	int select;
	while(1)
	{
	system("cls");
    printf("\n\n\n\t\t\t| Press 1. Temperature (degree C to degree F & vice versa\n");
    printf("\t\t\t| Press 2. Currency (INR to USD, INR to AED & vice-versa)\n");
    printf("\t\t\t| Press 3. Number Conversion \n");
    printf("\t\t\t| Press 4. Exit \n");
    printf("\t\t\t| Enter Your Choice : ");
    scanf("%d",&select);

   switch(select)
   {
   	 case 1:
        Temp_conversion();
        getch();
		break;
        
     case 2:
    	Currency_conversion();
    	getch();
    	break;
     case 3: 
        Number_Conversion();
        	getch();
        break;
     case 4:
	     return;
	     
     default:
		printf("Wrong Input >_<");
   }
}
}
int Temp_conversion()
{
    int select;
    float cel,farh,x;
    system("cls");
printf("\n\n\n");
printf("\n\t\t\t |Temperature Conversion\n");
printf("----------------------------------------------------------------------------------------------------------------------------\n");
printf("\t\t\t| Press 1. To convert C to F\n");
printf("\t\t\t| Press 2. To convert F to C\n");
printf("\t\t\t| Press 3. To Go Back\n");
scanf("%d",&select);
system("cls");
switch(select)
 {
 case 1:
  {
    printf("\t\t\t\t\t\tEnter temp in degree C :\n");
    scanf("%f",&cel);
    x=(cel * 9/5) + 32 ;
    printf("\t\t\t\t\t\tTemp %fC = %fF" ,cel,x);
    break;
  }
 case 2:
  {
     printf("\t\t\t\t\t\tEnter Temp in Degree F : \n");
     scanf("%f",&farh);
     x=(farh - 32) * 5/9 ;
     printf("\t\t\t\t\t\tTemp %fF =%fC",farh,x);
     break;
  } 
 case 3 :
    {
   start();
    }
 default: 
 printf("wrong input >_<");
 }
}

int Currency_conversion()
{
	int select;
	float x,INR,USD,AED;
	system("cls");
	printf("\t\t\tCurrency Conversion\n");
	printf("\t\t\tPress 1. INR to USD\n");
	printf("\t\t\tPress 2. INR to AED\n");
	printf("\t\t\tPress 3. USD to INR\n");
	printf("\t\t\tPress 4. AED to INR\n");
	printf("\t\t\tPress 5. Go Back");
	scanf("%d",&select);
	
	switch(select)
	{
	  case 1: 
	  {
	  	printf("\t\t\t\t\t\tEnter INR amount : ");
	  	scanf("%f",&INR);
	  	x=INR/79.396092;
	  	printf("\t\t\t\t\t\t%f Rs = %f USD",INR,x);
	  	break;
	  }	
		  
	  case 2: 
		{
		printf("\t\t\t\t\t\tEnter INR amount : ");
		scanf("%f",&INR);
		x=INR*0.0462475;
		printf("\t\t\t\t\t\t%f Rs = %f AED",INR,x);  	
		break;
		}
		
	   case 3:
	   	{
	   	  printf("\t\t\t\t\t\tEnter USD amount : ");
	   	  scanf("%f",&USD);
	   	  x= USD*79.4035;
	   	  printf("\t\t\t\t\t\t%f USD = %f INR",USD,x);
	   	  break;
	    }
	    case 4: 
	    {
	      printf("\t\t\t\t\t\tEnter AED amount :");
		  scanf("%f",&AED);
		  x= AED*21.6156;
		  printf("\t\t\t\t\t\t%f AED = %fINR",AED,x);
		  break;		
		}
		case 5:
			{
			start();
			}
			
	    default :
	    	printf("\t\t\t\t\t\tWrong Input >_<");
					
	}
}



int Number_Conversion()
{
	long int binaryval, hexadecimalval = 0, i = 1, remainder,count=0;
	int num, binary_num, decimal_num = 0, base = 1, rem,select;
	char hexNum[100];
	int a[10],n;    
	printf("\n\n\n\t\t\t| Press 1. Binary to Hexadecimal\n");
	printf("\t\t\t| Press 2. Binary to Decimal\n");
	printf("\t\t\t| Press 3. Hexadecimal to Binary\n");
	printf("\t\t\t| Press 4: Decimal to Binary\n");
	printf("\t\t\t| Press 5. Go Back\n");
	printf("\t\t\t| Enter Your Choice :");
	scanf("%d",&select);
	
	switch(select)
	{
	
    case 1:
    {
    	printf("\t\t\t\t\t\tEnter the binary number : ");
    	scanf("%ld", &binaryval);
    	while (binaryval != 0)
    	{
        remainder = binaryval % 10;
        hexadecimalval = hexadecimalval + remainder * i;
        i = i * 2;
        binaryval = binaryval / 10;
    	}
    	printf("\t\t\t\t\t\tEquivalent hexadecimal value: %lX", hexadecimalval);	
    	break;
    }
    case 2:
    {  
    printf ("\t\t\t\t\t\tEnter a binary number with the combination of 0s and 1s :");  
    scanf (" %d", &num); // accept the binary number (0s and 1s)  
  
    binary_num = num; // assign the binary number to the binary_num variable  
      
      
    while ( num > 0)  
    {  
        rem = num % 10; /* divide the binary number by 10 and store the remainder in rem variable. */  
        decimal_num = decimal_num + rem * base;  
        num = num / 10; // divide the number with quotient  
        base = base * 2;  
    }  
  
    printf ( " \t\t\t\t\t\tThe binary number is %d \t", binary_num); // print the binary number  
    printf (" \t\t\t\t\t\t\n The decimal number is %d \t", decimal_num); // print the decimal   
    break;
	}
	
	case 3:
	{
	    printf("\t\t\t\t\t\tEnter a hexadecimal number To Convet it into Binary : ");
	    scanf("%s",hexNum);
	    printf("\t\t\t\t\t\t\nBinary Number is : ");
	    while(hexNum[count])
	    {
		    switch(hexNum[count])
		    {
			case '0' : printf("0000");
				break;
			case '1' : printf("0001");
				break;
			case '2' : printf("0010");
				break;
			case '3' : printf("0011");
				break;
			case '4' : printf("0100");
				break;
			case '5' : printf("0101");
				break;
			case '6' : printf("0110");
				break;
			case '7' : printf("0111");
				break;
			case '8' : printf("1000");
				break;
			case '9' : printf("1001");
				break;
			case 'A' : printf("1010");
				break;
			case 'B' : printf("1011");
				break;
			case 'C' : printf("1100");
				break;
			case 'D' : printf("1101");
				break;
			case 'E' : printf("1110");
				break;
			case 'F' : printf("1111");
				break;
			case 'a' : printf("1010");
				break;
			case 'b' : printf("1011");
				break;
			case 'c' : printf("1100");
				break;
			case 'd' : printf("1101");
				break;
			case 'e' : printf("1110");
				break;
			case 'f' : printf("1111");
				break;
			default : printf("\n\t\t\t\t\t\tInvalid Entry, Please Try Again  %c",hexNum[count]);
		    }
		    count++;
        }
        break;   
	}
	
	case 4: 
	{   int k;
		system ("cls");  
		printf("\t\t\t\t\t\tEnter the number to convert: ");    
		scanf("%d",&n);    
		for(k=0;k>0;k++)    
		{    
		a[k]=n%2;    
		k=k/2;    
		}    
		printf("\n\t\t\t\t\t\tBinary of Given Number is=");    
		for(k=k-1;k>=0;k--)    
		{    
		printf("\t\t\t\t\t\t%d",a[k]);    
		} 
		break;   
	}
	
	case 5:
	{
	start();
	break;
    }
    
    default:
	printf("\t\t\t\t\t\tWrong Input >_<");
}
}


	
void main()
{
	printf("Enter full screen for better view");
printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tHello...This is Mukul Kumar Sah\n");
printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t I have done my LnB Project Task #829 - Unit Conversion System\n");
printf("------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    start();
    getch();
}



