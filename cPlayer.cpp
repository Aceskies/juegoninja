
#include "cPlayer.h"

cPlayer::cPlayer() {}
cPlayer::~cPlayer(){}

void cPlayer::Draw(int tex_id)
{	
	float xo,yo,xf,yf;

	switch(GetState())
	{
		//1
		case STATE_LOOKLEFT:	xo =  0.8333f;	yo = 0.4f;
								break;
		//4
		case STATE_LOOKRIGHT:	xo = 0.0f;		yo = 0.2f;
								break;
		//1..3
		case STATE_WALKLEFT:	xo = 0.16666f + (GetFrame()*0.16666f);	yo = 0.4f;
								NextFrame(3);
								break;
		//4..6
		case STATE_WALKRIGHT:	xo = 0.16666f + (GetFrame()*0.16666f);	yo = 0.2f;
								NextFrame(3);
								break;

		case STATE_JUMPRIGHT:    xo = 0.49999f + (GetFrame()*0.16666f);	yo = 0.6f;
								break;

		case STATE_JUMPLEFT:    xo = 0.3333f + (GetFrame()*0.16666f);	yo = 0.8f;
								break;

	}
	xf = xo + 0.1666f;
	yf = yo - 0.2f;

	DrawRect(tex_id,xo,yo,xf,yf);
}
