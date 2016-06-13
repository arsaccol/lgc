#include <cstdio>
#include <cstdlib>
#include <vector>


int main(int argc, char** argv)
{
	if(argc != 5)
	{
		printf("Incorrect arguments\n");
		printf("Usage: ./lgc <X0 n a b>\n");
		return EXIT_FAILURE;
	}

	unsigned int X0, n, a, b;	
	std::vector<unsigned int> numbers;
	X0 =	atoi(argv[1]);
	n =	atoi(argv[2]);
	a =	atoi(argv[3]);
	b =	atoi(argv[4]);
	printf("------------Input entered------------ \n");
	printf("X0: %u, n: %u, a: %u, b: %u\n", \
	X0, n, a, b);	
	
	
}
