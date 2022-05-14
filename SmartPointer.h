#ifndef _SMART_POINTER__
#define _SMART_POINTER__
template <typename type>
class SmartPointer
{
public:
    typedef type *Pointer_type;
    SmartPointer(type *ptr = nullptr) : pointer(ptr) {}
    type &operator*() { return *pointer; }
    Pointer_type operator->() { return pointer; }
    Pointer_type &operator++()
    {
        ++pointer;
        return pointer;
    }
    Pointer_type operator++(int)
    {
        Pointer_type tmp = pointer;
        pointer++;
        return tmp;
    }
    ~SmartPointer()
    {
        delete pointer;
    }

private:
    type *pointer;
};

#endif