#pragma once
#include "Basicshapes.h"


////////////////////////////////////////////////////  class Sign  ///////////////////////////////////////
//This class reprsents the composite shape "sign"
//The sign is composed of 2 Recatngles
/*				

					 ------------------
					|				   |
					|		 x		   |     x is the reference point of the Sign shape
					|			       |
					 ------------------
						   |   |
						   |   |
						   | . |
						   |   |
						   |   |
							---
*/

//Note: sign reference point is the center point of the top rectangle
//class Sign :public shape
//{
//	Rect* base;
//	Rect* top;
//public:
//	Sign(game* r_pGame, point ref);
//	virtual void draw() const;
//
//
//};

class Sign :public shape
{
	Rect* base;
	Rect* top;
public:
	Sign(game* r_pGame, point ref);
	virtual void draw() const;
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
	void increaseSize();
	void decreaseSize();
};
class Home :public shape
{
	Rect* base;
	triangle* top;
	circle* circle1;
	circle* circle2;
public:
	Home(game* r_pGame, point ref);
	virtual ~Home();
	virtual void draw() const;
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
};


class loli :public shape
{
	Rect* base;
	circle* top;
public:
	loli(game* r_pGame, point ref);
	virtual void draw() const;
	virtual ~loli();
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
};


class clown :public shape
{
	circle* base;
	triangle* top;
public:
	clown(game* r_pGame, point ref);
	~clown();
	virtual void draw() const;
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
};

class pencil :public shape
{
	triangle* base;
	circle* top;
	Rect* baserectangle;
public:
	pencil(game* r_pGame, point ref);
	virtual void draw() const;
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
};


class masterclown :public shape
{
	circle* basecircle;
	triangle* top;
	Rect* base;
public:
	masterclown(game* r_pGame, point ref);
	virtual void draw() const;
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
};

class icecream :public shape
{
	circle* basecircle;
	circle* top;
	Rect* base;
	triangle* toptriangle;
public:
	icecream(game* r_pGame, point ref);
	~icecream();
	virtual void draw() const;
	virtual void resizeUp(double size);
	virtual void resizeDown();
	virtual void rotate90();
};



