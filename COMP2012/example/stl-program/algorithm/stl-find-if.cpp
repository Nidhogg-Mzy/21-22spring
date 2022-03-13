template <class Iterator, class Predicate> /* File: stl-find-if.cpp */
Iterator find_if(Iterator first, Iterator last, Predicate predicate) 
{
    while (first != last && !predicate(*first)) 
        ++first;

    return first;
}
