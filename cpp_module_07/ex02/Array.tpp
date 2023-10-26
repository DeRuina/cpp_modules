template <typename T>
Array<T>::Array() : arrSize(0), arr(NULL)
{
}
template <typename T>
Array<T>::Array(unsigned int n) : arrSize(n), arr(new T[n])
{
}
template <typename T>
Array<T>::Array(const Array &copy) : arrSize(copy.arrSize), arr(new T[copy.arrSize])
{
  for (int i = 0; i < copy.arrSize; i++)
    this->arr[i] = copy.arr[i];
}
template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
  int size = src.size();
  delete [] this->arr;
  this->arr = new T[size];
  for (int i = 0; i < size; i++)
    this->arr[i] = src.arr[i];
  return (*this);
}

template <typename T>
Array<T>::~Array()
{
  delete [] this->arr;
}
template <typename T>
T &Array<T>::operator[](int index)
{
  if (index < 0 || index >= this->arrSize)
    throw std::exception();
  return (this->arr[index]);
}

template <typename T>
int Array<T>::size()
{
  return (this->arrSize);
}

