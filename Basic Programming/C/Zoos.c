/*Problem
You are required to enter a word that consists of x and y that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if 2*x = y.
Determine if the entered word is similar to word zoo.
For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.
Input format
First line: A word that starts with several Zs and continues by several Os.
Note: The maximum length of this word must be 20.
Output format
Print Yes if the input word can be considered as the string zoo otherwise, print No.

Sample Input
zzzoooooo
Sample Output
Yes      */

#include <stdio.h>
int main(){
	char s[21];
	int x=0,y=0;
	scanf("%s",s); 
    for(int i=0;i<20;i++){
		if (s[i]=='z')
			x++;
		else if (s[i]=='o')
			y++;
	}
	if (2*x==y)
		printf("Yes");
	else
		printf("No");
	return 0;
}
