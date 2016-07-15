// ------------------------------------------
// box.h
// ------------------------------------------
class Box
{
   private:
      double length;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

   public:
      // Member functions declaration
      double getVolume(void);      
      // interface methods
      void setLength( double len );
      void setBreadth( double bre );
      void setHeight( double hei );
};
