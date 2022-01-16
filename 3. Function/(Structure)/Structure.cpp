#include <stdio.h>
#include <string.h>

struct Student{char name[20]; int math,english; };

int main(){
	Student s1;
	strcpy(s1.name,"Jhon");
	s1.math=90;
	s1.english=95;
	printf("%s\n", s1.name);
	printf("%d\n", s1.math);
	printf("%d\n", s1.english);
	return 0;
}
