//template <typename T>
using namespace std;
struct Vector2
{
    double x, y;
    Vector2& operator+=(Vector2 const& a){
        x+=a.x; y+=a.y;
        return *this;
    }
    Vector2& operator-=(Vector2 const& a){
        x-=a.x; y-=a.y;
        return *this;
    }
    Vector2& operator*=(double const&a){
        x*=a; y*=a;
        return *this;
    }
    Vector2& operator/=(double const& a){
        x/=a; y/=a;
        return *this;
    }
};
    Vector2 operator+(Vector2 const& a, Vector2 const& b){
        return Vector2{a.x+b.x, a.y+b.y};
    }
    Vector2 operator-(Vector2 const& a, Vector2 const& b){
        return Vector2{a.x-b.x, a.y-b.y};
    }
    Vector2 operator*(Vector2 const& a, double const& b){
        return Vector2{a.x*b, a.y*b};
    }
    Vector2 operator*(double const& b, Vector2 const& a){
        return Vector2{b*a.x, b*a.y};
    }
    Vector2 operator/(Vector2 const& a, double const& b){
        return Vector2{a.x/b, a.y/b};
    }
    double dot(Vector2 const& a, Vector2 const& b){ //skalarszorzat
        return a.x*b.x+a.y*b.y;
    }
    double length(Vector2 const& a){ //hossz
        return sqrt(a.x*a.x+a.y*a.y);
    }
    Vector2 normalize(Vector2 const& a){
        return Vector2{a.x/length(a), a.y/length(a)};
    }
    ostream& operator << (ostream& o, Vector2 const& v){
        o << v.x << "   " << v.y << endl;;
        return o;
    }
    istream& operator>>(istream& i, Vector2& v){
        i >> v.x;
        i >> v.y;
        return i;
    }