/*
*	New C++ File starts here.
*	This file should be named otherheader_c_n.c
*/

/* Include all C language NML and CMS function prototypes. */
#include "nmlcms_c.h"

/* Include externally supplied prototypes. */
#include "otherheader_c_n.h"

/* Forward Function Prototypes */
#ifdef __cplusplus
extern "C" {
#endif

void cms_struct_from_other_header_update(struct cms_c_struct *cms, nml_struct_from_other_header_c_t *x);

#ifdef __cplusplus
}
#endif

 // Format function name set from common root of selected classes. (struct_from_other_header
 // You may want to add a function prototype to a header or an explicit set_format_function line to the CodeGen script to set this explicitly.
long nml_struct_from_other_header_open(const char *buf, const char *proc, const char *cfg)
{
	return (long) nml_new(struct_from_other_header_c_format, buf,proc,cfg);
}

int  nml_struct_from_other_header_valid(long nml_id)
{
	return (int) nml_valid( (nml_c_t) nml_id);
}

void nml_struct_from_other_header_close(long nml_id)
{
	nml_free( (nml_c_t) nml_id);
}

int nml_struct_from_other_header_read(long nml_id)
{
	return (long) nml_read( (nml_c_t) nml_id);
}




 // Format function name set from common root of selected classes. (struct_from_other_header
 // You may want to add a function prototype to a header or an explicit set_format_function line to the CodeGen script to set this explicitly.

#ifndef MAX_STRUCT_FROM_OTHER_HEADER_C_NAME_LENGTH
#define MAX_STRUCT_FROM_OTHER_HEADER_C_NAME_LENGTH 1
#endif
#ifndef STRUCT_FROM_OTHER_HEADER_C_NAME_LIST_LENGTH
#define STRUCT_FROM_OTHER_HEADER_C_NAME_LIST_LENGTH 1
#endif


/* This list must be in alphabetical order and the three lists must correspond. */
const char struct_from_other_header_c_name_list[STRUCT_FROM_OTHER_HEADER_C_NAME_LIST_LENGTH][MAX_STRUCT_FROM_OTHER_HEADER_C_NAME_LENGTH]= {
	""};
const NMLTYPE struct_from_other_header_c_id_list[STRUCT_FROM_OTHER_HEADER_C_NAME_LIST_LENGTH]= {
	-1};
const size_t struct_from_other_header_c_size_list[STRUCT_FROM_OTHER_HEADER_C_NAME_LIST_LENGTH]= {
	0};
const char *struct_from_other_header_c_symbol_lookup(long type);


/* Enumerated Type Constants */

/*
*	NML/CMS Format function : struct_from_other_header_c_format
*	Automatically generated by NML CodeGen Java Applet.
*/
int struct_from_other_header_c_format(long type, void *buffer, struct cms_c_struct *cms)
{

	type = cms_check_type_info(cms,type,buffer,"struct_from_other_header_c",
		(cms_symbol_lookup_function_t) struct_from_other_header_c_symbol_lookup,
		(const char **)struct_from_other_header_c_name_list,
		struct_from_other_header_c_id_list,struct_from_other_header_c_size_list,
		STRUCT_FROM_OTHER_HEADER_C_NAME_LIST_LENGTH,
		MAX_STRUCT_FROM_OTHER_HEADER_C_NAME_LENGTH);

	switch(type)
	{

	default:
		return(0);
	}
	return 1;
}


/* NML Symbol Lookup Function */
const char *struct_from_other_header_c_symbol_lookup(long type)
{
	switch(type)
	{
	default:
		return"UNKNOWN";
		break;
	}
	return(NULL);
}

/*
*	NML/CMS Update function for struct_from_other_header
*	Automatically generated by NML CodeGen Java Applet.
*/
void cms_struct_from_other_header_update(struct cms_c_struct *cms, nml_struct_from_other_header_c_t *x)
{

	cms_begin_class(cms,"struct_from_other_header",0);
	cms_update_char(cms,"x",&(x->x));

	cms_end_class(cms,"struct_from_other_header",0);

}

