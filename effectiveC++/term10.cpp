/*
 *
 *   令operator= 返回一个reference to *this
 *
 *
 *
 *
 */


class example {
public:

    example& operator= (const example& rhs) {
        if (this != &rhs) {
            // do something
        }
        return *this;
    }

};

