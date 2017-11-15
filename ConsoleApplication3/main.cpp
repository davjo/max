template<typename T>
T& max(T &a, T &b, T &c) {
	return
		a > b ? a > c ? a	// a > (b ? c)
		: c					// c > a > b
		: b > c ? b			// b > (c ? a)
		: c;				// c > b > a
}