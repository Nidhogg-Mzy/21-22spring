template<typename T, typename Sequence = deque<T> >
class queue
{
  protected:
    Sequence c; // Underlying container

  public:
    typedef typename Sequence::value_type        value_type;
    typedef typename Sequence::reference         reference;
    typedef typename Sequence::const_reference   const_reference;
    typedef typename Sequence::size_type         size_type;

    // (Default) Constructor
    explicit queue(const Sequence& _c = Sequence()) : c(_c) { }

    // Return true if the queue is empty 
    bool empty() const { return c.empty(); }

    // Return the number of elements in the queue
    size_type size() const { return c.size(); }

    // Return a R/W reference to the data at the first element of the queue
    reference front() { return c.front(); }

    // Read-only version of front()
    const_reference front() const { return c.front(); }

    // Return a R/W reference to the data at the last element of the queue
    reference back() { return c.back(); }

    // Read-only version of back()
    const_reference back() const { return c.back(); }

    // Create an element at the end of the queue and assigns x to it
    // i.e., enqueue
    void push(const value_type& x) { c.push_back(x); }

    //  It shrinks the queue by one. Note that no data is returned.
    // i.e., dequeue
    void pop() { c.pop_front(); }
};
