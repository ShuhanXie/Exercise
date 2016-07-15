class complex {
    
    private:
        double real;
        double img;
    
    public:
        
        // constructors
        //
        complex();      
        complex(double r, double i);
        
        // copy constructor
        complex(const complex &c);
        
        // access functions; interface
        //
        void setR(double r);
        void setI(double i);
        
        void show();    
        
        // + - * /
        complex add(const complex &c);
        complex sub(const complex &c);
        complex mul(const complex &c);
        complex div(const complex &c);
        complex add(double x);
        complex sub(double x);
        complex mul(double x);
        complex div(double x);
        
        // according to the main.cpp to add
        // required function members here!!!
        
};
