// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LArLite_BaseDict

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
#include "AnalysisConstants.h"
#include "Base-TypeDef.h"
#include "DataFormatConstants.h"
#include "FEMConstants.h"
#include "FrameworkConstants.h"
#include "GeoConstants.h"
#include "GeoTypes.h"
#include "MCConstants.h"
#include "RawConstants.h"
#include "larlite_base.h"
#include "messenger.h"

// Header files passed via #pragma extra_include

namespace larlite {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larlite_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larlite", 0 /*version*/, "AnalysisConstants.h", 4,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larlite_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larlite_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace larlite {
namespace anab {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larlitecLcLanab_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larlite::anab", 0 /*version*/, "AnalysisConstants.h", 6,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larlitecLcLanab_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larlitecLcLanab_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace larlite {
namespace data {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larlitecLcLdata_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larlite::data", 0 /*version*/, "DataFormatConstants.h", 27,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larlitecLcLdata_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larlitecLcLdata_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace larlite {
namespace msg {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larlitecLcLmsg_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larlite::msg", 0 /*version*/, "FrameworkConstants.h", 23,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larlitecLcLmsg_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larlitecLcLmsg_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace larlite {
namespace geo {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larlitecLcLgeo_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larlite::geo", 0 /*version*/, "GeoConstants.h", 22,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larlitecLcLgeo_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larlitecLcLgeo_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace larlite {
namespace simb {
   namespace ROOT {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *larlitecLcLsimb_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("larlite::simb", 0 /*version*/, "MCConstants.h", 23,
                     ::ROOT::DefineBehavior((void*)0,(void*)0),
                     &larlitecLcLsimb_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *larlitecLcLsimb_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}
}

namespace ROOT {
   static TClass *larlitecLcLgeocLcLTPCID_Dictionary();
   static void larlitecLcLgeocLcLTPCID_TClassManip(TClass*);
   static void *new_larlitecLcLgeocLcLTPCID(void *p = 0);
   static void *newArray_larlitecLcLgeocLcLTPCID(Long_t size, void *p);
   static void delete_larlitecLcLgeocLcLTPCID(void *p);
   static void deleteArray_larlitecLcLgeocLcLTPCID(void *p);
   static void destruct_larlitecLcLgeocLcLTPCID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::geo::TPCID*)
   {
      ::larlite::geo::TPCID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::geo::TPCID));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::geo::TPCID", "GeoTypes.h", 26,
                  typeid(::larlite::geo::TPCID), DefineBehavior(ptr, ptr),
                  &larlitecLcLgeocLcLTPCID_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::geo::TPCID) );
      instance.SetNew(&new_larlitecLcLgeocLcLTPCID);
      instance.SetNewArray(&newArray_larlitecLcLgeocLcLTPCID);
      instance.SetDelete(&delete_larlitecLcLgeocLcLTPCID);
      instance.SetDeleteArray(&deleteArray_larlitecLcLgeocLcLTPCID);
      instance.SetDestructor(&destruct_larlitecLcLgeocLcLTPCID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::geo::TPCID*)
   {
      return GenerateInitInstanceLocal((::larlite::geo::TPCID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::geo::TPCID*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLgeocLcLTPCID_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::geo::TPCID*)0x0)->GetClass();
      larlitecLcLgeocLcLTPCID_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLgeocLcLTPCID_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLgeocLcLPlaneID_Dictionary();
   static void larlitecLcLgeocLcLPlaneID_TClassManip(TClass*);
   static void *new_larlitecLcLgeocLcLPlaneID(void *p = 0);
   static void *newArray_larlitecLcLgeocLcLPlaneID(Long_t size, void *p);
   static void delete_larlitecLcLgeocLcLPlaneID(void *p);
   static void deleteArray_larlitecLcLgeocLcLPlaneID(void *p);
   static void destruct_larlitecLcLgeocLcLPlaneID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::geo::PlaneID*)
   {
      ::larlite::geo::PlaneID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::geo::PlaneID));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::geo::PlaneID", "GeoTypes.h", 60,
                  typeid(::larlite::geo::PlaneID), DefineBehavior(ptr, ptr),
                  &larlitecLcLgeocLcLPlaneID_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::geo::PlaneID) );
      instance.SetNew(&new_larlitecLcLgeocLcLPlaneID);
      instance.SetNewArray(&newArray_larlitecLcLgeocLcLPlaneID);
      instance.SetDelete(&delete_larlitecLcLgeocLcLPlaneID);
      instance.SetDeleteArray(&deleteArray_larlitecLcLgeocLcLPlaneID);
      instance.SetDestructor(&destruct_larlitecLcLgeocLcLPlaneID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::geo::PlaneID*)
   {
      return GenerateInitInstanceLocal((::larlite::geo::PlaneID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::geo::PlaneID*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLgeocLcLPlaneID_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::geo::PlaneID*)0x0)->GetClass();
      larlitecLcLgeocLcLPlaneID_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLgeocLcLPlaneID_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLgeocLcLWireID_Dictionary();
   static void larlitecLcLgeocLcLWireID_TClassManip(TClass*);
   static void *new_larlitecLcLgeocLcLWireID(void *p = 0);
   static void *newArray_larlitecLcLgeocLcLWireID(Long_t size, void *p);
   static void delete_larlitecLcLgeocLcLWireID(void *p);
   static void deleteArray_larlitecLcLgeocLcLWireID(void *p);
   static void destruct_larlitecLcLgeocLcLWireID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::geo::WireID*)
   {
      ::larlite::geo::WireID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::geo::WireID));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::geo::WireID", "GeoTypes.h", 107,
                  typeid(::larlite::geo::WireID), DefineBehavior(ptr, ptr),
                  &larlitecLcLgeocLcLWireID_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::geo::WireID) );
      instance.SetNew(&new_larlitecLcLgeocLcLWireID);
      instance.SetNewArray(&newArray_larlitecLcLgeocLcLWireID);
      instance.SetDelete(&delete_larlitecLcLgeocLcLWireID);
      instance.SetDeleteArray(&deleteArray_larlitecLcLgeocLcLWireID);
      instance.SetDestructor(&destruct_larlitecLcLgeocLcLWireID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::geo::WireID*)
   {
      return GenerateInitInstanceLocal((::larlite::geo::WireID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::geo::WireID*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLgeocLcLWireID_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::geo::WireID*)0x0)->GetClass();
      larlitecLcLgeocLcLWireID_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLgeocLcLWireID_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLMessage_Dictionary();
   static void larlitecLcLMessage_TClassManip(TClass*);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::Message*)
   {
      ::larlite::Message *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::Message));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::Message", "messenger.h", 28,
                  typeid(::larlite::Message), DefineBehavior(ptr, ptr),
                  &larlitecLcLMessage_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::Message) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::Message*)
   {
      return GenerateInitInstanceLocal((::larlite::Message*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::Message*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLMessage_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::Message*)0x0)->GetClass();
      larlitecLcLMessage_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLMessage_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLlarlite_base_Dictionary();
   static void larlitecLcLlarlite_base_TClassManip(TClass*);
   static void *new_larlitecLcLlarlite_base(void *p = 0);
   static void *newArray_larlitecLcLlarlite_base(Long_t size, void *p);
   static void delete_larlitecLcLlarlite_base(void *p);
   static void deleteArray_larlitecLcLlarlite_base(void *p);
   static void destruct_larlitecLcLlarlite_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::larlite_base*)
   {
      ::larlite::larlite_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::larlite_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::larlite_base", "larlite_base.h", 28,
                  typeid(::larlite::larlite_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLlarlite_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::larlite_base) );
      instance.SetNew(&new_larlitecLcLlarlite_base);
      instance.SetNewArray(&newArray_larlitecLcLlarlite_base);
      instance.SetDelete(&delete_larlitecLcLlarlite_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLlarlite_base);
      instance.SetDestructor(&destruct_larlitecLcLlarlite_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::larlite_base*)
   {
      return GenerateInitInstanceLocal((::larlite::larlite_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::larlite_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLlarlite_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::larlite_base*)0x0)->GetClass();
      larlitecLcLlarlite_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLlarlite_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLgeocLcLTPCID(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::geo::TPCID : new ::larlite::geo::TPCID;
   }
   static void *newArray_larlitecLcLgeocLcLTPCID(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::geo::TPCID[nElements] : new ::larlite::geo::TPCID[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLgeocLcLTPCID(void *p) {
      delete ((::larlite::geo::TPCID*)p);
   }
   static void deleteArray_larlitecLcLgeocLcLTPCID(void *p) {
      delete [] ((::larlite::geo::TPCID*)p);
   }
   static void destruct_larlitecLcLgeocLcLTPCID(void *p) {
      typedef ::larlite::geo::TPCID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::geo::TPCID

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLgeocLcLPlaneID(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::geo::PlaneID : new ::larlite::geo::PlaneID;
   }
   static void *newArray_larlitecLcLgeocLcLPlaneID(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::geo::PlaneID[nElements] : new ::larlite::geo::PlaneID[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLgeocLcLPlaneID(void *p) {
      delete ((::larlite::geo::PlaneID*)p);
   }
   static void deleteArray_larlitecLcLgeocLcLPlaneID(void *p) {
      delete [] ((::larlite::geo::PlaneID*)p);
   }
   static void destruct_larlitecLcLgeocLcLPlaneID(void *p) {
      typedef ::larlite::geo::PlaneID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::geo::PlaneID

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLgeocLcLWireID(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::geo::WireID : new ::larlite::geo::WireID;
   }
   static void *newArray_larlitecLcLgeocLcLWireID(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::geo::WireID[nElements] : new ::larlite::geo::WireID[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLgeocLcLWireID(void *p) {
      delete ((::larlite::geo::WireID*)p);
   }
   static void deleteArray_larlitecLcLgeocLcLWireID(void *p) {
      delete [] ((::larlite::geo::WireID*)p);
   }
   static void destruct_larlitecLcLgeocLcLWireID(void *p) {
      typedef ::larlite::geo::WireID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::geo::WireID

namespace ROOT {
} // end of namespace ROOT for class ::larlite::Message

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLlarlite_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::larlite_base : new ::larlite::larlite_base;
   }
   static void *newArray_larlitecLcLlarlite_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::larlite_base[nElements] : new ::larlite::larlite_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLlarlite_base(void *p) {
      delete ((::larlite::larlite_base*)p);
   }
   static void deleteArray_larlitecLcLlarlite_base(void *p) {
      delete [] ((::larlite::larlite_base*)p);
   }
   static void destruct_larlitecLcLlarlite_base(void *p) {
      typedef ::larlite::larlite_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::larlite_base

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
                  &vectorlElarlitecLcLgeocLcLView_tgR_Dictionary, isa_proxy, 4,
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
                  &vectorlElarlitecLcLgeocLcLSigType_tgR_Dictionary, isa_proxy, 4,
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

namespace {
  void TriggerDictionaryInitialization_libLArLite_Base_Impl() {
    static const char* headers[] = {
"AnalysisConstants.h",
"Base-TypeDef.h",
"DataFormatConstants.h",
"FEMConstants.h",
"FrameworkConstants.h",
"GeoConstants.h",
"GeoTypes.h",
"MCConstants.h",
"RawConstants.h",
"larlite_base.h",
"messenger.h",
0
    };
    static const char* includePaths[] = {
"/Applications/BasicSoftware/v6_04_00/include",
"/Users/niki/play0/larlite/core/Base/",
0
    };
    static const char* fwdDeclCode = 
R"DICTFWDDCLS(
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace larlite{namespace geo{struct __attribute__((annotate("$clingAutoload$GeoTypes.h")))  TPCID;}}
namespace larlite{namespace geo{struct __attribute__((annotate("$clingAutoload$GeoTypes.h")))  PlaneID;}}
namespace larlite{namespace geo{struct __attribute__((annotate("$clingAutoload$GeoTypes.h")))  WireID;}}
namespace larlite{namespace geo{enum  __attribute__((annotate("$clingAutoload$GeoConstants.h 0"))) SigType_t : unsigned int;}}
namespace std{inline namespace __1{template <class _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}}
namespace larlite{namespace geo{enum  __attribute__((annotate("$clingAutoload$GeoConstants.h 0"))) View_t : unsigned int;}}
namespace larlite{class __attribute__((annotate("$clingAutoload$larlite_base.h")))  Message;}
namespace larlite{class __attribute__((annotate("$clingAutoload$larlite_base.h")))  larlite_base;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "AnalysisConstants.h"
#include "Base-TypeDef.h"
#include "DataFormatConstants.h"
#include "FEMConstants.h"
#include "FrameworkConstants.h"
#include "GeoConstants.h"
#include "GeoTypes.h"
#include "MCConstants.h"
#include "RawConstants.h"
#include "larlite_base.h"
#include "messenger.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larlite::Message", payloadCode, "@",
"larlite::geo::PlaneID", payloadCode, "@",
"larlite::geo::TPCID", payloadCode, "@",
"larlite::geo::WireID", payloadCode, "@",
"larlite::larlite_base", payloadCode, "@",
"vector<larlite::geo::SigType_t>", payloadCode, "@",
"vector<larlite::geo::View_t>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLArLite_Base",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLArLite_Base_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLArLite_Base_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLArLite_Base() {
  TriggerDictionaryInitialization_libLArLite_Base_Impl();
}
