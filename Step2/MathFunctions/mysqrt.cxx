// Function for calculating squre root of S with Heron's method
double mysqrt(double S) {
	double x = S / 2;
	for (int i = 0; i < 4; i++) {
		x = 0.5 * x + 0.5 * S / x;
	}
	return x;
}