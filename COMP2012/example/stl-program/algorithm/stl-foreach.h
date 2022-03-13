/* File: stl-foreach.h */
template <class Iterator, class Function>
Function for_each(Iterator first, Iterator last, Function g) 
{
    for ( ; first != last; ++first )
        g(*first);

    return g; // Returning the input function!
}
