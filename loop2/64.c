/*
 	 *     *
 	* *   * *
       * * * * * *
       * * * * * *
        * * * * *
         * * * *
          * * *
           * *
            *
            */
            
            #include<stdio.h>
            int main ()
	    {
	     int i, j, n,s;
	     scanf("%d",&n);
for (int i = s / 2; i <= s; i += 2) {
        for (int j = 1; j < s - i; j += 2) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        for (int j = 1; j <= s - i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
    }
    
