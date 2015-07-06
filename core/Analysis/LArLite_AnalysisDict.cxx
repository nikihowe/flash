// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LArLite_AnalysisDict

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
#include "Analysis-TypeDef.h"
#include "ana_base.h"
#include "ana_processor.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *larlitecLcLana_base_Dictionary();
   static void larlitecLcLana_base_TClassManip(TClass*);
   static void *new_larlitecLcLana_base(void *p = 0);
   static void *newArray_larlitecLcLana_base(Long_t size, void *p);
   static void delete_larlitecLcLana_base(void *p);
   static void deleteArray_larlitecLcLana_base(void *p);
   static void destruct_larlitecLcLana_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ana_base*)
   {
      ::larlite::ana_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ana_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ana_base", "ana_base.h", 28,
                  typeid(::larlite::ana_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLana_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ana_base) );
      instance.SetNew(&new_larlitecLcLana_base);
      instance.SetNewArray(&newArray_larlitecLcLana_base);
      instance.SetDelete(&delete_larlitecLcLana_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLana_base);
      instance.SetDestructor(&destruct_larlitecLcLana_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ana_base*)
   {
      return GenerateInitInstanceLocal((::larlite::ana_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ana_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLana_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ana_base*)0x0)->GetClass();
      larlitecLcLana_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLana_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLana_processor_Dictionary();
   static void larlitecLcLana_processor_TClassManip(TClass*);
   static void *new_larlitecLcLana_processor(void *p = 0);
   static void *newArray_larlitecLcLana_processor(Long_t size, void *p);
   static void delete_larlitecLcLana_processor(void *p);
   static void deleteArray_larlitecLcLana_processor(void *p);
   static void destruct_larlitecLcLana_processor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ana_processor*)
   {
      ::larlite::ana_processor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ana_processor));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ana_processor", "ana_processor.h", 27,
                  typeid(::larlite::ana_processor), DefineBehavior(ptr, ptr),
                  &larlitecLcLana_processor_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ana_processor) );
      instance.SetNew(&new_larlitecLcLana_processor);
      instance.SetNewArray(&newArray_larlitecLcLana_processor);
      instance.SetDelete(&delete_larlitecLcLana_processor);
      instance.SetDeleteArray(&deleteArray_larlitecLcLana_processor);
      instance.SetDestructor(&destruct_larlitecLcLana_processor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ana_processor*)
   {
      return GenerateInitInstanceLocal((::larlite::ana_processor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ana_processor*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLana_processor_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ana_processor*)0x0)->GetClass();
      larlitecLcLana_processor_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLana_processor_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLana_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ana_base : new ::larlite::ana_base;
   }
   static void *newArray_larlitecLcLana_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ana_base[nElements] : new ::larlite::ana_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLana_base(void *p) {
      delete ((::larlite::ana_base*)p);
   }
   static void deleteArray_larlitecLcLana_base(void *p) {
      delete [] ((::larlite::ana_base*)p);
   }
   static void destruct_larlitecLcLana_base(void *p) {
      typedef ::larlite::ana_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ana_base

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLana_processor(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ana_processor : new ::larlite::ana_processor;
   }
   static void *newArray_larlitecLcLana_processor(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ana_processor[nElements] : new ::larlite::ana_processor[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLana_processor(void *p) {
      delete ((::larlite::ana_processor*)p);
   }
   static void deleteArray_larlitecLcLana_processor(void *p) {
      delete [] ((::larlite::ana_processor*)p);
   }
   static void destruct_larlitecLcLana_processor(void *p) {
      typedef ::larlite::ana_processor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ana_processor

namespace ROOT {
   static TClass *vectorlElarlitecLcLana_basemUgR_Dictionary();
   static void vectorlElarlitecLcLana_basemUgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLana_basemUgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLana_basemUgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLana_basemUgR(void *p);
   static void deleteArray_vectorlElarlitecLcLana_basemUgR(void *p);
   static void destruct_vectorlElarlitecLcLana_basemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::ana_base*>*)
   {
      vector<larlite::ana_base*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::ana_base*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::ana_base*>", -2, "vector", 477,
                  typeid(vector<larlite::ana_base*>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLana_basemUgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::ana_base*>) );
      instance.SetNew(&new_vectorlElarlitecLcLana_basemUgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLana_basemUgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLana_basemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLana_basemUgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLana_basemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::ana_base*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::ana_base*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLana_basemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::ana_base*>*)0x0)->GetClass();
      vectorlElarlitecLcLana_basemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLana_basemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLana_basemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::ana_base*> : new vector<larlite::ana_base*>;
   }
   static void *newArray_vectorlElarlitecLcLana_basemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::ana_base*>[nElements] : new vector<larlite::ana_base*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLana_basemUgR(void *p) {
      delete ((vector<larlite::ana_base*>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLana_basemUgR(void *p) {
      delete [] ((vector<larlite::ana_base*>*)p);
   }
   static void destruct_vectorlElarlitecLcLana_basemUgR(void *p) {
      typedef vector<larlite::ana_base*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::ana_base*>

namespace ROOT {
   static TClass *vectorlEboolgR_Dictionary();
   static void vectorlEboolgR_TClassManip(TClass*);
   static void *new_vectorlEboolgR(void *p = 0);
   static void *newArray_vectorlEboolgR(Long_t size, void *p);
   static void delete_vectorlEboolgR(void *p);
   static void deleteArray_vectorlEboolgR(void *p);
   static void destruct_vectorlEboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<bool>*)
   {
      vector<bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<bool>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<bool>", -2, "vector", 2092,
                  typeid(vector<bool>), DefineBehavior(ptr, ptr),
                  &vectorlEboolgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<bool>) );
      instance.SetNew(&new_vectorlEboolgR);
      instance.SetNewArray(&newArray_vectorlEboolgR);
      instance.SetDelete(&delete_vectorlEboolgR);
      instance.SetDeleteArray(&deleteArray_vectorlEboolgR);
      instance.SetDestructor(&destruct_vectorlEboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<bool>*)0x0)->GetClass();
      vectorlEboolgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEboolgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<bool> : new vector<bool>;
   }
   static void *newArray_vectorlEboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<bool>[nElements] : new vector<bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEboolgR(void *p) {
      delete ((vector<bool>*)p);
   }
   static void deleteArray_vectorlEboolgR(void *p) {
      delete [] ((vector<bool>*)p);
   }
   static void destruct_vectorlEboolgR(void *p) {
      typedef vector<bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<bool>

namespace ROOT {
   static TClass *maplElarlitecLcLana_basemUcOunsignedsPlonggR_Dictionary();
   static void maplElarlitecLcLana_basemUcOunsignedsPlonggR_TClassManip(TClass*);
   static void *new_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p = 0);
   static void *newArray_maplElarlitecLcLana_basemUcOunsignedsPlonggR(Long_t size, void *p);
   static void delete_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p);
   static void deleteArray_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p);
   static void destruct_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<larlite::ana_base*,unsigned long>*)
   {
      map<larlite::ana_base*,unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<larlite::ana_base*,unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<larlite::ana_base*,unsigned long>", -2, "map", 783,
                  typeid(map<larlite::ana_base*,unsigned long>), DefineBehavior(ptr, ptr),
                  &maplElarlitecLcLana_basemUcOunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(map<larlite::ana_base*,unsigned long>) );
      instance.SetNew(&new_maplElarlitecLcLana_basemUcOunsignedsPlonggR);
      instance.SetNewArray(&newArray_maplElarlitecLcLana_basemUcOunsignedsPlonggR);
      instance.SetDelete(&delete_maplElarlitecLcLana_basemUcOunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_maplElarlitecLcLana_basemUcOunsignedsPlonggR);
      instance.SetDestructor(&destruct_maplElarlitecLcLana_basemUcOunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<larlite::ana_base*,unsigned long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<larlite::ana_base*,unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElarlitecLcLana_basemUcOunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<larlite::ana_base*,unsigned long>*)0x0)->GetClass();
      maplElarlitecLcLana_basemUcOunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplElarlitecLcLana_basemUcOunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::ana_base*,unsigned long> : new map<larlite::ana_base*,unsigned long>;
   }
   static void *newArray_maplElarlitecLcLana_basemUcOunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::ana_base*,unsigned long>[nElements] : new map<larlite::ana_base*,unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p) {
      delete ((map<larlite::ana_base*,unsigned long>*)p);
   }
   static void deleteArray_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p) {
      delete [] ((map<larlite::ana_base*,unsigned long>*)p);
   }
   static void destruct_maplElarlitecLcLana_basemUcOunsignedsPlonggR(void *p) {
      typedef map<larlite::ana_base*,unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<larlite::ana_base*,unsigned long>

namespace {
  void TriggerDictionaryInitialization_libLArLite_Analysis_Impl() {
    static const char* headers[] = {
"Analysis-TypeDef.h",
"ana_base.h",
"ana_processor.h",
0
    };
    static const char* includePaths[] = {
"/Users/niki/play0/larlite/core",
"/Applications/BasicSoftware/v6_04_00/include",
"/Users/niki/play0/larlite/core/Analysis/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace larlite{class __attribute__((annotate("$clingAutoload$ana_base.h")))  ana_base;}
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
namespace larlite{class __attribute__((annotate("$clingAutoload$ana_processor.h")))  ana_processor;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Analysis-TypeDef.h"
#include "ana_base.h"
#include "ana_processor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larlite::ana_base", payloadCode, "@",
"larlite::ana_processor", payloadCode, "@",
"vector<larlite::ana_base*>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLArLite_Analysis",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLArLite_Analysis_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLArLite_Analysis_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLArLite_Analysis() {
  TriggerDictionaryInitialization_libLArLite_Analysis_Impl();
}
