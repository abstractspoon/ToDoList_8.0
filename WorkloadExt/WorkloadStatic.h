// WorkloadStruct.h: interface for the CWorkloadStruct class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_WORKLOADSTATIC_H__C83C53D4_887E_4D5C_A8A7_85C8FDB19307__INCLUDED_)
#define AFX_WORKLOADSTATIC_H__C83C53D4_887E_4D5C_A8A7_85C8FDB19307__INCLUDED_

#include "resource.h"
#include "Workloadstruct.h"

/////////////////////////////////////////////////////////////////////////////

const WORKLOADCOLUMN WORKLOADTREECOLUMNS[] = 
{
	{ WLCC_STARTDATE,	IDS_ATTRIB_STARTDATE,	IDS_COL_STARTDATE,	HDF_RIGHT,	TRUE },
	{ WLCC_DUEDATE,		IDS_ATTRIB_DUEDATE,		IDS_COL_DUEDATE,	HDF_RIGHT,	TRUE },
	{ WLCC_DURATION,	IDS_ATTRIB_DURATION,	IDS_COL_DURATION,	HDF_RIGHT,	TRUE },
	{ WLCC_PERCENT,		IDS_ATTRIB_PERCENTDONE,	IDS_COL_PERCENTDONE,HDF_CENTER,	FALSE },
	{ WLCC_TASKID,		IDS_ATTRIB_TASKID,		IDS_COL_TASKID,		HDF_RIGHT,	FALSE }
};
const int NUM_TREECOLUMNS = (sizeof(WORKLOADTREECOLUMNS) / sizeof(WORKLOADCOLUMN));

/////////////////////////////////////////////////////////////////////////////

#endif // !defined(AFX_WORKLOADSTATIC_H__C83C53D4_887E_4D5C_A8A7_85C8FDB19307__INCLUDED_)