template <typename T>   /* File: array-constructors.h */
Array<T>::Array(int n) : _value( new T [n] ), _size(n) { }

template <typename T> Array<T>::Array(const Array<T>& a)
    : Array(a._size)   // Delegating constructor
{
    for (int i = 0; i < _size; ++i)
        _value[i] = a._value[i];
}

template <typename T> Array<T>::~Array() { delete [] _value; }

template <typename T> void Array<T>::init(const T& k)
{
    for (int i = 0; i < _size; ++i)
        _value[i] = k;
}
