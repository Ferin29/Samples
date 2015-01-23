#include <iterator>
#include <algorithm>

template <class InputIterator, class T>
	   typename iterator_traits<InputIterator>::difference_type
count <ForwardIterator first, ForwarsIterator last, const T& value);
//Usage :
std::vector <int> Myvect;
std::count(myVext.begin(), Myvect.end(), 2);