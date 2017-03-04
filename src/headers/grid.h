#pragma once



class PixelEnum
{
public:
	float* operator[](int i);
	PixelEnum(float* refrence);
private:
	float * pointer;
};

class GridEnum
{
public:
	PixelEnum operator[](int i);
	GridEnum(float* refrence);
private:
	float * pointer;
};




class Grid
{
public:
	Grid();
	~Grid();
	float* data;
	GridEnum operator[](int i);
private:


};





