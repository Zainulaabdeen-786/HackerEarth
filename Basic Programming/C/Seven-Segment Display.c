/*Problem
You all must have seen a seven segment display.If not here it is:
Alice got a number written in seven segment format where each segment was creatted used a matchstick.
Example: If Alice gets a number 123 so basically Alice used 12 matchsticks for this number.
Alice is wondering what is the numerically largest value that she can generate by using at most the matchsticks that she currently possess.Help Alice out by telling her that number.

Input Format:
  First line contains T (test cases).
  Next T lines contain a Number N.
Output Format:
  Print the largest possible number numerically that can be generated using at max that many number of matchsticks which was used to generate N.
Constraints:
  1 <= T <=100
  1 <= length(N) <=100

Sample Input
2
1
0
Sample Output
1
111
Explanation
If you have 1 as your number that means you have 2 match sticks.You can generate 1 using this.
If you have 0 as your number that means you have 6 match sticks.You can generate 111 using this.      */

#include <stdio.h>
#include <string.h>

int main(){
	int T; scanf("%d", &T);		//no. of test cases
	char n[101];	// 1<= length(n) <=100
	int nums[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};	//no. of matchsticks for nums 0-9
	for(int i=1; i<=T; i++){
		scanf("%s", n);		//number given
		int matchsticks = 0;
		for(int j=0; j<strlen(n); j++){
			matchsticks += nums[n[j] - 48];		//'1' - 48 == 1
		}
		if (matchsticks % 2 == 0){
			for(int j=1; j<=matchsticks/2; j++)
				printf("1");
		}else{
			printf("7");
			for(int j=1; j<matchsticks/2; j++)
				printf("1");
		}
		printf("\n");
	}
	return 0;
}
