#include <iostream>
#include <assert.h>

using  namespace std;

typedef int TElement;

class Vector
{
	int cap;			//	int _capacity;
	int n;			//	int _size;
	TElement *els;	//	TElement* _elements

public:
	Vector()
	{
		cap = 10;
		els = new TElement[cap];
		n = 0;
	}

	~Vector()
	{
		delete [] els;
	}

	//copy constructor
	Vector(const Vector& v)
	{
		n = v.n;
		cap = v.cap;
		els = new TElement[cap];
		for(int i = 0; i < v.n; i++)
			els[i] = v.els[i];
	}

	//copy  (and no duplicated code !)
	Vector& operator = (const Vector& v)
	{
		Vector temp(v);
		swap(temp.n,n);
		swap(temp.cap,cap);
		swap(temp.els,els);
	}

	int getSize() const
	{ 
		// ...
	}

	// element access
	const TElement& getAt(int poz) const
	{
		// ...
	}

	void setAt(int poz, const TElement& el)
	{
		// ...
	}

	// adding/removing elements
	// insert
	void insert(int poz, const TElement& el)
	{
		assert((0 <=p oz ) && (poz <= n));
		if (n >= cap) 
			reserve();
		for(int i = n-1; i > poz; i--)
			els[i+1] = els[i];
		els[poz] = el;
		n++;
	}

	// remove
	void remove(int poz)
	{
		assert((0 <= poz) && (poz < n));
		for(int i = poz+1; i < n; i++)
			els[i-1] = els[i];
		n--;
	}

	void addLast(const TElement& el)
	{
		// ...
	}

	TElement& removeLast()
	{
		// ...
	}

	////////////////////////////////////////
	// other <collection specific> operations
	int isEmpty() const
	{
		// ...
	}

	void removeAll()
	{
		// ...
	}

	//bool isIn(){  // contains
	bool isIn(const TElement& el) const
	{
		// ...
	}

	int search(const TElement& el) const //find=> position or -1 if there is not in
	{
		// ...
	}

	//swap
	void swap(Vector& v)
	{
		//	...
	} 

private:
	void reserve()
	{
		TElement* newEls = new TElement[2*cap];
		for(int i = 0; i < n; i++)
			newEls[i] = els[i];
		delete [] els;
		els = newEls;
		cap = 2*cap;
	}
};

void printVector(const Vector& v)
{
	for(int i = 0; i < v.getSize(); i++)
		cout << v.getAt(i) << " ";
	cout << endl;
}

// ... 
int main()
{
	//...
}
