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
        
        // according to the main.cpp to add
        // required function members here!!!
        
};
