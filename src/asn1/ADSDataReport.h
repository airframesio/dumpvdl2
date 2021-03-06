/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "ADSMessageSetVersion2"
 * 	found in "../../../dumpvdl2.asn1/atn-b2_adsc_v2.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_ADSDataReport_H_
#define	_ADSDataReport_H_


#include "asn_application.h"

/* Including external dependencies */
#include "ThreeDPosition.h"
#include "ADSv2DateTimeGroup.h"
#include "FigureOfMerit.h"
#include "ContractNumber.h"
#include "ADSEmergencyUrgencyStatus.h"
#include "Ias.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProjectedProfile;
struct GroundVector;
struct AirVector;
struct MetInfo;
struct ExtendedProjectedProfile;
struct SpeedScheduleProfile;
struct TOARange;
struct RTAStatusData;
struct RNPProfile;

/* ADSDataReport */
typedef struct ADSDataReport {
	ThreeDPosition_t	 position;
	ADSv2DateTimeGroup_t	 time;
	FigureOfMerit_t	 fom;
	ContractNumber_t	 contract_number;
	struct ProjectedProfile	*projected_profile	/* OPTIONAL */;
	struct GroundVector	*ground_vector	/* OPTIONAL */;
	struct AirVector	*air_vector	/* OPTIONAL */;
	struct MetInfo	*met_info	/* OPTIONAL */;
	struct ExtendedProjectedProfile	*extended_projected_profile	/* OPTIONAL */;
	struct SpeedScheduleProfile	*speed_schedule_profile	/* OPTIONAL */;
	ADSEmergencyUrgencyStatus_t	*emergency_urgency_status	/* OPTIONAL */;
	struct TOARange	*toa_range	/* OPTIONAL */;
	struct RTAStatusData	*rta_status_data	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct RNPProfile	*rnp_profile	/* OPTIONAL */;
	Ias_t	*planned_final_approach_speed	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ADSDataReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ADSDataReport;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProjectedProfile.h"
#include "GroundVector.h"
#include "AirVector.h"
#include "MetInfo.h"
#include "ExtendedProjectedProfile.h"
#include "SpeedScheduleProfile.h"
#include "TOARange.h"
#include "RTAStatusData.h"
#include "RNPProfile.h"

#endif	/* _ADSDataReport_H_ */
#include "asn_internal.h"
