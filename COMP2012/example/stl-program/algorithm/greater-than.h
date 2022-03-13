// File "greater_than.h" /* File: greater-than.h */
class Greater_Than 
{
  private:
    int limit;
  public:
    Greater_Than(int a) : limit(a) { }
    bool operator()(int value) { return value > limit; }
};
