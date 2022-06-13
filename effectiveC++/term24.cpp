/*
 *  若所有参数都需类型转换，请为此采用非成员函数
 *
 *  但不一定非要采用友元函数。
 *
 */



class Rational {
public:
    Rational(int n = 0, int d = 1) : numerator(n), denominator(d) {}
    Rational operator*(const Rational& r) const {
        return Rational(numerator * r.numerator, denominator * r.denominator);
    }
private:
    int numerator, denominator;
};

//r2 = r1 * 2;    //  r1.operator*(2)
//r2 = 2 * r1;    // error! 2.operator*(r1)



class Rational1 {
public:
    Rational1(int n = 0, int d = 1) : numerator(n), denominator(d) {}

private:
    int numerator, denominator;
};

const Rational1 operator*(const Rational1& r1, const Rational1& r2) {
    return r1 * r2;
}


//int main() {
//    Rational r1(1, 2);
//    Rational r2;
//    Rational1 r11(1, 2);
//    Rational1 r21;
//    r21 = r11 * 2;
//    r21 = 2 * r11;
//
//    return 0;
//}