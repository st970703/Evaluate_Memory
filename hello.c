#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

char bye[] = "Goodbye world.";
int unused;

void numbers() {
	int i;
	for (i = 0; i < 10; ++i) {
		printf("%d ", i);
	}
}

int main(void) {
	pid_t pid;
	char mem[64];
	puts("Hello rshe001!");
	numbers();
	pid = getpid();
	sprintf(mem, "cat /proc/%d/maps", pid);
	system(mem);
	puts(bye);
	return 0;
}