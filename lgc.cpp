#include <cstdio>
#include <cstdlib>
#include <vector>
#include <map>

void freq_table(std::vector<unsigned int> nums, unsigned int n);

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

	printf("...............Generated numbers............\n");
	for(int i = X0; i < n; ++i)
	{
		printf("%3u\t", X0);
		if(!(i%5)) printf("\n");
		X0 = (a * X0 + b) % n;
		numbers.push_back(X0);
		
	}
	printf("\n");

	freq_table(numbers, n);

	return EXIT_SUCCESS;
}

void freq_table(std::vector<unsigned int> nums, unsigned int n)
{
	std::map<unsigned int, unsigned int> freqmap;

	for(auto& i : nums)
	{
		freqmap[i] = freqmap[i] + 1;
	}

	printf("...........Displaying frequencies...........\n");
	for(unsigned int i = 0; i < n; ++i)
	{
		printf("%3u: %u\t", i, freqmap[i]); 
		if(!(i%5)) printf("\n");
	}

	printf("\n");

}


