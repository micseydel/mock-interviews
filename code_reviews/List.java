class List
{
    public static final int DEFAULT_SIZE = 10;

    private Object[] array;
    private int mySize;

    public List()
    {
        this(DEFAULT_SIZE);
    }

    public List(int size)
    {
        array = new Object[size];
        mySize = 0;
    }

    public void add(Object o)
    {
        if (mySize == array.length)
        {
            Object[] temp = new Object[array.length * 2];
            for (int i = 0; i < array.length; i++)
            {
                temp[i] = array[i];
            }
            array = temp;
        }

        array[mySize++] = o;
    }

    public boolean remove(Object o)
    {
        for (int i = 0; i < mySize; i++)
        {
            if (array[i].equals(o))
            {
                mySize--;
                for (int j = i; i < mySize; i++)
                {
                    array[j] = array[j + 1];
                }
                return true;
            }
        }

        return false;
    }

    public Object get(int index)
    {
        if (index < mySize)
        {
            return array[index];
        }
        return null;
    }

    public int size()
    {
        return array.length;
    }
}