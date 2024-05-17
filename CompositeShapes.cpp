#include "CompositeShapes.h"
#include "gameConfig.h"

////////////////////////////////////////////////////  class Sign  ///////////////////////////////////////
//Sign::Sign(game* r_pGame, point ref):shape(r_pGame, ref)
//{
//	//calc the ref point of the Sign base and top rectangles relative to the Sign shape
//	point topRef = ref;	//top rect ref is the same as the sign
//	point baseRef = { ref.x, ref.y + config.sighShape.topHeight / 2 + config.sighShape.baseHeight / 2 };
//	top = new Rect(pGame, topRef, config.sighShape.topHeight, config.sighShape.topWdth);
//	base = new Rect(pGame, baseRef, config.sighShape.baseHeight, config.sighShape.baseWdth);
//}
//
//void Sign::draw() const
//{
//	base->draw();
//	top->draw();
//}


Sign::Sign(game* r_pGame, point ref) :shape(r_pGame, ref)
{
	//calc the ref point of the Sign base and top rectangles relative to the Sign shape
	point topRef = ref;	//top rect ref is the same as the sign
	point baseRef = { ref.x, ref.y + config.sighShape.topHeight / 2 + config.sighShape.baseHeight / 2 };
	top = new Rect(pGame, topRef, config.sighShape.topHeight, config.sighShape.topWdth);
	base = new Rect(pGame, baseRef, config.sighShape.baseHeight, config.sighShape.baseWdth);
}

void Sign::draw() const
{
	base->draw();
	top->draw();
}

Home::Home(game* r_pGame, point ref) :shape(r_pGame, ref)
{
	//calc the ref point of the Home  base  rectangles  and top triangle relative to the Home shape
	point topRef = ref;	//top triangle  ref is the same as the Home
	point baseRef = { ref.x, ref.y + config.sighShape1.baserectHeight / 2 + config.sighShape1.baserectWdth / 2 };
	point circle1Ref = { ref.x, ref.y + config.sighShape1.basecirclerad / 2 + config.sighShape1.basecirclerad / 2 }; // Adjust the coordinates as needed
	point circle2Ref = { ref.x, ref.y + config.sighShape1.basecirclerad / 2 + config.sighShape1.basecirclerad / 2 };
	top = new triangle(pGame, topRef, config.sighShape1.topsid1trileingth, config.sighShape1.topsid2trileingth, config.sighShape1.basesid2trileingth);
	base = new Rect(pGame, baseRef, config.sighShape1.baserectHeight, config.sighShape1.baserectWdth);
	circle1 = new circle(pGame, topRef, config.sighShape1.basecirclerad, config.sighShape1.basecirclerad);
	circle2 = new circle(pGame, topRef, config.sighShape1.basecirclerad, config.sighShape1.basecirclerad);
}


void Home::draw() const
{
	base->draw();
	top->draw();
	circle2->draw();
	circle1->draw();
}


loli::loli(game* r_pGame, point ref) :shape(r_pGame, ref)
{
	//calc the ref point of the loli base  rectangles and top circle relative to the loli  shape
	point topRef = ref;	//top rect ref is the same as the loli
	point baseRef = { ref.x, ref.y + config.sighShape2.baserectlolHeight / 2 + config.sighShape2.baserectlolWdth / 2 };
	top = new circle(pGame, topRef, config.sighShape2.topcirclerad, config.sighShape2.topcirclerad);
	base = new Rect(pGame, baseRef, config.sighShape2.baserectlolHeight, config.sighShape2.baserectlolWdth);
}


void loli::draw() const
{
	base->draw();
	top->draw();

}


clown::clown(game* r_pGame, point ref) :shape(r_pGame, ref)
{
	//calc the ref point of the clown base  rectangles and top circle relative to the clown  shape
	point topRef = ref;	//top rect ref is the same as the clown
	point baseRef = { ref.x, ref.y + config.sighShape3.toptriside2_clown / 2 + config.sighShape3.toptriside1_clown / 2 };
	top = new triangle (pGame, topRef, config.sighShape3.toptriside1_clown, config.sighShape3.toptriside2_clown, config.sighShape3.basetri_clown);



	base = new circle(pGame, baseRef, config.sighShape3.topcircle_clown_rad, config.sighShape3.topcircle_clown_rad);
}
//clown::~clown()
//{
//	delete base;
//	delete top;
//
//}
void clown::draw() const
{
	base->draw();
	top->draw();

}




