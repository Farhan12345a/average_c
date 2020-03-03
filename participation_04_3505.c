
//Farhan Shahbaz

//Madison



#include <stdio.h>




int main()
{

    int sum = 0;

    int numbers = 0;

    printf("Please enter 10 numbers\n");

    for(int i = 0; i < 10; i++){

        scanf("%d", &numbers);

        sum += numbers;
    
}
    
    
	printf("Sum : %d\n", sum);

    	float ab = average(sum);	
	
printf("Average of the numbers: %.2f", ab);
	
return 0;
    

}



//float return type is NOT WORKING FOR SOME REASON

int average(int a){

    float ave = a/10.0;

    //printf("%d")
    return ave;

}
