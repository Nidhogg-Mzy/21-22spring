typedef int* Int_Iterator; /* File: find-int-iterator.cpp */

/* Actually this find function is already defined in STL */
Int_Iterator
find(Int_Iterator begin, Int_Iterator end, const int& value)
{
    while (begin != end && *begin != value)
        ++begin;

    return begin;
}
