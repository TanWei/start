//#pragma once

struct sparent
{
    /* data */
    virtual ~sparent() {}
    int pdata;
};

struct schild : sparent
{
    /* data */
    //int getpp() {return 1;}
    int cdata;
};
// class Point 
// {
//     public: Point( float xval );
//     virtual ~Point(); float x() const;
//     static int PointCount();
//     protected: virtual ostream& print( ostream &os ) const; float _x;
//     static int _point_count; 
// };
