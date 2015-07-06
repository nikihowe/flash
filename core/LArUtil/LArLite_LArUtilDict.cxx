// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LArLite_LArUtilDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "ClockConstants.h"
#include "DetectorProperties.h"
#include "ElecClock.h"
#include "Geometry.h"
#include "GeometryUtilities.h"
#include "LArProperties.h"
#include "LArUtil-TypeDef.h"
#include "LArUtilBase.h"
#include "LArUtilConfig.h"
#include "LArUtilConstants.h"
#include "LArUtilException.h"
#include "LArUtilManager.h"
#include "PxUtils.h"
#include "TimeService.h"

// Header files passed via #pragma extra_include

namespace larutil {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larutil_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larutil", 0 /*version*/, "ClockConstants.h", 8,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larutil_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larutil_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *larutilcLcLLArUtilException_Dictionary();
   static void larutilcLcLLArUtilException_TClassManip(TClass*);
   static void *new_larutilcLcLLArUtilException(void *p = 0);
   static void *newArray_larutilcLcLLArUtilException(Long_t size, void *p);
   static void delete_larutilcLcLLArUtilException(void *p);
   static void deleteArray_larutilcLcLLArUtilException(void *p);
   static void destruct_larutilcLcLLArUtilException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::LArUtilException*)
   {
      ::larutil::LArUtilException *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::LArUtilException));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::LArUtilException", "LArUtilException.h", 25,
                  typeid(::larutil::LArUtilException), DefineBehavior(ptr, ptr),
                  &larutilcLcLLArUtilException_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::LArUtilException) );
      instance.SetNew(&new_larutilcLcLLArUtilException);
      instance.SetNewArray(&newArray_larutilcLcLLArUtilException);
      instance.SetDelete(&delete_larutilcLcLLArUtilException);
      instance.SetDeleteArray(&deleteArray_larutilcLcLLArUtilException);
      instance.SetDestructor(&destruct_larutilcLcLLArUtilException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::LArUtilException*)
   {
      return GenerateInitInstanceLocal((::larutil::LArUtilException*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::LArUtilException*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLLArUtilException_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::LArUtilException*)0x0)->GetClass();
      larutilcLcLLArUtilException_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLLArUtilException_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLGeometry_Dictionary();
   static void larutilcLcLGeometry_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::Geometry*)
   {
      ::larutil::Geometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::Geometry));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::Geometry", "Geometry.h", 26,
                  typeid(::larutil::Geometry), DefineBehavior(ptr, ptr),
                  &larutilcLcLGeometry_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::Geometry) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::Geometry*)
   {
      return GenerateInitInstanceLocal((::larutil::Geometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::Geometry*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLGeometry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::Geometry*)0x0)->GetClass();
      larutilcLcLGeometry_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLGeometry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLLArProperties_Dictionary();
   static void larutilcLcLLArProperties_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::LArProperties*)
   {
      ::larutil::LArProperties *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::LArProperties));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::LArProperties", "LArProperties.h", 29,
                  typeid(::larutil::LArProperties), DefineBehavior(ptr, ptr),
                  &larutilcLcLLArProperties_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::LArProperties) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::LArProperties*)
   {
      return GenerateInitInstanceLocal((::larutil::LArProperties*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::LArProperties*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLLArProperties_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::LArProperties*)0x0)->GetClass();
      larutilcLcLLArProperties_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLLArProperties_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLDetectorProperties_Dictionary();
   static void larutilcLcLDetectorProperties_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::DetectorProperties*)
   {
      ::larutil::DetectorProperties *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::DetectorProperties));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::DetectorProperties", "DetectorProperties.h", 27,
                  typeid(::larutil::DetectorProperties), DefineBehavior(ptr, ptr),
                  &larutilcLcLDetectorProperties_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::DetectorProperties) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::DetectorProperties*)
   {
      return GenerateInitInstanceLocal((::larutil::DetectorProperties*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::DetectorProperties*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLDetectorProperties_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::DetectorProperties*)0x0)->GetClass();
      larutilcLcLDetectorProperties_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLDetectorProperties_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLGeometryUtilities_Dictionary();
   static void larutilcLcLGeometryUtilities_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::GeometryUtilities*)
   {
      ::larutil::GeometryUtilities *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::GeometryUtilities));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::GeometryUtilities", "GeometryUtilities.h", 27,
                  typeid(::larutil::GeometryUtilities), DefineBehavior(ptr, ptr),
                  &larutilcLcLGeometryUtilities_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::GeometryUtilities) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::GeometryUtilities*)
   {
      return GenerateInitInstanceLocal((::larutil::GeometryUtilities*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::GeometryUtilities*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLGeometryUtilities_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::GeometryUtilities*)0x0)->GetClass();
      larutilcLcLGeometryUtilities_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLGeometryUtilities_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLTimeService_Dictionary();
   static void larutilcLcLTimeService_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::TimeService*)
   {
      ::larutil::TimeService *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::TimeService));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::TimeService", "TimeService.h", 26,
                  typeid(::larutil::TimeService), DefineBehavior(ptr, ptr),
                  &larutilcLcLTimeService_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::TimeService) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::TimeService*)
   {
      return GenerateInitInstanceLocal((::larutil::TimeService*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::TimeService*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLTimeService_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::TimeService*)0x0)->GetClass();
      larutilcLcLTimeService_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLTimeService_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLElecClock_Dictionary();
   static void larutilcLcLElecClock_TClassManip(TClass*);
   static void *new_larutilcLcLElecClock(void *p = 0);
   static void *newArray_larutilcLcLElecClock(Long_t size, void *p);
   static void delete_larutilcLcLElecClock(void *p);
   static void deleteArray_larutilcLcLElecClock(void *p);
   static void destruct_larutilcLcLElecClock(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::ElecClock*)
   {
      ::larutil::ElecClock *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::ElecClock));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::ElecClock", "ElecClock.h", 26,
                  typeid(::larutil::ElecClock), DefineBehavior(ptr, ptr),
                  &larutilcLcLElecClock_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::ElecClock) );
      instance.SetNew(&new_larutilcLcLElecClock);
      instance.SetNewArray(&newArray_larutilcLcLElecClock);
      instance.SetDelete(&delete_larutilcLcLElecClock);
      instance.SetDeleteArray(&deleteArray_larutilcLcLElecClock);
      instance.SetDestructor(&destruct_larutilcLcLElecClock);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::ElecClock*)
   {
      return GenerateInitInstanceLocal((::larutil::ElecClock*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::ElecClock*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLElecClock_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::ElecClock*)0x0)->GetClass();
      larutilcLcLElecClock_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLElecClock_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLPxPoint_Dictionary();
   static void larutilcLcLPxPoint_TClassManip(TClass*);
   static void *new_larutilcLcLPxPoint(void *p = 0);
   static void *newArray_larutilcLcLPxPoint(Long_t size, void *p);
   static void delete_larutilcLcLPxPoint(void *p);
   static void deleteArray_larutilcLcLPxPoint(void *p);
   static void destruct_larutilcLcLPxPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::PxPoint*)
   {
      ::larutil::PxPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::PxPoint));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::PxPoint", "PxUtils.h", 7,
                  typeid(::larutil::PxPoint), DefineBehavior(ptr, ptr),
                  &larutilcLcLPxPoint_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::PxPoint) );
      instance.SetNew(&new_larutilcLcLPxPoint);
      instance.SetNewArray(&newArray_larutilcLcLPxPoint);
      instance.SetDelete(&delete_larutilcLcLPxPoint);
      instance.SetDeleteArray(&deleteArray_larutilcLcLPxPoint);
      instance.SetDestructor(&destruct_larutilcLcLPxPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::PxPoint*)
   {
      return GenerateInitInstanceLocal((::larutil::PxPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::PxPoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLPxPoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::PxPoint*)0x0)->GetClass();
      larutilcLcLPxPoint_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLPxPoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLPxLine_Dictionary();
   static void larutilcLcLPxLine_TClassManip(TClass*);
   static void *new_larutilcLcLPxLine(void *p = 0);
   static void *newArray_larutilcLcLPxLine(Long_t size, void *p);
   static void delete_larutilcLcLPxLine(void *p);
   static void deleteArray_larutilcLcLPxLine(void *p);
   static void destruct_larutilcLcLPxLine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::PxLine*)
   {
      ::larutil::PxLine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::PxLine));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::PxLine", "PxUtils.h", 57,
                  typeid(::larutil::PxLine), DefineBehavior(ptr, ptr),
                  &larutilcLcLPxLine_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::PxLine) );
      instance.SetNew(&new_larutilcLcLPxLine);
      instance.SetNewArray(&newArray_larutilcLcLPxLine);
      instance.SetDelete(&delete_larutilcLcLPxLine);
      instance.SetDeleteArray(&deleteArray_larutilcLcLPxLine);
      instance.SetDestructor(&destruct_larutilcLcLPxLine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::PxLine*)
   {
      return GenerateInitInstanceLocal((::larutil::PxLine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::PxLine*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLPxLine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::PxLine*)0x0)->GetClass();
      larutilcLcLPxLine_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLPxLine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLPxHit_Dictionary();
   static void larutilcLcLPxHit_TClassManip(TClass*);
   static void *new_larutilcLcLPxHit(void *p = 0);
   static void *newArray_larutilcLcLPxHit(Long_t size, void *p);
   static void delete_larutilcLcLPxHit(void *p);
   static void deleteArray_larutilcLcLPxHit(void *p);
   static void destruct_larutilcLcLPxHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::PxHit*)
   {
      ::larutil::PxHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::PxHit));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::PxHit", "PxUtils.h", 34,
                  typeid(::larutil::PxHit), DefineBehavior(ptr, ptr),
                  &larutilcLcLPxHit_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::PxHit) );
      instance.SetNew(&new_larutilcLcLPxHit);
      instance.SetNewArray(&newArray_larutilcLcLPxHit);
      instance.SetDelete(&delete_larutilcLcLPxHit);
      instance.SetDeleteArray(&deleteArray_larutilcLcLPxHit);
      instance.SetDestructor(&destruct_larutilcLcLPxHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::PxHit*)
   {
      return GenerateInitInstanceLocal((::larutil::PxHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::PxHit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLPxHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::PxHit*)0x0)->GetClass();
      larutilcLcLPxHit_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLPxHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLLArUtilConfig_Dictionary();
   static void larutilcLcLLArUtilConfig_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::LArUtilConfig*)
   {
      ::larutil::LArUtilConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::LArUtilConfig));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::LArUtilConfig", "LArUtilConfig.h", 27,
                  typeid(::larutil::LArUtilConfig), DefineBehavior(ptr, ptr),
                  &larutilcLcLLArUtilConfig_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::LArUtilConfig) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::LArUtilConfig*)
   {
      return GenerateInitInstanceLocal((::larutil::LArUtilConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::LArUtilConfig*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLLArUtilConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::LArUtilConfig*)0x0)->GetClass();
      larutilcLcLLArUtilConfig_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLLArUtilConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larutilcLcLLArUtilManager_Dictionary();
   static void larutilcLcLLArUtilManager_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larutil::LArUtilManager*)
   {
      ::larutil::LArUtilManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larutil::LArUtilManager));
      static ::ROOT::TGenericClassInfo 
         instance("larutil::LArUtilManager", "LArUtilManager.h", 29,
                  typeid(::larutil::LArUtilManager), DefineBehavior(ptr, ptr),
                  &larutilcLcLLArUtilManager_Dictionary, isa_proxy, 4,
                  sizeof(::larutil::LArUtilManager) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larutil::LArUtilManager*)
   {
      return GenerateInitInstanceLocal((::larutil::LArUtilManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larutil::LArUtilManager*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larutilcLcLLArUtilManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larutil::LArUtilManager*)0x0)->GetClass();
      larutilcLcLLArUtilManager_TClassManip(theClass);
   return theClass;
   }

   static void larutilcLcLLArUtilManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larutilcLcLLArUtilException(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::LArUtilException : new ::larutil::LArUtilException;
   }
   static void *newArray_larutilcLcLLArUtilException(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::LArUtilException[nElements] : new ::larutil::LArUtilException[nElements];
   }
   // Wrapper around operator delete
   static void delete_larutilcLcLLArUtilException(void *p) {
      delete ((::larutil::LArUtilException*)p);
   }
   static void deleteArray_larutilcLcLLArUtilException(void *p) {
      delete [] ((::larutil::LArUtilException*)p);
   }
   static void destruct_larutilcLcLLArUtilException(void *p) {
      typedef ::larutil::LArUtilException current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larutil::LArUtilException

namespace ROOT {
} // end of namespace ROOT for class ::larutil::Geometry

namespace ROOT {
} // end of namespace ROOT for class ::larutil::LArProperties

namespace ROOT {
} // end of namespace ROOT for class ::larutil::DetectorProperties

namespace ROOT {
} // end of namespace ROOT for class ::larutil::GeometryUtilities

namespace ROOT {
} // end of namespace ROOT for class ::larutil::TimeService

namespace ROOT {
   // Wrappers around operator new
   static void *new_larutilcLcLElecClock(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::ElecClock : new ::larutil::ElecClock;
   }
   static void *newArray_larutilcLcLElecClock(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::ElecClock[nElements] : new ::larutil::ElecClock[nElements];
   }
   // Wrapper around operator delete
   static void delete_larutilcLcLElecClock(void *p) {
      delete ((::larutil::ElecClock*)p);
   }
   static void deleteArray_larutilcLcLElecClock(void *p) {
      delete [] ((::larutil::ElecClock*)p);
   }
   static void destruct_larutilcLcLElecClock(void *p) {
      typedef ::larutil::ElecClock current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larutil::ElecClock

namespace ROOT {
   // Wrappers around operator new
   static void *new_larutilcLcLPxPoint(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::PxPoint : new ::larutil::PxPoint;
   }
   static void *newArray_larutilcLcLPxPoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::PxPoint[nElements] : new ::larutil::PxPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_larutilcLcLPxPoint(void *p) {
      delete ((::larutil::PxPoint*)p);
   }
   static void deleteArray_larutilcLcLPxPoint(void *p) {
      delete [] ((::larutil::PxPoint*)p);
   }
   static void destruct_larutilcLcLPxPoint(void *p) {
      typedef ::larutil::PxPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larutil::PxPoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_larutilcLcLPxLine(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::PxLine : new ::larutil::PxLine;
   }
   static void *newArray_larutilcLcLPxLine(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::PxLine[nElements] : new ::larutil::PxLine[nElements];
   }
   // Wrapper around operator delete
   static void delete_larutilcLcLPxLine(void *p) {
      delete ((::larutil::PxLine*)p);
   }
   static void deleteArray_larutilcLcLPxLine(void *p) {
      delete [] ((::larutil::PxLine*)p);
   }
   static void destruct_larutilcLcLPxLine(void *p) {
      typedef ::larutil::PxLine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larutil::PxLine

namespace ROOT {
   // Wrappers around operator new
   static void *new_larutilcLcLPxHit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::PxHit : new ::larutil::PxHit;
   }
   static void *newArray_larutilcLcLPxHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larutil::PxHit[nElements] : new ::larutil::PxHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larutilcLcLPxHit(void *p) {
      delete ((::larutil::PxHit*)p);
   }
   static void deleteArray_larutilcLcLPxHit(void *p) {
      delete [] ((::larutil::PxHit*)p);
   }
   static void destruct_larutilcLcLPxHit(void *p) {
      typedef ::larutil::PxHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larutil::PxHit

namespace ROOT {
} // end of namespace ROOT for class ::larutil::LArUtilConfig

namespace ROOT {
} // end of namespace ROOT for class ::larutil::LArUtilManager

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<double> > >*)
   {
      vector<vector<vector<double> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<double> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<double> > >", -2, "vector", 477,
                  typeid(vector<vector<vector<double> > >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<vector<double> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<double> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<double> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEdoublegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<double> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEdoublegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<vector<double> > > : new vector<vector<vector<double> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<vector<double> > >[nElements] : new vector<vector<vector<double> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<double> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<double> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEdoublegRsPgRsPgR(void *p) {
      typedef vector<vector<vector<double> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<double> > >

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPshortgRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPshortgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEunsignedsPshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPshortgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPshortgRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned short> >*)
   {
      vector<vector<unsigned short> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned short> >", -2, "vector", 477,
                  typeid(vector<vector<unsigned short> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPshortgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<unsigned short> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned short> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned short> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned short> >*)0x0)->GetClass();
      vectorlEvectorlEunsignedsPshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<unsigned short> > : new vector<vector<unsigned short> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<unsigned short> >[nElements] : new vector<vector<unsigned short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      delete ((vector<vector<unsigned short> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      delete [] ((vector<vector<unsigned short> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPshortgRsPgR(void *p) {
      typedef vector<vector<unsigned short> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned short> >

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 477,
                  typeid(vector<vector<float> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

namespace ROOT {
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary();
   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p);
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<double> >*)
   {
      vector<vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<double> >", -2, "vector", 477,
                  typeid(vector<vector<double> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<double> >) );
      instance.SetNew(&new_vectorlEvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<double> >*)0x0)->GetClass();
      vectorlEvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<double> > : new vector<vector<double> >;
   }
   static void *newArray_vectorlEvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<double> >[nElements] : new vector<vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete ((vector<vector<double> >*)p);
   }
   static void deleteArray_vectorlEvectorlEdoublegRsPgR(void *p) {
      delete [] ((vector<vector<double> >*)p);
   }
   static void destruct_vectorlEvectorlEdoublegRsPgR(void *p) {
      typedef vector<vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<double> >

namespace ROOT {
   static TClass *vectorlEunsignedsPshortgR_Dictionary();
   static void vectorlEunsignedsPshortgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPshortgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPshortgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPshortgR(void *p);
   static void deleteArray_vectorlEunsignedsPshortgR(void *p);
   static void destruct_vectorlEunsignedsPshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned short>*)
   {
      vector<unsigned short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned short>", -2, "vector", 477,
                  typeid(vector<unsigned short>), DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned short>) );
      instance.SetNew(&new_vectorlEunsignedsPshortgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPshortgR);
      instance.SetDelete(&delete_vectorlEunsignedsPshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPshortgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned short>*)0x0)->GetClass();
      vectorlEunsignedsPshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPshortgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned short> : new vector<unsigned short>;
   }
   static void *newArray_vectorlEunsignedsPshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned short>[nElements] : new vector<unsigned short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPshortgR(void *p) {
      delete ((vector<unsigned short>*)p);
   }
   static void deleteArray_vectorlEunsignedsPshortgR(void *p) {
      delete [] ((vector<unsigned short>*)p);
   }
   static void destruct_vectorlEunsignedsPshortgR(void *p) {
      typedef vector<unsigned short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned short>

namespace ROOT {
   static TClass *vectorlEunsignedsPchargR_Dictionary();
   static void vectorlEunsignedsPchargR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPchargR(void *p = 0);
   static void *newArray_vectorlEunsignedsPchargR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPchargR(void *p);
   static void deleteArray_vectorlEunsignedsPchargR(void *p);
   static void destruct_vectorlEunsignedsPchargR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned char>*)
   {
      vector<unsigned char> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned char>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned char>", -2, "vector", 477,
                  typeid(vector<unsigned char>), DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPchargR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned char>) );
      instance.SetNew(&new_vectorlEunsignedsPchargR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPchargR);
      instance.SetDelete(&delete_vectorlEunsignedsPchargR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPchargR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPchargR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned char> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned char>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPchargR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned char>*)0x0)->GetClass();
      vectorlEunsignedsPchargR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPchargR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPchargR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned char> : new vector<unsigned char>;
   }
   static void *newArray_vectorlEunsignedsPchargR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned char>[nElements] : new vector<unsigned char>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPchargR(void *p) {
      delete ((vector<unsigned char>*)p);
   }
   static void deleteArray_vectorlEunsignedsPchargR(void *p) {
      delete [] ((vector<unsigned char>*)p);
   }
   static void destruct_vectorlEunsignedsPchargR(void *p) {
      typedef vector<unsigned char> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned char>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 477,
                  typeid(vector<string>), DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlElarlitecLcLgeocLcLView_tgR_Dictionary();
   static void vectorlElarlitecLcLgeocLcLView_tgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLgeocLcLView_tgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLgeocLcLView_tgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLgeocLcLView_tgR(void *p);
   static void deleteArray_vectorlElarlitecLcLgeocLcLView_tgR(void *p);
   static void destruct_vectorlElarlitecLcLgeocLcLView_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::geo::View_t>*)
   {
      vector<larlite::geo::View_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::geo::View_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::geo::View_t>", -2, "vector", 477,
                  typeid(vector<larlite::geo::View_t>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLgeocLcLView_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<larlite::geo::View_t>) );
      instance.SetNew(&new_vectorlElarlitecLcLgeocLcLView_tgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLgeocLcLView_tgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLgeocLcLView_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLgeocLcLView_tgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLgeocLcLView_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::geo::View_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::geo::View_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLgeocLcLView_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::geo::View_t>*)0x0)->GetClass();
      vectorlElarlitecLcLgeocLcLView_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLgeocLcLView_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLgeocLcLView_tgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::geo::View_t> : new vector<larlite::geo::View_t>;
   }
   static void *newArray_vectorlElarlitecLcLgeocLcLView_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::geo::View_t>[nElements] : new vector<larlite::geo::View_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLgeocLcLView_tgR(void *p) {
      delete ((vector<larlite::geo::View_t>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLgeocLcLView_tgR(void *p) {
      delete [] ((vector<larlite::geo::View_t>*)p);
   }
   static void destruct_vectorlElarlitecLcLgeocLcLView_tgR(void *p) {
      typedef vector<larlite::geo::View_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::geo::View_t>

namespace ROOT {
   static TClass *vectorlElarlitecLcLgeocLcLSigType_tgR_Dictionary();
   static void vectorlElarlitecLcLgeocLcLSigType_tgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLgeocLcLSigType_tgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p);
   static void deleteArray_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p);
   static void destruct_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::geo::SigType_t>*)
   {
      vector<larlite::geo::SigType_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::geo::SigType_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::geo::SigType_t>", -2, "vector", 477,
                  typeid(vector<larlite::geo::SigType_t>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLgeocLcLSigType_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<larlite::geo::SigType_t>) );
      instance.SetNew(&new_vectorlElarlitecLcLgeocLcLSigType_tgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLgeocLcLSigType_tgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLgeocLcLSigType_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLgeocLcLSigType_tgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLgeocLcLSigType_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::geo::SigType_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::geo::SigType_t>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLgeocLcLSigType_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::geo::SigType_t>*)0x0)->GetClass();
      vectorlElarlitecLcLgeocLcLSigType_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLgeocLcLSigType_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::geo::SigType_t> : new vector<larlite::geo::SigType_t>;
   }
   static void *newArray_vectorlElarlitecLcLgeocLcLSigType_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::geo::SigType_t>[nElements] : new vector<larlite::geo::SigType_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p) {
      delete ((vector<larlite::geo::SigType_t>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p) {
      delete [] ((vector<larlite::geo::SigType_t>*)p);
   }
   static void destruct_vectorlElarlitecLcLgeocLcLSigType_tgR(void *p) {
      typedef vector<larlite::geo::SigType_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::geo::SigType_t>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 477,
                  typeid(vector<float>), DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 477,
                  typeid(vector<double>), DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libLArLite_LArUtil_Impl() {
    static const char* headers[] = {
"ClockConstants.h",
"DetectorProperties.h",
"ElecClock.h",
"Geometry.h",
"GeometryUtilities.h",
"LArProperties.h",
"LArUtil-TypeDef.h",
"LArUtilBase.h",
"LArUtilConfig.h",
"LArUtilConstants.h",
"LArUtilException.h",
"LArUtilManager.h",
"PxUtils.h",
"TimeService.h",
0
    };
    static const char* includePaths[] = {
"/Users/niki/play0/larlite/core",
"/Applications/BasicSoftware/v6_04_00/include",
"/Users/niki/play0/larlite/core/LArUtil/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
namespace larutil{class __attribute__((annotate("$clingAutoload$DetectorProperties.h")))  LArUtilException;}
namespace larutil{class __attribute__((annotate("$clingAutoload$Geometry.h")))  Geometry;}
namespace larutil{class __attribute__((annotate("$clingAutoload$GeometryUtilities.h")))  LArProperties;}
namespace larutil{class __attribute__((annotate("$clingAutoload$DetectorProperties.h")))  DetectorProperties;}
namespace larutil{class __attribute__((annotate("$clingAutoload$GeometryUtilities.h")))  GeometryUtilities;}
namespace larutil{class __attribute__((annotate("$clingAutoload$TimeService.h")))  TimeService;}
namespace larutil{class __attribute__((annotate("$clingAutoload$ElecClock.h")))  ElecClock;}
namespace larutil{class __attribute__((annotate("$clingAutoload$GeometryUtilities.h")))  PxPoint;}
namespace larutil{class __attribute__((annotate("$clingAutoload$GeometryUtilities.h")))  PxLine;}
namespace larutil{class __attribute__((annotate("$clingAutoload$GeometryUtilities.h")))  PxHit;}
namespace larutil{class __attribute__((annotate("$clingAutoload$DetectorProperties.h")))  LArUtilConfig;}
namespace larutil{class __attribute__((annotate("$clingAutoload$LArUtilManager.h")))  LArUtilManager;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "ClockConstants.h"
#include "DetectorProperties.h"
#include "ElecClock.h"
#include "Geometry.h"
#include "GeometryUtilities.h"
#include "LArProperties.h"
#include "LArUtil-TypeDef.h"
#include "LArUtilBase.h"
#include "LArUtilConfig.h"
#include "LArUtilConstants.h"
#include "LArUtilException.h"
#include "LArUtilManager.h"
#include "PxUtils.h"
#include "TimeService.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larutil::DetectorProperties", payloadCode, "@",
"larutil::ElecClock", payloadCode, "@",
"larutil::Geometry", payloadCode, "@",
"larutil::GeometryUtilities", payloadCode, "@",
"larutil::LArProperties", payloadCode, "@",
"larutil::LArUtilConfig", payloadCode, "@",
"larutil::LArUtilException", payloadCode, "@",
"larutil::LArUtilManager", payloadCode, "@",
"larutil::PxHit", payloadCode, "@",
"larutil::PxLine", payloadCode, "@",
"larutil::PxPoint", payloadCode, "@",
"larutil::TimeService", payloadCode, "@",
"vector<std::vector<Float_t> >", payloadCode, "@",
"vector<std::vector<std::vector<Double_t> > >", payloadCode, "@",
"vector<vector<float> >", payloadCode, "@",
"vector<vector<vector<double> > >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLArLite_LArUtil",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLArLite_LArUtil_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLArLite_LArUtil_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLArLite_LArUtil() {
  TriggerDictionaryInitialization_libLArLite_LArUtil_Impl();
}
