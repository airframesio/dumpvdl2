/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PMADSCAPDUVersion1"
 * 	found in "../../../dumpvdl2.asn1/atn-b1_pmadsc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ContractRequest_H_
#define	_ContractRequest_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ContractType.h"
#include "ICContractRequest.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ContractRequest */
typedef struct ContractRequest {
	ContractType_t	 contract_type;
	ICContractRequest_t	 ic_contract_request;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ContractRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ContractRequest;

#ifdef __cplusplus
}
#endif

#endif	/* _ContractRequest_H_ */
#include "asn_internal.h"