template <typename T>     /* File: array-op=.h */
Array<T>& Array<T>::operator=(const Array<T>& a) // Deep copy
{
    if (&a != this)       // Avoid self-assignment: e.g., a = a
    {
        cout << "\nop= is called ... " << endl;
        
        delete [] _value;              // First remove the old data
        _size = a._size;
        _value = new T [_size];        // Re-allocate memory 

        for (int j = 0; j <_size; ++j) // Copy the new data
            _value[j] = a[j];
    }

    return (*this);
}
