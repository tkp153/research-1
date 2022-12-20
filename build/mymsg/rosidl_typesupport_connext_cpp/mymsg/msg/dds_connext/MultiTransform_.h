

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from MultiTransform_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef MultiTransform__740058191_h
#define MultiTransform__740058191_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mymsg/msg/dds_connext/Transform_.h"
namespace mymsg {
    namespace msg {
        namespace dds_ {

            extern const char *MultiTransform_TYPENAME;

            struct MultiTransform_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class MultiTransform_TypeSupport;
            class MultiTransform_DataWriter;
            class MultiTransform_DataReader;
            #endif

            class MultiTransform_ 
            {
              public:
                typedef struct MultiTransform_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef MultiTransform_TypeSupport TypeSupport;
                typedef MultiTransform_DataWriter DataWriter;
                typedef MultiTransform_DataReader DataReader;
                #endif

                mymsg::msg::dds_::Transform_Seq  transform_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* MultiTransform__get_typecode(void); /* Type code */

            DDS_SEQUENCE(MultiTransform_Seq, MultiTransform_);

            NDDSUSERDllExport
            RTIBool MultiTransform__initialize(
                MultiTransform_* self);

            NDDSUSERDllExport
            RTIBool MultiTransform__initialize_ex(
                MultiTransform_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool MultiTransform__initialize_w_params(
                MultiTransform_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void MultiTransform__finalize(
                MultiTransform_* self);

            NDDSUSERDllExport
            void MultiTransform__finalize_ex(
                MultiTransform_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void MultiTransform__finalize_w_params(
                MultiTransform_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void MultiTransform__finalize_optional_members(
                MultiTransform_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool MultiTransform__copy(
                MultiTransform_* dst,
                const MultiTransform_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsg  */

#endif /* MultiTransform_ */

