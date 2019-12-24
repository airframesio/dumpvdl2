/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#include "EPPLevel.h"

static asn_per_constraints_t asn_PER_type_EPPLevel_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_EPPLevel_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EPPLevel, choice.qNEAltitude),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_QNEAltitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"qNEAltitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPPLevel, choice.qNHAltitude),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_QNHAltitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"qNHAltitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EPPLevel, choice.mSLAltitude),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MSLAltitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mSLAltitude"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_EPPLevel_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qNEAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* qNHAltitude */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mSLAltitude */
};
static asn_CHOICE_specifics_t asn_SPC_EPPLevel_specs_1 = {
	sizeof(struct EPPLevel),
	offsetof(struct EPPLevel, _asn_ctx),
	offsetof(struct EPPLevel, present),
	sizeof(((struct EPPLevel *)0)->present),
	asn_MAP_EPPLevel_tag2el_1,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_EPPLevel = {
	"EPPLevel",
	"EPPLevel",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_EPPLevel_constr_1,
	asn_MBR_EPPLevel_1,
	3,	/* Elements count */
	&asn_SPC_EPPLevel_specs_1	/* Additional specs */
};
