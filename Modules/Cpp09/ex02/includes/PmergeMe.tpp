#include "PmergeMe.hpp"
#include "utils.tpp"

template <typename T>
T   Merge(T& container)
{
	T   ret;
	T   container1;
	T   container2;

	splitContainer(container, container1, container2);
	if (!(container1.size() < 2 && container2.size() < 2)) 
	{
		container1 = Merge(container1);
		container2 = Merge(container2);
	}
   	std::merge(container1.begin(), container1.end(), container2.begin(), container2.end(), std::back_inserter(ret));
	return (ret);
}

template <typename T>
T Insert(T& contMin)
{
	T ret;
	
	size_t n = 0;
	int nb = 2;
	int prev = 0;
	size_t check = 0;
	while (n < contMin.size())
	{
		prev = nb;
		nb = 0;
		nb = generateSequenceTerm(n, prev);
        while (check + nb > contMin.size())
            nb--;
		ret.push_back(nb);
		check += nb;
		n++;
		if (check >= contMin.size())
			break ;
	}
	return (ret);
}

template <typename T>
T   IndexContainer(T& contMin, T& suite)
{
    T   res = contMin;
    int index = 0;

    typename T::iterator it;
    for (it = suite.begin(); it != suite.end(); ++it) {
        int size = *it;
        for (int i = 0; i < size; ++i) {
            res[index + i] = index + *it - i - 1;
        }
        index += size;
    }
    return (res);
}

template <typename T>
void insertSmallestInLargest(const T& smallest, T& largest, T& index) 
{
	for (int i = 0; i < static_cast<int>(index.size()); ++i) {
		if (index[i] < static_cast<int>(largest.size())) 
		{
			typename T::iterator it = std::lower_bound(largest.begin(), largest.end(), smallest[i]);
			largest.insert(it, smallest[i]);
		}
	}
}

template <typename T, typename U>
T   Sort(char **args)
{
    U   contPair;
    T   contMax;
    T   contMin;
    T   suite;
    T   index;

    if (!args[2]) {
        T   ret;

        checkArg(args[1]);
        ret.push_back(std::atoi(args[1]));
        return (ret);
    }

    contPair = fillContainerPairs<U>(args);
    contPair = Merge(contPair);
    splitPairs(contPair, contMax, contMin);
    contMax.insert(contMax.begin(), contMin[0]);
	if (!contMin.empty()) 
		contMin.erase(contMin.begin());
    suite = Insert(contMin);
    index = IndexContainer(contMin, suite);
    insertSmallestInLargest(contMin, contMax, index);
    if (contMax[0] == -1)
        contMax.erase(contMax.begin());
    return (contMax);
}