icecream::icecream(game* r_pGame, point ref) :shape(r_pGame, ref)
{

	point topRef = ref;
	point basecircleRef = { ref.x, ref.y + config.sighShape4.circle_ice_rad / 2 + config.sighShape4.circle_ice_rad / 2 };
	point baseRef = { ref.x - config.sighShape4.base_rect_ice_hght / 2, ref.y - config.sighShape4.base_rect_ice_hght * 2 - config.sighShape4.lngthtri_ice };
	point toptriangleRef = { ref.x - config.sighShape4.lngthtri_ice / 2, ref.y - config.sighShape4.lngthtri_ice * 2 - config.sighShape4.lngthtri_ice };
	top = new circle(pGame, topRef, config.sighShape4.circle_ice_rad, config.sighShape4.circle_ice_rad);
	basecircle = new circle(pGame, basecircleRef, config.sighShape4.circle_ice_rad, config.sighShape4.circle_ice_rad);
	base = new Rect(pGame, baseRef, config.sighShape4.base_rect_ice_hght, config.sighShape4.base_rect_ice_wdth);
	toptriangle = new triangle (pGame, toptriangleRef, config.sighShape4.lngthtri_ice, config.sighShape4.lngthtri_ice ,config.sighShape4.lngthtri_ice);

}


//icecream::~icecream()
//{
//	delete base;
//	delete basecircle;
//	delete top;
//	delete toptriangle;
//}
void icecream::draw() const
{
	base->draw();
	basecircle->draw();
	top->draw();
	toptriangle->draw();
}

pencil::pencil(game* r_pGame, point ref) :shape(r_pGame, ref)
{

	point topRef = ref;
	point baserectangleRef = { ref.x, ref.y + config.sighShape5.base_rect_pencil_hght / 2 + config.sighShape5.base_rect_pencil_hght/ 2 };
	point baseRef = { ref.x - config.sighShape5.lngthtri_pencil / 2, ref.y - config.sighShape5.lngthtri_pencil * 2 - config.sighShape5.lngthtri_pencil };
	top = new circle(pGame, topRef, config.sighShape5.circle_pencil_rad, config.sighShape5.circle_pencil_rad);
	baserectangle = new Rect(pGame, baserectangleRef, config.sighShape5.base_rect_pencil_hght, config.sighShape5.base_rect_pencil_wdth);
	base = new triangle(pGame, baseRef, config.sighShape5.lngthtri_pencil, config.sighShape5.lngthtri_pencil, config.sighShape5.lngthtri_pencil);

}

void pencil::draw() const
{
	base->draw();
	baserectangle->draw();
	top->draw();
}


masterclown::masterclown(game* r_pGame, point ref) :shape(r_pGame, ref)
{

	point topRef = ref;
	point basecircleRef = { ref.x, ref.y + config.sighShape6.circle_mclo_rad / 2 + config.sighShape6.circle_mclo_rad / 2 };
	point baseRef = { ref.x - config.sighShape6.base_rect_mclo_hght* 2, ref.y - config.sighShape6.base_rect_mclo_hght * 2 - config.sighShape6.base_rect_mclo_wdth };
	top = new triangle(pGame, topRef, config.sighShape6.lngthtri_mclo, config.sighShape6.lngthtri_mclo, config.sighShape6.lngthtri_mclo);
	basecircle = new circle(pGame, basecircleRef, config.sighShape6.circle_mclo_rad, config.sighShape6.circle_mclo_rad);
	base = new Rect(pGame, baseRef, config.sighShape6.base_rect_mclo_hght, config.sighShape6.base_rect_mclo_wdth);


}

void masterclown::draw() const
{
	base->draw();
	basecircle->draw();
	top->draw();
}