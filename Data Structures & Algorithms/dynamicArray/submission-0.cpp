class DynamicArray {
public:
int* a;
int cap;
int size;

    DynamicArray(int capacity) {
        a = new int[capacity];
        cap = capacity;
        size = 0;
    }

    int get(int i) {
        return a[i];
    }

    void set(int i, int n) {
        a[i] = n;
    }

    void pushback(int n) {
        if (cap <= size) {
            resize();
        }

        ++size;
        a[size-1] = n;
    }

    int popback() {
        --size;
        return a[size];
    }

    void resize() {
        cap *= 2;

        int* b = new int[cap];
        for(int i = 0; i < size; ++i) {
            b[i] = a[i];
        }
        a = b;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return cap;
    }
};
