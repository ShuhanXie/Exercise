class intArray{
	private:
		int* dat;
		int size;
		int step;
		
		int rlsize;
		void init(int v);
		void mkArray(int si,int va,int st);
	
	public:
		intArray();
		intArray(int si);
		intArray(int si, int va);
		intArray(int si, int va, int st);

		// member functions
		void resize(int si);
		int getSize();
		void setStep(int st);
		int getStep();
		int getData(int index);
		void setData(int index, int va);
		void dump();
		void dumpALL();
};
class floatArray{
	private:
		float* dat;
		int size;
		int step;
		
		int rlsize;
		void init(float v);
		void mkArray(int si,float va,int st);
	
	public:
		floatArray();
		floatArray(int si);
		floatArray(int si, float va);
		floatArray(int si, float va, int st);

		// member functions
		void resize(int si);
		int getSize();
		void setStep(int st);
		int getStep();
		float getData(int index);
		void setData(int index, float va);
		void dump();
		void dumpALL();
};
