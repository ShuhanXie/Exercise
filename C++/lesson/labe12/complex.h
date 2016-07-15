class complex {
    
    private:
        double real;
        double img;
    
    public:
        
        complex(double r, double i);
        complex(const complex &c);
        complex();
        void setR(double r);       
        void setI(double i);      
        void show();        
};
