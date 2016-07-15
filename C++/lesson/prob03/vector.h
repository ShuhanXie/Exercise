const int MAX = 100;
class vector {
private:
	int dat[MAX];
	int size;

public:
	vector();
	vector(int d[], int s);
	vector(const vector & v);

	void set(int index, int v);

	int get(int index);

	void resize(int s);

	void dump();

};

