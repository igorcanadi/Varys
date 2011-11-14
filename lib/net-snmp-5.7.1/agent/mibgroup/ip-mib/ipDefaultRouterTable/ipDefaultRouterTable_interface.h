/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 15899 $ of $
 *
 * $Id:$
 */
/** @ingroup interface: Routines to interface to Net-SNMP
 *
 * \warning This code should not be modified, called directly,
 *          or used to interpret functionality. It is subject to
 *          change at any time.
 * 
 * @{
 */
/*
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 * ***                                                               ***
 * ***  NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE NOTE  ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THIS FILE DOES NOT CONTAIN ANY USER EDITABLE CODE.      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***       THE GENERATED CODE IS INTERNAL IMPLEMENTATION, AND      ***
 * ***                                                               ***
 * ***                                                               ***
 * ***    IS SUBJECT TO CHANGE WITHOUT WARNING IN FUTURE RELEASES.   ***
 * ***                                                               ***
 * ***                                                               ***
 * *********************************************************************
 * *********************************************************************
 * *********************************************************************
 */
#ifndef IPDEFAULTROUTERTABLE_INTERFACE_H
#define IPDEFAULTROUTERTABLE_INTERFACE_H

#ifdef __cplusplus
extern          "C" {
#endif


#include "ipDefaultRouterTable.h"


    /*
     ********************************************************************
     * Table declarations
     */

    /*
     * PUBLIC interface initialization routine 
     */
    void           
        _ipDefaultRouterTable_initialize_interface
        (ipDefaultRouterTable_registration * user_ctx, u_long flags);
    void           
        _ipDefaultRouterTable_shutdown_interface
        (ipDefaultRouterTable_registration * user_ctx);

    ipDefaultRouterTable_registration
        *ipDefaultRouterTable_registration_get(void);

    ipDefaultRouterTable_registration
        *ipDefaultRouterTable_registration_set
        (ipDefaultRouterTable_registration * newreg);

    netsnmp_container *ipDefaultRouterTable_container_get(void);
    int             ipDefaultRouterTable_container_size(void);

    ipDefaultRouterTable_rowreq_ctx
        *ipDefaultRouterTable_allocate_rowreq_ctx(ipDefaultRouterTable_data
                                                  *, void *);
    void           
        ipDefaultRouterTable_release_rowreq_ctx
        (ipDefaultRouterTable_rowreq_ctx * rowreq_ctx);

    int             ipDefaultRouterTable_index_to_oid(netsnmp_index *
                                                      oid_idx,
                                                      ipDefaultRouterTable_mib_index
                                                      * mib_idx);
    int             ipDefaultRouterTable_index_from_oid(netsnmp_index *
                                                        oid_idx,
                                                        ipDefaultRouterTable_mib_index
                                                        * mib_idx);

    /*
     * access to certain internals. use with caution!
     */
    void           
        ipDefaultRouterTable_valid_columns_set(netsnmp_column_info *vc);


#ifdef __cplusplus
}
#endif
#endif                          /* IPDEFAULTROUTERTABLE_INTERFACE_H */
/** @} */
