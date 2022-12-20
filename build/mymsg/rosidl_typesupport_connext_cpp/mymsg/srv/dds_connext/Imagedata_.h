

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Imagedata_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Imagedata__328007524_h
#define Imagedata__328007524_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "sensor_msgs/msg/dds_connext/Image_.h"
namespace mymsg {
    namespace srv {
        namespace dds_ {

            extern const char *Imagedata_Request_TYPENAME;

            struct Imagedata_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Imagedata_Request_TypeSupport;
            class Imagedata_Request_DataWriter;
            class Imagedata_Request_DataReader;
            #endif

            class Imagedata_Request_ 
            {
              public:
                typedef struct Imagedata_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Imagedata_Request_TypeSupport TypeSupport;
                typedef Imagedata_Request_DataWriter DataWriter;
                typedef Imagedata_Request_DataReader DataReader;
                #endif

                sensor_msgs::msg::dds_::Image_   input_data_ ;
                DDS_LongLong   input_count_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Imagedata_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Imagedata_Request_Seq, Imagedata_Request_);

            NDDSUSERDllExport
            RTIBool Imagedata_Request__initialize(
                Imagedata_Request_* self);

            NDDSUSERDllExport
            RTIBool Imagedata_Request__initialize_ex(
                Imagedata_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Imagedata_Request__initialize_w_params(
                Imagedata_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Imagedata_Request__finalize(
                Imagedata_Request_* self);

            NDDSUSERDllExport
            void Imagedata_Request__finalize_ex(
                Imagedata_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Imagedata_Request__finalize_w_params(
                Imagedata_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Imagedata_Request__finalize_optional_members(
                Imagedata_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Imagedata_Request__copy(
                Imagedata_Request_* dst,
                const Imagedata_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mymsg  */
namespace mymsg {
    namespace srv {
        namespace dds_ {

            extern const char *Imagedata_Response_TYPENAME;

            struct Imagedata_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Imagedata_Response_TypeSupport;
            class Imagedata_Response_DataWriter;
            class Imagedata_Response_DataReader;
            #endif

            class Imagedata_Response_ 
            {
              public:
                typedef struct Imagedata_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Imagedata_Response_TypeSupport TypeSupport;
                typedef Imagedata_Response_DataWriter DataWriter;
                typedef Imagedata_Response_DataReader DataReader;
                #endif

                DDS_Boolean   output_cut_ ;
                DDS_LongLong   output_count_ ;
                sensor_msgs::msg::dds_::Image_   output_data_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Imagedata_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Imagedata_Response_Seq, Imagedata_Response_);

            NDDSUSERDllExport
            RTIBool Imagedata_Response__initialize(
                Imagedata_Response_* self);

            NDDSUSERDllExport
            RTIBool Imagedata_Response__initialize_ex(
                Imagedata_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Imagedata_Response__initialize_w_params(
                Imagedata_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Imagedata_Response__finalize(
                Imagedata_Response_* self);

            NDDSUSERDllExport
            void Imagedata_Response__finalize_ex(
                Imagedata_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Imagedata_Response__finalize_w_params(
                Imagedata_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Imagedata_Response__finalize_optional_members(
                Imagedata_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Imagedata_Response__copy(
                Imagedata_Response_* dst,
                const Imagedata_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace mymsg  */

#endif /* Imagedata_ */

