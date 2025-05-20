#pragma once

#ifndef TV_H
#define TV_H

class Tv
{
private:
	int state;//开关状态
	int maxchannel;//最大频道 1---maxchannel
	int channel;//当前频道
	int volume;//音量 MIN_VAL---MAX_VAL
	int mode;//有线无线
	int input;//tv or dvd
public:
	friend class Remote;
	enum { MIN_VAL = 0, MAX_VAL = 20 };
	enum { OFF, ON };
	enum { ANTENNA, CABLE };
	enum { TV, DVD };

	Tv(int s = OFF,int mc = 125) :state(s), maxchannel(mc), channel(2),
		volume(5), mode(CABLE), input(TV) {}
	void onoff() {state =state==ON?OFF:ON;}// 位运算state^=1;
	bool ison() { return state == ON; }
	bool volop();
    bool voldown();

	void chanup();
    void chandown();
    void setmode() { mode = mode==ANTENNA?CABLE:ANTENNA; }
	void setinput() {input =input==TV?DVD:TV; }
	void setting()const;//display all setting


};

class Remote 
{
private:
	int mode;//control mode

public:
	Remote(int m=Tv::TV) :mode(m) {}
	void onoff(Tv& t) {t.onoff();}

	bool volup(Tv& t) {return t.volop();}
    bool voldown(Tv& t) {return t.voldown();}
	void chanup(Tv& t) {t.chanup();}
    void chandown(Tv& t) {t.chandown();}

    void setmode(Tv& t) {t.setmode();}
    void setinput(Tv& t) {t.setinput();}
	void setchan(Tv& t, int c) { t.channel = c; }

};


#endif
