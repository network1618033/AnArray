/*******************************************************************
 *
 * Programmeur  :   Jonathan ZOGONA
 * Date         :   13 Décembre 2019
 *
 * But          :	Créer une classe AnArray
 * Fichier		:	AnArray.h
 *
 *******************************************************************/

template<class T>
class AnArray  
{
private:
	int	mSize;
	T x[50];
public:
	AnArray();
	~AnArray();

	int getSize() const;
	T getAt(int idx);
	bool removeAt(int idx);
	bool insertAt(const T& c, int idx);
	bool add(const T& c);
};
 

template<class T>
AnArray<T>::AnArray()
	:mSize(0)
{   }

template<class T>
AnArray<T>::~AnArray()
{   }

template<class T>
bool AnArray<T>::add(const T& c)
{
	x[mSize] = c;
	mSize++;
	return true;
}

template<class T>
bool AnArray<T>::insertAt(const T& c, int idx)
{
	if (mSize >= 50)
		return false;          // full
	if (idx < 0 || idx > mSize)
		return false;          // illegal idx
	for (int i = mSize - 1; i >= idx; i--)
		x[i + 1] = x[i];         // shift up

	x[idx] = c;              // insert
	mSize++;
	return true;
}

template<class T>
bool AnArray<T>::removeAt(int idx)
{
	if (idx < 0 || idx >= mSize)
		return false;    // illegal idx
	for (int i = idx; i < mSize - 1; i++)
		x[i] = x[i + 1];
	mSize--;
	return true;
}

template<class T>
T AnArray<T>::getAt(int idx)
{
	return x[idx];
}

template<class T>
int AnArray<T>::getSize() const
{
	return mSize;
}