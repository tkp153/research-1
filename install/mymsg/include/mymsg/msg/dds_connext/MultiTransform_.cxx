

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiTransform_.idl using "rtiddsgen".
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

#include "MultiTransform_.h"

#include <new>

namespace mymsg {
    namespace msg {
        namespace dds_ {

            /* ========================================================================= */
            const char *MultiTransform_TYPENAME = "mymsg::msg::dds_::MultiTransform_";

            DDS_TypeCode* MultiTransform__get_typecode()
            {
                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode MultiTransform__g_tc_transform__sequence = DDS_INITIALIZE_SEQUENCE_TYPECODE(RTI_INT32_MAX,NULL);
                static DDS_TypeCode_Member MultiTransform__g_tc_members[1]=
                {

                    {
                        (char *)"transform_",/* Member name */
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
                    }
                };

                static DDS_TypeCode MultiTransform__g_tc =
                {{
                        DDS_TK_STRUCT,/* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"mymsg::msg::dds_::MultiTransform_", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        1, /* Number of members */
                        MultiTransform__g_tc_members, /* Members */
                        DDS_VM_NONE  /* Ignored */         
                    }}; /* Type code for MultiTransform_*/

                if (is_initialized) {
                    return &MultiTransform__g_tc;
                }

                MultiTransform__g_tc_transform__sequence._data._typeCode = (RTICdrTypeCode *)mymsg::msg::dds_::Transform__get_typecode();

                MultiTransform__g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& MultiTransform__g_tc_transform__sequence;

                is_initialized = RTI_TRUE;

                return &MultiTransform__g_tc;
            }

            RTIBool MultiTransform__initialize(
                MultiTransform_* sample) {
                return mymsg::msg::dds_::MultiTransform__initialize_ex(sample,RTI_TRUE,RTI_TRUE);
            }

            RTIBool MultiTransform__initialize_ex(
                MultiTransform_* sample,RTIBool allocatePointers, RTIBool allocateMemory)
            {

                struct DDS_TypeAllocationParams_t allocParams =
                DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

                allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
                allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

                return mymsg::msg::dds_::MultiTransform__initialize_w_params(
                    sample,&allocParams);

            }

            RTIBool MultiTransform__initialize_w_params(
                MultiTransform_* sample, const struct DDS_TypeAllocationParams_t * allocParams)
            {

                void* buffer = NULL;
                if (buffer) {} /* To avoid warnings */

                if (sample == NULL) {
                    return RTI_FALSE;
                }
                if (allocParams == NULL) {
                    return RTI_FALSE;
                }

                if (allocParams->allocate_memory) {
                    mymsg::msg::dds_::Transform_Seq_initialize(&sample->transform_ );
                    mymsg::msg::dds_::Transform_Seq_set_element_allocation_params(&sample->transform_ ,allocParams);
                    mymsg::msg::dds_::Transform_Seq_set_absolute_maximum(&sample->transform_ , RTI_INT32_MAX);
                    if (!mymsg::msg::dds_::Transform_Seq_set_maximum(&sample->transform_, (0))) {
                        return RTI_FALSE;
                    }
                } else { 
                    mymsg::msg::dds_::Transform_Seq_set_length(&sample->transform_, 0);
                }
                return RTI_TRUE;
            }

            void MultiTransform__finalize(
                MultiTransform_* sample)
            {

                mymsg::msg::dds_::MultiTransform__finalize_ex(sample,RTI_TRUE);
            }

            void MultiTransform__finalize_ex(
                MultiTransform_* sample,RTIBool deletePointers)
            {
                struct DDS_TypeDeallocationParams_t deallocParams =
                DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

                if (sample==NULL) {
                    return;
                } 

                deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

                mymsg::msg::dds_::MultiTransform__finalize_w_params(
                    sample,&deallocParams);
            }

            void MultiTransform__finalize_w_params(
                MultiTransform_* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
            {

                if (sample==NULL) {
                    return;
                }

                if (deallocParams == NULL) {
                    return;
                }

                mymsg::msg::dds_::Transform_Seq_set_element_deallocation_params(
                    &sample->transform_,deallocParams);
                mymsg::msg::dds_::Transform_Seq_finalize(&sample->transform_);

            }

            void MultiTransform__finalize_optional_members(
                MultiTransform_* sample, RTIBool deletePointers)
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

                {
                    DDS_UnsignedLong i, length;
                    length = mymsg::msg::dds_::Transform_Seq_get_length(
                        &sample->transform_);

                    for (i = 0; i < length; i++) {
                        mymsg::msg::dds_::Transform__finalize_optional_members(
                            mymsg::msg::dds_::Transform_Seq_get_reference(
                                &sample->transform_, i), deallocParams->delete_pointers);
                    }
                }  

            }

            RTIBool MultiTransform__copy(
                MultiTransform_* dst,
                const MultiTransform_* src)
            {
                try {

                    if (dst == NULL || src == NULL) {
                        return RTI_FALSE;
                    }

                    if (!mymsg::msg::dds_::Transform_Seq_copy(&dst->transform_ ,
                    &src->transform_ )) {
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
            * Configure and implement 'MultiTransform_' sequence class.
            */
            #define T MultiTransform_
            #define TSeq MultiTransform_Seq

            #define T_initialize_w_params mymsg::msg::dds_::MultiTransform__initialize_w_params

            #define T_finalize_w_params   mymsg::msg::dds_::MultiTransform__finalize_w_params
            #define T_copy       mymsg::msg::dds_::MultiTransform__copy

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
    } /* namespace msg  */
} /* namespace mymsg  */
