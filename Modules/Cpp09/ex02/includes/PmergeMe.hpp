#ifndef PMERGEME_HPP
#define PMERGEME_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <deque>
# include <vector>
# include <cstdlib>
# include <ctime>
# include <sys/time.h>
# include <utility>
# include <iterator>
# include <algorithm>
# include <cmath>

void                checkArg(const std::string& arg);
int                 getTime(struct timeval startTime);
int                 calculatePowerOfTwo(int n);
int                 generateSequenceTerm(int n, int prev);

#include "PmergeMe.tpp"

#endif