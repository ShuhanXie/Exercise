class complex{
	
	private:
		double real;
		double img;
		
	public:
		
		void show();    
		complex();
        complex(const complex &c);
        complex(double r, double i);
        
        
        // overloading + - * /
        complex add(const complex &c);
        complex sub(const complex &c);
        complex mul(const complex &c);
        complex div(const complex &c);
        complex add(double x);
        complex sub(double x);
        complex mul(double x);
        complex div(double x);

		// operator +-*/
		complex operator+(const complex& b);
		complex operator-(const complex& b);
		complex operator*(const complex& b);
		complex operator/(const complex& b);
		complex operator+(const double r);
	    complex operator-(const double r);
		complex operator*(const double r);
		complex operator/(const double r);
};


