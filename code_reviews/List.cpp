#include "Object.h"

/* List to contain Objects, which are a generic interface with many subclasses
     e.g. Integer, String
     Available methods are getHash() and equals() */
class List {
public:
    List() {
        List(DEFAULT_CAPACITY);
    }

    List(int capacity) : capacity(capacity), size(0) {
        array = new Object[capacity];
    }

    void add(Object o) {
        if (capacity == size) {
            Object *temp = new Object[capacity *= 2];
            for (int i = 0; i < size; i++)
                temp[i] = array[i];
            array = temp;
        }

        array[size++] = o;
    }

    bool remove(Object o) {
        for (int i = 0; i < size; i++) {
            if (o.equals(array[i])) {
                size--;
                for (int j = i; j < size; j++)
                    array[j] = array[j + 1];
                return true;
            }
        }

        return false;
    }

    Object get(int index) {
        if (index < size)
            return array[index];
        return NULL;
    }

    int getSize() {
        return size;
    }

private:
    static const int DEFAULT_CAPACITY = 10;

    int capacity;
    int size;
    Object *array;
};
