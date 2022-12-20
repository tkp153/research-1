

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Poses_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Poses__215316047_h
#define Poses__215316047_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "mymsg/msg/dds_connext/Pose_.h"
#include "std_msgs/msg/dds_connext/Header_.h"
namespace mymsg {
    namespace msg {
        namespace dds_ {

            extern const char *Poses_TYPENAME;

            struct Poses_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Poses_TypeSupport;
            class Poses_DataWriter;
            class Poses_DataReader;
            #endif

            class Poses_ 
            {
              public:
                typedef struct Poses_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Poses_TypeSupport TypeSupport;
                typedef Poses_DataWriter DataWriter;
                typedef Poses_DataReader DataReader;
                #endif

                std_msgs::msg::dds_::Header_   header_ ;
                mymsg::msg::dds_::Pose_Seq  poses_ ;
                DDS_StringSeq  id_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Poses__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Poses_Seq, Poses_);

            NDDSUSERDllExport
            RTIBool Poses__initialize(
                Poses_* self);

            NDDSUSERDllExport
            RTIBool Poses__initialize_ex(
                Poses_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Poses__initialize_w_params(
                Poses_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Poses__finalize(
                Poses_* self);

            NDDSUSERDllExport
            void Poses__finalize_ex(
                Poses_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Poses__finalize_w_params(
                Poses_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Poses__finalize_optional_members(
                Poses_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Poses__copy(
                Poses_* dst,
                const Poses_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace mymsg  */

#endif /* Poses_ */

