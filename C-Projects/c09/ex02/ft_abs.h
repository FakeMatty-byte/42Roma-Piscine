#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) \
	if (Value < 0) { \
		Value *= -1; \
	}

#endif