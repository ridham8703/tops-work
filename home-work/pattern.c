// *     * * * * 
// *     *       
// *     *       
// * * * * * * * 
//       *     * 
//       *     * 
// * * * *     * 

#include<stdio.h>

int main() { 
    int num = 7;
    

    for(int row = 1; row <= num; row++) { 
        for(int col = 1; col <= num; col++) { 
            // for first row (row == 1)
            if(row == 1) { 
                if(col > (num / 2) || col == 1) //print star in first row where col is greaterthen 3.5 or col is equal 1
                    printf("* "); 
                else 
                    printf("  ");  
            } 
            else if(row == num) { // for last row 
                if(col <= (num / 2 + 1) || col == num) // print star in last row where col is lessthen 4.5 or col is equal 7
                    printf("* "); 
                else 
                    printf("  ");
            } 
            else if(row == (num + 1) / 2) // Check in the middle row is equal num + 1 /2
                printf("* "); 
            else if(row <= num / 2 && row != 1) { // upper middel row where row lessorequal num/2 but not 1st row 
                if(col == 1 || col == (num + 1) / 2) // Print stars in first and middle col
                    printf("* "); 
                else 
                    printf("  ");
            } 
            else { // for rows below the middle where row is greater number/2 
                if(col == num || col == (num + 1) / 2) //for last and mid col
                    printf("* "); 
                else 
                    printf("  ");
            } 
        }   
        printf("\n"); 
    } 
     
}   
