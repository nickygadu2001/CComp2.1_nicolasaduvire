#ifndef __DYNAMICPOINTARRAY_H__
#define __DYNAMICPOINTARRAY_H__

class DynamicpointArray {
        int size;
        int *data;
    public:
        DynamicpointArray();
        DynamicpointArray(const int arr[], int size);
        DynamicpointArray(const DynamicpointArray &o);

        int getSize() const;
        void print() const;

        void push_back(int elem);
        void insert(int elem, int pos);
        void remove(int pos);

        ~DynamicpointArray();
};

#endif
