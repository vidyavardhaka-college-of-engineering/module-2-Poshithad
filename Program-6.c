//INPUT -3 1 2 3
//OUTPUT- Total number of even numbers and odd numbers in the array are 1 and 2
#include <stdio.h>
//INSERT THE MISSING CODE 

int main()
{
    int arr[10];
    int i, num, evennum, oddnum;

    // Reads size and elements in array
   
    scanf("%d",&num);
    //printf("Enter %d elements in array: ", num);
        //printf("Enter the elements");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);//missing code
    }

    evennum = 0; // Assuming 0 even numbers
    oddnum  = 0; // Assuming 0 odd numbers

    for(i=0; i<num; i++)
    {
        /* If the current element of array is evennumber then increment evennumber count */
        if(arr[i]%2 == 0) //missing code
        {
            evennum++;
        }
        else
        {
            oddnum++; // increment oddnumber count
        }
}
printf("Total number of even numbers and odd numbers in the array are %d and %d",evennum,oddnum  );//missing code
//printf("Total number of odd numbers in the array : %d\n",   );//missing code

return(0);    
}
