/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_GroundVector_H_
#define	_GroundVector_H_


#include "asn_application.h"

/* Including external dependencies */
#include "GroundTrack.h"
#include "GroundSpeed.h"
#include "ADSv2VerticalRate.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* GroundVector */
typedef struct GroundVector {
	GroundTrack_t	 ground_track;
	GroundSpeed_t	 ground_speed;
	ADSv2VerticalRate_t	 vertical_rate;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GroundVector_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GroundVector;

#ifdef __cplusplus
}
#endif

#endif	/* _GroundVector_H_ */
#include "asn_internal.h"