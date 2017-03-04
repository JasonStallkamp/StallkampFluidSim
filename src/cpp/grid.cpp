#include "../headers/grid.h"
Grid::Grid()
{
	data = new float[64 * 64 * 3];
	for (int y = 0; y < 64; y++)
		for (int x = 0; x < 64; x++)
		{
			data[(y * 64 + x) * 3] = 1;
			data[(y * 64 + x) * 3 + 1] = 0;
			data[(y * 64 + x) * 3 + 2] = 0;
		}

}

Grid::~Grid()
{
	delete data;
}



GridEnum Grid::operator[](int i)
{
	return GridEnum(data + (i * 64 * 3));
}



GridEnum::GridEnum(float* refrence)
{
	this->pointer = refrence;
}
PixelEnum GridEnum::operator[](int i)
{
	return PixelEnum(i * 3 + pointer );
}



PixelEnum::PixelEnum(float* refrence)
{
	this->pointer = refrence;
}

float* PixelEnum::operator[](int i)
{
	return pointer + i;
}