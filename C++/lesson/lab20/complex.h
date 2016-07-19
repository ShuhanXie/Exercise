class complex {
    
    protected:
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
        
};
