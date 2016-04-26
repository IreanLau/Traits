#pragma once


template<class T>
class Func
{
public:

	typedef T ElementType;
};

template<>
class Func<char>
{
public:

	typedef short ElementType;
};

template<>
class Func<short>
{
public:

	typedef int ElementType;
};

template<>
class Func<int>
{
public:
	typedef double ElementType;
};





template<class T>
typename Func<T>::ElementType Sum(const T* ar,size_t size)
{
	Func<T>::ElementType res=0;
	for (size_t i = 0; i < size; ++i)
		res += ar[i];
	return res;
}


void TestTraits()
{
	char ar[40] = "zxfnpovzcvmfxgjghjhdfjxvxbcn";
	cout << Sum(ar, 28) << endl;
}