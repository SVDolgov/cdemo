#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s n [s]\n", argv[0]);
	}
	int n = atoi(argv[1]);
	if (argc > 2) {
		srand(atoi(argv[2]));
	}
	while (n-- > 0) {
		printf("%i\n", rand());
	}
	return 0;
}
