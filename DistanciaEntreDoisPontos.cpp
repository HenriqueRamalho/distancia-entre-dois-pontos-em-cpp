// Calculo da distancia entre dois pontos usando geometria analitca
#include <iostream>

struct Ponto
{
	int _x;
	int _y;
	Ponto() {
		_x = 0;
		_y = 0;
	}
	Ponto(int x, int y) {
		_x = x;
		_y = y;
	}
};

class Distancia
{
private:
	Ponto _p1;
	Ponto _p2;
public:
	Distancia(Ponto p1, Ponto p2) {
		setDados(p1, p2);
	}
	void setDados(Ponto p1, Ponto p2) {
		_p1 = p1;
		_p2 = p2;
	}
	double getDistancia() {
		double somaDoQuadradoDosCatetos = pow(std::abs(_p1._x - _p2._x), 2) + pow(std::abs(_p1._y - _p2._y), 2);
		return sqrt(somaDoQuadradoDosCatetos);
	}
};


int main()
{
	Ponto p1(4, 1);
	Ponto p2(1, 3);
	Distancia dist(p1, p2);

	std::cout << "Distancia entre os pontos p1(4,1) e p2(1,3): " << dist.getDistancia() << std::endl;

	return 0;
}

