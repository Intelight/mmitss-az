/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "J2735SPATMESSAGE"
 * 	found in "module.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_LaneSet_H_
#define	_LaneSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LaneSet */
typedef OCTET_STRING_t	 LaneSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LaneSet;
asn_struct_free_f LaneSet_free;
asn_struct_print_f LaneSet_print;
asn_constr_check_f LaneSet_constraint;
ber_type_decoder_f LaneSet_decode_ber;
der_type_encoder_f LaneSet_encode_der;
xer_type_decoder_f LaneSet_decode_xer;
xer_type_encoder_f LaneSet_encode_xer;

#ifdef __cplusplus
}
#endif

#endif	/* _LaneSet_H_ */
