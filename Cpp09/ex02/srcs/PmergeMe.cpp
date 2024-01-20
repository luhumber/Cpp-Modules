#include "../includes/PmergeMe.hpp"

void checkArg(const std::string& arg)
{
    for (std::size_t i = 0; i < arg.size(); ++i) {
        if (!isdigit(arg[i]))
            throw std::exception();
    }

    char* endptr;
    long i = strtol(arg.c_str(), &endptr, 10);

    if (*endptr != '\0' || i < 0)
        throw std::exception();
}

int getTime(struct timeval startTime)
{
    int             time;
    struct timeval  tv;

    // Stocke l'heure actuelle dans struct tv
    if (gettimeofday(&tv, NULL) < 0)
        return (-1);

    // Calcule temps écoulé (ms) depuis startTime
    time = (tv.tv_sec - startTime.tv_sec) * 1000000 + (tv.tv_usec - startTime.tv_usec);

    return (time);
}

int calculatePowerOfTwo(int n)
{
    return (static_cast<int>(std::pow(2, n + 1)));
}

int generateSequenceTerm(int n, int prev)
{
	int nb = 0;
	int power = calculatePowerOfTwo(n);
	if (n == 0) 
		return (2);
	nb = power - prev;
	return (nb);
}
