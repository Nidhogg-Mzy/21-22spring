/* File: stl-transform.h */
template <class Iterator1, class Iterator2, class Function>
Iterator2 transform(Iterator1 first, Iterator1 last,
                    Iterator2 result, Function g) 
{
    for ( ; first != last; ++first, ++result )
        *result = g(*first);

    return result;
}
