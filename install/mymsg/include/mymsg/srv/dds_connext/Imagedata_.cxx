

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imagedata_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "Imagedata_.h"

#include <new>

namespace mymsg {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Imagedata_Request_TYPENAME = "mymsg::srv::dds_::Imagedata_Request_";

            DDS_TypeCode* Imagedata_Request__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Imagedata_Request__g_tc_members[2]=
                {

                    {
                        (char *)"input_data_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"input_count_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Imagedata_Request__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mymsg::srv::dds_::Imagedata_Request_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        Imagedata_Request__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Imagedata_Request_*/

                if (is_initialized) {
                    return &Imagedata_Request__g_tc;
                }

                Imagedata_Request__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::Image__get_typecode();

                Imagedata_Request__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                is_initialized = RTI_TRUE;

                return &Imagedata_Request__g_tc;
            }

            RTIBool Imagedata_Request__initialize(
                Imagedata_Request_* sample) {
                return mymsg::srv::dds_::Imagedata_Request__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Imagedata_Request__initialize_ex(
                Imagedata_Request_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mymsg::srv::dds_::Imagedata_Request__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Imagedata_Request__initialize_w_params(
                Imagedata_Request_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::Image__initialize_w_params(&sample->input_data_,
                allocParams)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->input_count_)) {
                    return RTI_FALSE;
                }

                return RTI_TRUE;
            }

            void Imagedata_Request__finalize(
                Imagedata_Request_* sample)
            {

                mymsg::srv::dds_::Imagedata_Request__finalize_ex(sample,RTI_TRUE);
            }

            void Imagedata_Request__finalize_ex(
                Imagedata_Request_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mymsg::srv::dds_::Imagedata_Request__finalize_w_params(
                    sample,&deallocParams);
            }

            void Imagedata_Request__finalize_w_params(
                Imagedata_Request_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::Image__finalize_w_params(&sample->input_data_,deallocParams);

            }

            void Imagedata_Request__finalize_optional_members(
                Imagedata_Request_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                sensor_msgs::msg::dds_::Image__finalize_optional_members(&sample->input_data_, deallocParams->delete_pointers);
            }

            RTIBool Imagedata_Request__copy(
                Imagedata_Request_* dst,
                const Imagedata_Request_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!sensor_msgs::msg::dds_::Image__copy(
                        &dst->input_data_,(const sensor_msgs::msg::dds_::Image_*)&src->input_data_)) {
                        return RTI_FALSE;
                    } 
                    if (!RTICdrType_copyLongLong (
                        &dst->input_count_, &src->input_count_)) { 
                        return RTI_FALSE;
                    }

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Imagedata_Request_' sequence class.
            */
            #define T Imagedata_Request_
            #define TSeq Imagedata_Request_Seq

            #define T_initialize_w_params mymsg::srv::dds_::Imagedata_Request__initialize_w_params

            #define T_finalize_w_params   mymsg::srv::dds_::Imagedata_Request__finalize_w_params
            #define T_copy       mymsg::srv::dds_::Imagedata_Request__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mymsg  */
namespace mymsg {
    namespace srv {
        namespace dds_ {

            /* ========================================================================= */
            const char *Imagedata_Response_TYPENAME = "mymsg::srv::dds_::Imagedata_Response_";

            DDS_TypeCode* Imagedata_Response__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode_Member Imagedata_Response__g_tc_members[3]=
                {

                    {
                        (char *)"output_cut_",/* Member name */
                        {
                            0,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"output_count_",/* Member name */
                        {
                            1,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }, 
                    {
                        (char *)"output_data_",/* Member name */
                        {
                            2,/* Representation ID */          
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL/* Ignored */
                    }
                };

                static DDS_TypeCode Imagedata_Response__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mymsg::srv::dds_::Imagedata_Response_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        3, /* Number of members */
                        Imagedata_Response__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for Imagedata_Response_*/

                if (is_initialized) {
                    return &Imagedata_Response__g_tc;
                }

                Imagedata_Response__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_boolean;

                Imagedata_Response__g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_longlong;

                Imagedata_Response__g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)sensor_msgs::msg::dds_::Image__get_typecode();

                is_initialized = RTI_TRUE;

                return &Imagedata_Response__g_tc;
            }

            RTIBool Imagedata_Response__initialize(
                Imagedata_Response_* sample) {
                return mymsg::srv::dds_::Imagedata_Response__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool Imagedata_Response__initialize_ex(
                Imagedata_Response_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mymsg::srv::dds_::Imagedata_Response__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool Imagedata_Response__initialize_w_params(
                Imagedata_Response_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initBoolean(&sample->output_cut_)) {
                    return RTI_FALSE;
                }

                if (!RTICdrType_initLongLong(&sample->output_count_)) {
                    return RTI_FALSE;
                }

                if (!sensor_msgs::msg::dds_::Image__initialize_w_params(&sample->output_data_,
                allocParams)) {
                    return RTI_FALSE;
                }
                return RTI_TRUE;
            }

            void Imagedata_Response__finalize(
                Imagedata_Response_* sample)
            {

                mymsg::srv::dds_::Imagedata_Response__finalize_ex(sample,RTI_TRUE);
            }

            void Imagedata_Response__finalize_ex(
                Imagedata_Response_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mymsg::srv::dds_::Imagedata_Response__finalize_w_params(
                    sample,&deallocParams);
            }

            void Imagedata_Response__finalize_w_params(
                Imagedata_Response_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                sensor_msgs::msg::dds_::Image__finalize_w_params(&sample->output_data_,deallocParams);

            }

            void Imagedata_Response__finalize_optional_members(
                Imagedata_Response_* sample, RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParamsTmp =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
                struct DDS_TypeDeallocationParams_t * deallocParams =
                &deallocParamsTmp;

                if (sample==NULL) {
                    return;
                } 
                if (deallocParams) {} /* To avoid warnings */

                deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
                deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

                sensor_msgs::msg::dds_::Image__finalize_optional_members(&sample->output_data_, deallocParams->delete_pointers);
            }

            RTIBool Imagedata_Response__copy(
                Imagedata_Response_* dst,
                const Imagedata_Response_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!RTICdrType_copyBoolean (
                        &dst->output_cut_, &src->output_cut_)) { 
                        return RTI_FALSE;
                    }
                    if (!RTICdrType_copyLongLong (
                        &dst->output_count_, &src->output_count_)) { 
                        return RTI_FALSE;
                    }
                    if (!sensor_msgs::msg::dds_::Image__copy(
                        &dst->output_data_,(const sensor_msgs::msg::dds_::Image_*)&src->output_data_)) {
                        return RTI_FALSE;
                    } 

                    return RTI_TRUE;

                } catch (std::bad_alloc&) {
                    return RTI_FALSE;
                }
            }

            /**
            * <<IMPLEMENTATION>>
            *
            * Defines:  TSeq, T
            *
            * Configure and implement 'Imagedata_Response_' sequence class.
            */
            #define T Imagedata_Response_
            #define TSeq Imagedata_Response_Seq

            #define T_initialize_w_params mymsg::srv::dds_::Imagedata_Response__initialize_w_params

            #define T_finalize_w_params   mymsg::srv::dds_::Imagedata_Response__finalize_w_params
            #define T_copy       mymsg::srv::dds_::Imagedata_Response__copy

            #ifndef NDDS_STANDALONE_TYPE
            #include "dds_c/generic/dds_c_sequence_TSeq.gen"
            #include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
            #else
            #include "dds_c_sequence_TSeq.gen"
            #include "dds_cpp_sequence_TSeq.gen"
            #endif

            #undef T_copy
            #undef T_finalize_w_params

            #undef T_initialize_w_params

            #undef TSeq
            #undef T
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mymsg  */

