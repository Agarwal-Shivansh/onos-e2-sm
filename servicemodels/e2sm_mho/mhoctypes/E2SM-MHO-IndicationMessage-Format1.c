/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-MHO-IEs"
 * 	found in "e2sm-mho.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E2SM-MHO-IndicationMessage-Format1.h"

#include "E2SM-MHO-MeasurementReportItem.h"
static int
memb_measReport_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 100)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_measReport_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  100 }	/* (SIZE(1..100)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_measReport_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 7,  7,  1,  100 }	/* (SIZE(1..100)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_measReport_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_E2SM_MHO_MeasurementReportItem,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_measReport_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_measReport_specs_3 = {
	sizeof(struct E2SM_MHO_IndicationMessage_Format1__measReport),
	offsetof(struct E2SM_MHO_IndicationMessage_Format1__measReport, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_measReport_3 = {
	"measReport",
	"measReport",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_measReport_tags_3,
	sizeof(asn_DEF_measReport_tags_3)
		/sizeof(asn_DEF_measReport_tags_3[0]) - 1, /* 1 */
	asn_DEF_measReport_tags_3,	/* Same as above */
	sizeof(asn_DEF_measReport_tags_3)
		/sizeof(asn_DEF_measReport_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_measReport_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_measReport_3,
	1,	/* Single element */
	&asn_SPC_measReport_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_E2SM_MHO_IndicationMessage_Format1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_MHO_IndicationMessage_Format1, ueID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Identity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ueID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E2SM_MHO_IndicationMessage_Format1, measReport),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_measReport_3,
		0,
		{ 0, &asn_PER_memb_measReport_constr_3,  memb_measReport_constraint_1 },
		0, 0, /* No default value */
		"measReport"
		},
};
static const ber_tlv_tag_t asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E2SM_MHO_IndicationMessage_Format1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ueID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* measReport */
};
asn_SEQUENCE_specifics_t asn_SPC_E2SM_MHO_IndicationMessage_Format1_specs_1 = {
	sizeof(struct E2SM_MHO_IndicationMessage_Format1),
	offsetof(struct E2SM_MHO_IndicationMessage_Format1, _asn_ctx),
	asn_MAP_E2SM_MHO_IndicationMessage_Format1_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E2SM_MHO_IndicationMessage_Format1 = {
	"E2SM-MHO-IndicationMessage-Format1",
	"E2SM-MHO-IndicationMessage-Format1",
	&asn_OP_SEQUENCE,
	asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1,
	sizeof(asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1[0]), /* 1 */
	asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1,	/* Same as above */
	sizeof(asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1)
		/sizeof(asn_DEF_E2SM_MHO_IndicationMessage_Format1_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E2SM_MHO_IndicationMessage_Format1_1,
	2,	/* Elements count */
	&asn_SPC_E2SM_MHO_IndicationMessage_Format1_specs_1	/* Additional specs */
};

