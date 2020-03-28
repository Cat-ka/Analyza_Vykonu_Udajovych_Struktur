#include <iostream>
#include <string>
#include <stdexcept>
#include <vector>


template <typename T>
class ArrayList {
public:
	ArrayList();
	~ArrayList();
	void show();
	void add(T& data);
	void resize();
private:
	ArrayList *array_;
	int size_;
	int position_;
	T* data;


};

template <typename T>
inline ArrayList<T>::ArrayList()
{
	array_ = new ArrayList<T>();
	size_ = 0;
}



template <typename T>
inline ArrayList<T>::~ArrayList()
{
}


template <typename T>
inline void ArrayList<T>::show()
{
	for (int i = 0; i < array_->size() - 1; i++)
	{
		std::cout << array_[i] << std::endl;
	}
}



template <typename T>
inline void ArrayList<T>::add(T& data)
{
	if (array_->size_() == size_)
	{
		resize();
	}
	(*array_)[static_cast<int>(size_++)] = data;
}


template <typename T>
inline void ArrayList<T>::resize()
{
	ArrayList* temp = new ArrayList[size_ * 2];
	for (int i = 0; i < size_; i++)
	{
		temp[i] = data[i];
	}

}

