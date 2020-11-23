#include <stdio.h>
#include <string.h>

int main() {
	int hh, mm;
	char tt[3];
	scanf("%d:%d %s", &hh, &mm, tt);
	if(strcmp(tt, "PM") == 0 && hh != 12) hh += 12;
	if(strcmp(tt, "AM") == 0 && hh == 12) hh = 0;
	printf("%.2d:%.2d", hh, mm);
	return 0;
}
