#include "../includes/PmergeMe.hpp"

int main(int argc, char **argv)
{
    std::vector<int>    vec;
    std::deque<int>     deq;

    if (argc < 2) {
        std::cerr << "Not enought parameters" << std::endl;
        return (-1);
    }

    clock_t	start, finish;
	double	timeDiff;

    start = clock();
    try {
        vec = Sort<std::vector <int>, std::vector<std::pair<int, int> > >(argv);
    }
    catch (std::exception& e) {
        std::cerr << "Error: only positive figures" << std::endl;
        return (-1);
    }
	finish = clock();
	timeDiff = ((double) (finish - start)) / CLOCKS_PER_SEC;
    try {
        isSort(vec);
    }
    catch (std::exception& e) {
        std::cout << "Error: vector is not sorted" << std::endl;
        return (-1);
    }
    printContainer(vec, "Vector");
    std::cout << "[Time to process a vector of " \
		<< std::fixed << timeDiff << "s]" << std::endl;



    start = clock();
    try {
        deq = Sort<std::deque<int>, std::deque<std::pair<int, int> > >(argv);
    }
    catch (std::exception& e) {
        std::cerr << "Error: only positive figures" << std::endl;
        return (-1);
    }
    finish = clock();
	timeDiff = ((double) (finish - start)) / CLOCKS_PER_SEC;
    try {
        isSort(deq);
    }
    catch (std::exception& e) {
        std::cout << "Error: deque is not sorted" << std::endl;
        return (-1);
    }
    printContainer(deq, "Deque");
    std::cout << "[Time to process a deque of " \
		<< std::fixed << timeDiff << "s]" << std::endl;
}