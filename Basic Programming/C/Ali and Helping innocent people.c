/*Problem
Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.
We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.

Input Format
    The first line contains a string of length 9. The format is "DDXDDD-DD", where D stands for a digit (non zero) and X is an uppercase english letter.
Output Format
    Print "valid" (without quotes) if the tag is valid, print "invalid" otherwise (without quotes)

Sample Input
    12X345-67
Sample Output
    invalid
Explanation
The tag is invalid because the sum of first and second digit of it is odd (also the sum of 4'th and 5'th, 5'th and 6'th and 8'th and 9'th are odd).          */

#include <stdio.h>

int sum_is_even(char *s){
	if((s[0]+s[1])%2 == 0 && (s[3]+s[4])%2 == 0 && (s[4]+s[5])%2 == 0 && (s[7]+s[8])%2 == 0)
		return 1;
	return 0;
}
int not_a_vowel(char *s){
	if(s[2]=='A' || s[2]=='E' || s[2]=='I' || s[2]=='O' || s[2]=='U' || s[2]=='Y')
		return 0;
	return 1;
}

int main(){
	char tag[10];
	scanf("%s", tag);
	if(sum_is_even(tag) && not_a_vowel(tag))	printf("valid");
	else	printf("invalid");
	return 0;
}