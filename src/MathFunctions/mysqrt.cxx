double mysqrt(double input)
{
	// if we have both log and exp then use them
#if defined (HAVE_LOG) && defined (HAVE_EXP)
       return exp(log(x)*0.5);
#else // otherwise use an iterative approach
	return input * input;
#endif
}
