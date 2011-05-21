#pragma once

//using std::;

class gdimm_gamma
{
public:
	~gdimm_gamma();

	const BYTE *get_ramp(double gamma);

private:
	void init_ramp(double gamma);

	map<double, BYTE *> _gamma_ramps;
};
