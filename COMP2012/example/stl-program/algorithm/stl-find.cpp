template <class Iterator, class T> /* File: stl-find.cpp */
Iterator find(Iterator first, Iterator last, const T& value) 
{
    while (first != last && *first != value)
        ++first;

    return first;
}
