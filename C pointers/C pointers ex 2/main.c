/*
 * main.c
 *
 *  Created on: Mar 20, 2024
 *      Author: ahmed
 */

int main() {
	char arr[27];
	char*ptr;
	ptr=arr;
	for (int i=0;i<26;i++)
	{
		*ptr=i+'A';
		ptr++;
	}
	ptr=arr;
	for (int i=0;i<26;i++)
		{
			printf("%c\t",*ptr);
			ptr++;
		}
}
