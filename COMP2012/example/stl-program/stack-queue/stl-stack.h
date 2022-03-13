template<typename T, typename Sequence = deque<T> >
class stack
{
  protected:
    Sequence c; // Underlying container

  public:
    typedef typename Sequence::value_type        value_type;
    typedef typename Sequence::reference         reference;
    typedef typename Sequence::const_reference   const_reference;
    typedef typename Sequence::size_type         size_type;

    // (Default) Constructor
    explicit stack(const Sequence& _c = Sequence()) : c(_c) { }

    // Return true if the stack is empty
    bool empty() const { return c.empty(); }

    // Return the number of elements in the stack
    size_type size() const { return c.size(); }

    // Return a R/W reference to the data at the first element
    reference top() { return c.back(); }

    // Read-only version of top()
    const_reference top() const { return c.back(); }

    // Create an element at the top of the stack and assign x to it
    void push(const value_type& x) { c.push_back(x); }

    // Shrink the stack by one. Note that no data is returned.
    void pop() { c.pop_back(); }
};
