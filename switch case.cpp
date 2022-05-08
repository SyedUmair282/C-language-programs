#include<stdio.h>
#include<conio.h>
int main()
{
	char grade;
	printf("Enter your grade: ");
	scanf("%c",&grade);
	switch(grade)
	{
	case'A':
	printf("YOUR GRADE IS A \n");
	printf("REMARKS: EXCELLENT");
	break;
	case'B':
	printf("YOUR GRADE IS B \n");
	printf("REMARKS: WELDONE");
	break;
	case'C':
	printf("YOUR GRADE IS C \n");
	printf("REMARKS: PASSED");
	break;
	case'D':
	printf("YOUR GRADE IS D \n");
	printf("REMARKS: PROMOTED");
	break;
	case'E':
	printf("YOUR GRADE IS E \n");
	printf("REMARKS: FAILED");
	break;
	default:
	{
		printf("BRING YOUR PARENTS TOMORROW");
	}
	} 
	getch();
	
}
/*int main()
{
	char alphabet;
	printf("Enter the alphabet \n");
	scanf("%c",&alphabet);
	
	switch(alphabet)
	{
		case'a':
		printf("It is vowel");
		break;
		case'e':
		printf("It is vowel");
		break;
		case'i':
		printf("It is vowel");
		break;
		case'o':
		printf("It is vowel");
		break;
		case'u':
		printf("It is vowel");
		break;
		default:
		{
			printf("It is consonant");
		}
	}

}*/
