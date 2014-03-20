/**
 * Check if element exists in an int array and returns the index or -1 if it doesn't
 *
 * @param int * array
 * @param size_t length
 * @param const int element
 *
 * @return int
 */
int in_int_array(int *array, size_t length, const int element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an uint array and returns the index or -1 if it doesn't
 *
 * @param uint * array
 * @param size_t length
 * @param const uint element
 *
 * @return int
 */
int in_uint_array(uint *array, size_t length, const uint element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an long array and returns the index or -1 if it doesn't
 *
 * @param long * array
 * @param size_t length
 * @param const long element
 *
 * @return int
 */
int in_long_array(long * array, size_t length, const long element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an ulong array and returns the index or -1 if it doesn't
 *
 * @param ulong * array
 * @param size_t length
 * @param const ulong element
 *
 * @return int
 */
int in_ulong_array(ulong * array, size_t length, const ulong element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an llong array and returns the index or -1 if it doesn't
 *
 * @param llong * array
 * @param size_t length
 * @param const long element
 *
 * @return int
 */
int in_llong_array(llong * array, size_t length, const llong element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an ullong array and returns the index or -1 if it doesn't
 *
 * @param ullong * array
 * @param size_t length
 * @param const ullong element
 *
 * @return int
 */
int in_ullong_array(ullong * array, size_t length, const ullong element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an short array and returns the index or -1 if it doesn't
 *
 * @param short * array
 * @param size_t length
 * @param const short element
 *
 * @return int
 */
int in_short_array(short * array, size_t length, const short element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an ushort array and returns the index or -1 if it doesn't
 *
 * @param ushort * array
 * @param size_t length
 * @param const ushort element
 *
 * @return int
 */
int in_ushort_array(ushort * array, size_t length, const ushort element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an char array and returns the index or -1 if it doesn't
 *
 * @param char * array
 * @param size_t length
 * @param const char element
 *
 * @return int
 */
int in_char_array(char * array, size_t length, const char element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an string array and returns the index or -1 if it doesn't
 *
 * @param string * array
 * @param size_t length
 * @param const string element
 *
 * @return int
 */
int in_string_array(string * array, size_t length, const string element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( strcmp(array[i], element) == 0 ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in an float array and returns the index or -1 if it doesn't
 *
 * @param float * array
 * @param size_t length
 * @param const float element
 *
 * @return int
 */
int in_float_array(float *array, size_t length, const float element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in a double array and returns the index or -1 if it doesn't
 *
 * @param double * array
 * @param size_t length
 * @param const double element
 *
 * @return int
 */
int in_double_array(double *array, size_t length, const double element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Check if element exists in a double array and returns the index or -1 if it doesn't
 *
 * @param ldouble * array
 * @param size_t length
 * @param const ldouble element
 *
 * @return int
 */
int in_ldouble_array(ldouble *array, size_t length, const ldouble element) {
	size_t i = 0;
	for(; i < length; i++) {
		if( array[i] == element ) {
			return i;
		}
	}
	return -1;
}

/**
 * Reads from stdin a whole array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_read_int(int * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%i", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param uint * array
 * @param size_t length
 *
 */
void array_read_uint(uint * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%u", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param long * array
 * @param size_t length
 *
 */
void array_read_long(long * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%li", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param ulong * array
 * @param size_t length
 *
 */
void array_read_ulong(ulong * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%lu", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param llong * array
 * @param size_t length
 *
 */
void array_read_llong(llong * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%lli", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param ullong * array
 * @param size_t length
 *
 */
void array_read_ullong(ullong * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%llu", array + i);
		utils_ib_clean();
	}
}


/**
 * Reads from stdin a whole array
 *
 * @param short * array
 * @param size_t length
 *
 */
void array_read_short(short * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%hi", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param short * array
 * @param size_t length
 *
 */
void array_read_ushort(ushort * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%hu", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param char * array
 * @param size_t length
 *
 */
void array_read_char(char * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%c", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param string * array
 * @param size_t length
 *
 */
void array_read_string(string * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		array[i] = malloc(ARRAY_STRING_LENGTH);
		printf("[%d]:", i);
		fgets(array[i], ARRAY_STRING_LENGTH, stdin);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param float * array
 * @param size_t length
 *
 */
void array_read_float(float * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%f", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param double * array
 * @param size_t length
 *
 */
void array_read_double(double * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%lf", array + i);
		utils_ib_clean();
	}
}

/**
 * Reads from stdin a whole array
 *
 * @param ldouble * array
 * @param size_t length
 *
 */
void array_read_ldouble(ldouble * array, size_t length) {
	size_t i = 0;
	for(; i < length; i++) {
		printf("[%d]:", i);
		scanf("%llf", array + i);
		utils_ib_clean();
	}
}


/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_int(int * array, size_t length) {
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%d, ", array[i]);
	}
	printf("%d}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_uint(uint * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%u, ", array[i]);
	}
	printf("%u}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_long(long * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%ld, ", array[i]);
	}
	printf("%ld}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_ulong(ulong * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%lu, ", array[i]);
	}
	printf("%lu}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_llong(llong * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%lld, ", array[i]);
	}
	printf("%lld}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_ullong(ullong * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%llu, ", array[i]);
	}
	printf("%llu}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_short(short * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%hd, ", array[i]);
	}
	printf("%hd}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_ushort(ushort * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%hu, ", array[i]);
	}
	printf("%hu}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_char(char * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%c, ", array[i]);
	}
	printf("%c}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_string(string * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("\"%s\", ", array[i]);
	}
	printf("\"%s\"}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_float(float * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%g, ", array[i]);
	}
	printf("%g}", array[i]);
}

/**
 * Prints an array
 *
 * @param int * array
 * @param size_t length
 *
 */
void array_print_double(double * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%g, ", array[i]);
	}
	printf("%g}", array[i]);
}

/**
 * Prints an array
 *
 * @param ldouble * array
 * @param size_t length
 *
 */
void array_print_ldouble(ldouble * array, size_t length){
	size_t i = 0;
	length--;
	printf("{");
	for(; i < length; i++) {
		printf("%lg, ", array[i]);
	}
	printf("%lg}", array[i]);
}

/**
 * Inicializar arrays
 *
 * @param int * array
 * @param size_t length
 * @param const int val
 *
 */
void array_initialize_int(int * array, size_t length, const int val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param uint * array
 * @param size_t length
 * @param const uint val
 *
 */
void array_initialize_uint(uint * array, size_t length, const uint val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param long * array
 * @param size_t length
 * @param const long val
 *
 */
void array_initialize_long(long * array, size_t length, const long val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param ulong * array
 * @param size_t length
 * @param const ulong val
 *
 */
void array_initialize_ulong(ulong * array, size_t length, const ulong val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param llong * array
 * @param size_t length
 * @param const llong val
 *
 */
void array_initialize_llong(long * array, size_t length, const llong val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param ullong * array
 * @param size_t length
 * @param const ullong val
 *
 */
void array_initialize_ullong(ullong * array, size_t length, const ullong val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param short * array
 * @param size_t length
 * @param const short val
 *
 */
void array_initialize_short(short * array, size_t length, const short val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param ushort * array
 * @param size_t length
 * @param const ushort val
 *
 */
void array_initialize_ushort(ushort * array, size_t length, const ushort val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param char * array
 * @param size_t length
 * @param const char val
 *
 */
void array_initialize_char(char * array, size_t length, const char val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param string * array
 * @param size_t length
 * @param const string val
 *
 */
void array_initialize_string(string * array, size_t length, const string val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		// yep, we dont point to the same value
		array[i] = str_clone(val);
	}
}

/**
 * Inicializar arrays
 *
 * @param float * array
 * @param size_t length
 * @param const float val
 *
 */
void array_initialize_float(float * array, size_t length, float val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param double * array
 * @param size_t length
 * @param const double val
 *
 */
void array_initialize_double(double * array, size_t length, double val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}

/**
 * Inicializar arrays
 *
 * @param ldouble * array
 * @param size_t length
 * @param const ldouble val
 *
 */
void array_initialize_ldouble(ldouble * array, size_t length, ldouble val) {
	size_t i;
	for( i = 0; i < length; i++ ) {
		array[i] = val;
	}
}
