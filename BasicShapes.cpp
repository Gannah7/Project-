#include "BasicShapes.h"
#include "gameConfig.h"
#include "game.h"

////////////////////////////////////////////////////  class Rect  ///////////////////////////////////////



Rect::Rect(game* r_pGame, point ref, int r_hght, int r_wdth):shape(r_pGame,ref)
{
	pGame = r_pGame;
	hght = r_hght;
	wdth = r_wdth;
}

void Rect::draw() const
{
	window* pW = pGame->getWind();	//get interface window
	pW->SetPen(config.penColor, config.penWidth);
	pW->SetBrush(config.fillColor);
	point upperLeft, lowerBottom;
	upperLeft.x = RefPoint.x - wdth / 2;
	upperLeft.y = RefPoint.y - hght / 2;
	lowerBottom.x = RefPoint.x + wdth / 2;
	lowerBottom.y = RefPoint.y + hght / 2;

	pW->DrawRectangle(upperLeft.x, upperLeft.y, lowerBottom.x, lowerBottom.y, FILLED);
}
//void Rect::resizeUp(double size) {
//	top->resizeUp(size);
//	base->resizeUp(size);
//}
//void Rect::resizeDown() {
//	top->resizeDown(0.5);
//	base->resizeDown(0.5);
//}
//void Rect::rotate90() {
//	int baseX = RefPoint.y - base->getRefPoint().x;
//	int baseY = base->getRefPoint().y - RefPoint.x;
//	point newBaseRefPoint = { RefPoint.x - baseY, RefPoint.y - baseX };
//	base->setRefPoint(newBaseRefPoint);
//	int topX = RefPoint.y - top->getRefPoint().x;
//	int topY = top->getRefPoint().y - RefPoint.x;
//	point newRefPoint = { RefPoint.x - topY, RefPoint.y - topX };
//	top->setRefPoint(newRefPoint);
//}

////////////////////////////////////////////////////  class circle  ///////////////////////////////////////
//TODO: Add implementation for class circle here
circle::circle(game* r_pGame, point ref, int r, int r_rad) :shape(r_pGame, ref)
{
	rad = r_rad;
	pGame = r_pGame;
}

void circle::draw() const
{
	window* pW = pGame->getWind();	//get interface window
	pW->SetPen(borderColor, config.penWidth);
	pW->SetBrush(fillColor);
	point upperLeft, lowerBottom;
	upperLeft.x = RefPoint.x - rad / 2;

	lowerBottom.y = RefPoint.y + rad / 2;

	pW->DrawCircle(RefPoint.x, RefPoint.y, rad, FILLED);
}
//void circle::resizeUp(double size) {
//	top->resizeUp(size);
//	base->resizeUp(size);
//}
//void circle::resizeDown() {
//	top->resizeDown(0.5);
//	base->resizeDown(0.5);
//}
//void circle::rotate90() {
//	int baseX = RefPoint.y - base->getRefPoint().x;
//	int baseY = base->getRefPoint().y - RefPoint.x;
//	point newBaseRefPoint = { RefPoint.x - baseY, RefPoint.y - baseX };
//	base->setRefPoint(newBaseRefPoint);
//	int topX = RefPoint.y - top->getRefPoint().x;
//	int topY = top->getRefPoint().y - RefPoint.x;
//	point newRefPoint = { RefPoint.x - topY, RefPoint.y - topX };
//	top->setRefPoint(newRefPoint);
//}


////////////////////////////////////////////////////  class triangle  ///////////////////////////////////////
//TODO: Add implementation for class triangle here

triangle::triangle(game* r_pGame, point ref, int lingth1, int r_length,int length2) :shape(r_pGame, ref)
	
{

	length = r_length;
	pGame = r_pGame;
}

void triangle::draw() const
{
	window* pW = pGame->getWind();	//get interface window
	pW->SetPen(borderColor, config.penWidth);
	pW->SetBrush(fillColor);
	point point1, point2 , point3;
	point1.x = RefPoint.x - length / 2;
	point1.y = RefPoint.y + length / 2;

	point2.x = RefPoint.x + length / 2;
	point2.y = RefPoint.y + length / 2;

	point3.x = RefPoint.x;
	point3.y = RefPoint.y - length / 2;


	pW->DrawTriangle(point1.x, point1.y, point2.x, point2.y, point3.x, point3.y,  FILLED);
}
//void triangle::resizeUp(double size) {
//	top->resizeUp(size);
//	base->resizeUp(size);
//}
//void triangle::resizeDown() {
//	top->resizeDown(0.5);
//	base->resizeDown(0.5);
//}
//void triangle::rotate90() {
//	int baseX = RefPoint.y - base->getRefPoint().x;
//	int baseY = base->getRefPoint().y - RefPoint.x;
//	point newBaseRefPoint = { RefPoint.x - baseY, RefPoint.y - baseX };
//	base->setRefPoint(newBaseRefPoint);
//	int topX = RefPoint.y - top->getRefPoint().x;
//	int topY = top->getRefPoint().y - RefPoint.x;
//	point newRefPoint = { RefPoint.x - topY, RefPoint.y - topX };
//	top->setRefPoint(newRefPoint);
//}
// newcomment 