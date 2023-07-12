#include <iostream>

class vector1{
	public:
	float x;
	float y;

	vector1(float x, float y):x{x},y{y}{
		
	}
        /*vector1 Add(const vector1 &other) const{

		return vector1(x+other.x,y+other.y);
	}*/
	vector1 operator + (const vector1 &other) const{

                return vector1(x+other.x,y+other.y);
        }


       /*vector1 mul(const vector1 &other) const{

                return vector1(x*other.x,y*other.y);
        }*/
	vector1 operator * (const vector1 &other) const{

                return vector1(x*other.x,y*other.y);
        }


};

int main() {
	vector1 position(2.0f, 2.0f);
	vector1 speed(8.0f,9.0f);
	//vector1 res = position.Add(speed);
	vector1 increase(2.0f, 5.0f);
        //vector1 res1 = position.Add(speed.mul(increase));
	vector1 res = position + speed * increase;
	std::cout<<res.x<<" " <<res.y<<std::endl;
	return 0;
}

