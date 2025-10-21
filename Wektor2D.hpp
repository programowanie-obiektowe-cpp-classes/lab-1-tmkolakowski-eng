class Wektor2D
{
public:
    void   setX(double x_in) { x = x_in; }
    void   setY(double y_in) { y = y_in; }
    double getX() { return x; }
    double getY() { return y; }
    void   print() { std::println("Vektor ma wspolrzedne [{},{}]", x, y); }
    double norm() { return sqrt((x * x) + (y * y)); }
    

private:
    double x = 0;
    double y = 0;
};
Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    Wektor2D result;
    result.setX(v1.getX() + v2.getX());
    result.setY(v1.getY() + v2.getY());
    return result;
}
double operator*(Wektor2D v1, Wektor2D v2)
{
    return (v1.getX() * v2.getX() + v1.getY() * v2.getY());
}
