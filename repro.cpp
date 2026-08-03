#include <cmath>                                     
void foo(double* __restrict__ out, double* __restrict__ in) {
    #pragma omp simd
    for (int i = 0; i < 2; ++i) {
        out[i] = std::ldexp(in[i], 7);
    }
}
int main() {
	double out[2];
	double in[2];
	foo(out, in);
}
