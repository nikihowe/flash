// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME LArLite_DataFormatDict

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
#include "DataFormat-TypeDef.h"
#include "DataFormatException.h"
#include "calorimetry.h"
#include "cluster.h"
#include "cosmictag.h"
#include "data_base.h"
#include "endpoint2d.h"
#include "event_ass.h"
#include "fifo.h"
#include "flashmatch.h"
#include "gtruth.h"
#include "hit.h"
#include "larlite_dataformat_utils.h"
#include "mcflux.h"
#include "mcnu.h"
#include "mcpart.h"
#include "mcshower.h"
#include "mctrack.h"
#include "mctrajectory.h"
#include "mctree.h"
#include "mctruth.h"
#include "minos.h"
#include "opflash.h"
#include "ophit.h"
#include "partid.h"
#include "pcaxis.h"
#include "pfpart.h"
#include "potsummary.h"
#include "rawdigit.h"
#include "seed.h"
#include "shower.h"
#include "simch.h"
#include "spacepoint.h"
#include "sparse_vector.h"
#include "storage_manager.h"
#include "track.h"
#include "treenode.h"
#include "trigger.h"
#include "user_info.h"
#include "vertex.h"
#include "wire.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEunsignedsPlongcOunsignedsPlonggR_Dictionary();
   static void pairlEunsignedsPlongcOunsignedsPlonggR_TClassManip(TClass*);
   static void *new_pairlEunsignedsPlongcOunsignedsPlonggR(void *p = 0);
   static void *newArray_pairlEunsignedsPlongcOunsignedsPlonggR(Long_t size, void *p);
   static void delete_pairlEunsignedsPlongcOunsignedsPlonggR(void *p);
   static void deleteArray_pairlEunsignedsPlongcOunsignedsPlonggR(void *p);
   static void destruct_pairlEunsignedsPlongcOunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<unsigned long,unsigned long>*)
   {
      pair<unsigned long,unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<unsigned long,unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<unsigned long,unsigned long>", "utility", 248,
                  typeid(pair<unsigned long,unsigned long>), DefineBehavior(ptr, ptr),
                  &pairlEunsignedsPlongcOunsignedsPlonggR_Dictionary, isa_proxy, 4,
                  sizeof(pair<unsigned long,unsigned long>) );
      instance.SetNew(&new_pairlEunsignedsPlongcOunsignedsPlonggR);
      instance.SetNewArray(&newArray_pairlEunsignedsPlongcOunsignedsPlonggR);
      instance.SetDelete(&delete_pairlEunsignedsPlongcOunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_pairlEunsignedsPlongcOunsignedsPlonggR);
      instance.SetDestructor(&destruct_pairlEunsignedsPlongcOunsignedsPlonggR);

      ::ROOT::AddClassAlternate("pair<unsigned long,unsigned long>","pair<size_t,size_t>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<unsigned long,unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEunsignedsPlongcOunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<unsigned long,unsigned long>*)0x0)->GetClass();
      pairlEunsignedsPlongcOunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEunsignedsPlongcOunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEunsignedsPshortcOstringgR_Dictionary();
   static void pairlEunsignedsPshortcOstringgR_TClassManip(TClass*);
   static void *new_pairlEunsignedsPshortcOstringgR(void *p = 0);
   static void *newArray_pairlEunsignedsPshortcOstringgR(Long_t size, void *p);
   static void delete_pairlEunsignedsPshortcOstringgR(void *p);
   static void deleteArray_pairlEunsignedsPshortcOstringgR(void *p);
   static void destruct_pairlEunsignedsPshortcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<unsigned short,string>*)
   {
      pair<unsigned short,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<unsigned short,string>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<unsigned short,string>", "utility", 248,
                  typeid(pair<unsigned short,string>), DefineBehavior(ptr, ptr),
                  &pairlEunsignedsPshortcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<unsigned short,string>) );
      instance.SetNew(&new_pairlEunsignedsPshortcOstringgR);
      instance.SetNewArray(&newArray_pairlEunsignedsPshortcOstringgR);
      instance.SetDelete(&delete_pairlEunsignedsPshortcOstringgR);
      instance.SetDeleteArray(&deleteArray_pairlEunsignedsPshortcOstringgR);
      instance.SetDestructor(&destruct_pairlEunsignedsPshortcOstringgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<unsigned short,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEunsignedsPshortcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<unsigned short,string>*)0x0)->GetClass();
      pairlEunsignedsPshortcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEunsignedsPshortcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOboolgR_Dictionary();
   static void pairlEstringcOboolgR_TClassManip(TClass*);
   static void *new_pairlEstringcOboolgR(void *p = 0);
   static void *newArray_pairlEstringcOboolgR(Long_t size, void *p);
   static void delete_pairlEstringcOboolgR(void *p);
   static void deleteArray_pairlEstringcOboolgR(void *p);
   static void destruct_pairlEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,bool>*)
   {
      pair<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,bool>", "utility", 248,
                  typeid(pair<string,bool>), DefineBehavior(ptr, ptr),
                  &pairlEstringcOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<string,bool>) );
      instance.SetNew(&new_pairlEstringcOboolgR);
      instance.SetNewArray(&newArray_pairlEstringcOboolgR);
      instance.SetDelete(&delete_pairlEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOboolgR);
      instance.SetDestructor(&destruct_pairlEstringcOboolgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,bool>*)0x0)->GetClass();
      pairlEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOstringgR_Dictionary();
   static void pairlEstringcOstringgR_TClassManip(TClass*);
   static void *new_pairlEstringcOstringgR(void *p = 0);
   static void *newArray_pairlEstringcOstringgR(Long_t size, void *p);
   static void delete_pairlEstringcOstringgR(void *p);
   static void deleteArray_pairlEstringcOstringgR(void *p);
   static void destruct_pairlEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,string>*)
   {
      pair<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,string>", "utility", 248,
                  typeid(pair<string,string>), DefineBehavior(ptr, ptr),
                  &pairlEstringcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<string,string>) );
      instance.SetNew(&new_pairlEstringcOstringgR);
      instance.SetNewArray(&newArray_pairlEstringcOstringgR);
      instance.SetDelete(&delete_pairlEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOstringgR);
      instance.SetDestructor(&destruct_pairlEstringcOstringgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,string>*)0x0)->GetClass();
      pairlEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlElarlitecLcLdatacLcLDataType_tcOstringgR_Dictionary();
   static void pairlElarlitecLcLdatacLcLDataType_tcOstringgR_TClassManip(TClass*);
   static void *new_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p = 0);
   static void *newArray_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(Long_t size, void *p);
   static void delete_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p);
   static void deleteArray_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p);
   static void destruct_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<larlite::data::DataType_t,string>*)
   {
      pair<larlite::data::DataType_t,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<larlite::data::DataType_t,string>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<larlite::data::DataType_t,string>", "utility", 248,
                  typeid(pair<larlite::data::DataType_t,string>), DefineBehavior(ptr, ptr),
                  &pairlElarlitecLcLdatacLcLDataType_tcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<larlite::data::DataType_t,string>) );
      instance.SetNew(&new_pairlElarlitecLcLdatacLcLDataType_tcOstringgR);
      instance.SetNewArray(&newArray_pairlElarlitecLcLdatacLcLDataType_tcOstringgR);
      instance.SetDelete(&delete_pairlElarlitecLcLdatacLcLDataType_tcOstringgR);
      instance.SetDeleteArray(&deleteArray_pairlElarlitecLcLdatacLcLDataType_tcOstringgR);
      instance.SetDestructor(&destruct_pairlElarlitecLcLdatacLcLDataType_tcOstringgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<larlite::data::DataType_t,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlElarlitecLcLdatacLcLDataType_tcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<larlite::data::DataType_t,string>*)0x0)->GetClass();
      pairlElarlitecLcLdatacLcLDataType_tcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlElarlitecLcLdatacLcLDataType_tcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLproduct_id_Dictionary();
   static void larlitecLcLproduct_id_TClassManip(TClass*);
   static void *new_larlitecLcLproduct_id(void *p = 0);
   static void *newArray_larlitecLcLproduct_id(Long_t size, void *p);
   static void delete_larlitecLcLproduct_id(void *p);
   static void deleteArray_larlitecLcLproduct_id(void *p);
   static void destruct_larlitecLcLproduct_id(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::product_id*)
   {
      ::larlite::product_id *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::product_id));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::product_id", "larlite_dataformat_utils.h", 47,
                  typeid(::larlite::product_id), DefineBehavior(ptr, ptr),
                  &larlitecLcLproduct_id_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::product_id) );
      instance.SetNew(&new_larlitecLcLproduct_id);
      instance.SetNewArray(&newArray_larlitecLcLproduct_id);
      instance.SetDelete(&delete_larlitecLcLproduct_id);
      instance.SetDeleteArray(&deleteArray_larlitecLcLproduct_id);
      instance.SetDestructor(&destruct_larlitecLcLproduct_id);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::product_id*)
   {
      return GenerateInitInstanceLocal((::larlite::product_id*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::product_id*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLproduct_id_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::product_id*)0x0)->GetClass();
      larlitecLcLproduct_id_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLproduct_id_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR_Dictionary();
   static void pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR_TClassManip(TClass*);
   static void *new_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p = 0);
   static void *newArray_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(Long_t size, void *p);
   static void delete_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p);
   static void deleteArray_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p);
   static void destruct_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<larlite::product_id,larlite::product_id>*)
   {
      pair<larlite::product_id,larlite::product_id> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<larlite::product_id,larlite::product_id>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<larlite::product_id,larlite::product_id>", "utility", 248,
                  typeid(pair<larlite::product_id,larlite::product_id>), DefineBehavior(ptr, ptr),
                  &pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<larlite::product_id,larlite::product_id>) );
      instance.SetNew(&new_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR);
      instance.SetNewArray(&newArray_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR);
      instance.SetDelete(&delete_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR);
      instance.SetDeleteArray(&deleteArray_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR);
      instance.SetDestructor(&destruct_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<larlite::product_id,larlite::product_id>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<larlite::product_id,larlite::product_id>*)0x0)->GetClass();
      pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLDataFormatException_Dictionary();
   static void larlitecLcLDataFormatException_TClassManip(TClass*);
   static void *new_larlitecLcLDataFormatException(void *p = 0);
   static void *newArray_larlitecLcLDataFormatException(Long_t size, void *p);
   static void delete_larlitecLcLDataFormatException(void *p);
   static void deleteArray_larlitecLcLDataFormatException(void *p);
   static void destruct_larlitecLcLDataFormatException(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::DataFormatException*)
   {
      ::larlite::DataFormatException *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::DataFormatException));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::DataFormatException", "DataFormatException.h", 25,
                  typeid(::larlite::DataFormatException), DefineBehavior(ptr, ptr),
                  &larlitecLcLDataFormatException_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::DataFormatException) );
      instance.SetNew(&new_larlitecLcLDataFormatException);
      instance.SetNewArray(&newArray_larlitecLcLDataFormatException);
      instance.SetDelete(&delete_larlitecLcLDataFormatException);
      instance.SetDeleteArray(&deleteArray_larlitecLcLDataFormatException);
      instance.SetDestructor(&destruct_larlitecLcLDataFormatException);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::DataFormatException*)
   {
      return GenerateInitInstanceLocal((::larlite::DataFormatException*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::DataFormatException*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLDataFormatException_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::DataFormatException*)0x0)->GetClass();
      larlitecLcLDataFormatException_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLDataFormatException_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLdata_base_Dictionary();
   static void larlitecLcLdata_base_TClassManip(TClass*);
   static void *new_larlitecLcLdata_base(void *p = 0);
   static void *newArray_larlitecLcLdata_base(Long_t size, void *p);
   static void delete_larlitecLcLdata_base(void *p);
   static void deleteArray_larlitecLcLdata_base(void *p);
   static void destruct_larlitecLcLdata_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::data_base*)
   {
      ::larlite::data_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::data_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::data_base", "data_base.h", 31,
                  typeid(::larlite::data_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLdata_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::data_base) );
      instance.SetNew(&new_larlitecLcLdata_base);
      instance.SetNewArray(&newArray_larlitecLcLdata_base);
      instance.SetDelete(&delete_larlitecLcLdata_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLdata_base);
      instance.SetDestructor(&destruct_larlitecLcLdata_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::data_base*)
   {
      return GenerateInitInstanceLocal((::larlite::data_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::data_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLdata_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::data_base*)0x0)->GetClass();
      larlitecLcLdata_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLdata_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLoutput_base_Dictionary();
   static void larlitecLcLoutput_base_TClassManip(TClass*);
   static void *new_larlitecLcLoutput_base(void *p = 0);
   static void *newArray_larlitecLcLoutput_base(Long_t size, void *p);
   static void delete_larlitecLcLoutput_base(void *p);
   static void deleteArray_larlitecLcLoutput_base(void *p);
   static void destruct_larlitecLcLoutput_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::output_base*)
   {
      ::larlite::output_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::output_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::output_base", "data_base.h", 63,
                  typeid(::larlite::output_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLoutput_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::output_base) );
      instance.SetNew(&new_larlitecLcLoutput_base);
      instance.SetNewArray(&newArray_larlitecLcLoutput_base);
      instance.SetDelete(&delete_larlitecLcLoutput_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLoutput_base);
      instance.SetDestructor(&destruct_larlitecLcLoutput_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::output_base*)
   {
      return GenerateInitInstanceLocal((::larlite::output_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::output_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLoutput_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::output_base*)0x0)->GetClass();
      larlitecLcLoutput_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLoutput_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLrun_base_Dictionary();
   static void larlitecLcLrun_base_TClassManip(TClass*);
   static void *new_larlitecLcLrun_base(void *p = 0);
   static void *newArray_larlitecLcLrun_base(Long_t size, void *p);
   static void delete_larlitecLcLrun_base(void *p);
   static void deleteArray_larlitecLcLrun_base(void *p);
   static void destruct_larlitecLcLrun_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::run_base*)
   {
      ::larlite::run_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::run_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::run_base", "data_base.h", 90,
                  typeid(::larlite::run_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLrun_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::run_base) );
      instance.SetNew(&new_larlitecLcLrun_base);
      instance.SetNewArray(&newArray_larlitecLcLrun_base);
      instance.SetDelete(&delete_larlitecLcLrun_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLrun_base);
      instance.SetDestructor(&destruct_larlitecLcLrun_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::run_base*)
   {
      return GenerateInitInstanceLocal((::larlite::run_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::run_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLrun_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::run_base*)0x0)->GetClass();
      larlitecLcLrun_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLrun_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLsubrun_base_Dictionary();
   static void larlitecLcLsubrun_base_TClassManip(TClass*);
   static void *new_larlitecLcLsubrun_base(void *p = 0);
   static void *newArray_larlitecLcLsubrun_base(Long_t size, void *p);
   static void delete_larlitecLcLsubrun_base(void *p);
   static void deleteArray_larlitecLcLsubrun_base(void *p);
   static void destruct_larlitecLcLsubrun_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::subrun_base*)
   {
      ::larlite::subrun_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::subrun_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::subrun_base", "data_base.h", 124,
                  typeid(::larlite::subrun_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLsubrun_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::subrun_base) );
      instance.SetNew(&new_larlitecLcLsubrun_base);
      instance.SetNewArray(&newArray_larlitecLcLsubrun_base);
      instance.SetDelete(&delete_larlitecLcLsubrun_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLsubrun_base);
      instance.SetDestructor(&destruct_larlitecLcLsubrun_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::subrun_base*)
   {
      return GenerateInitInstanceLocal((::larlite::subrun_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::subrun_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLsubrun_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::subrun_base*)0x0)->GetClass();
      larlitecLcLsubrun_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLsubrun_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_base_Dictionary();
   static void larlitecLcLevent_base_TClassManip(TClass*);
   static void *new_larlitecLcLevent_base(void *p = 0);
   static void *newArray_larlitecLcLevent_base(Long_t size, void *p);
   static void delete_larlitecLcLevent_base(void *p);
   static void deleteArray_larlitecLcLevent_base(void *p);
   static void destruct_larlitecLcLevent_base(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_base*)
   {
      ::larlite::event_base *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_base));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_base", "data_base.h", 164,
                  typeid(::larlite::event_base), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_base_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_base) );
      instance.SetNew(&new_larlitecLcLevent_base);
      instance.SetNewArray(&newArray_larlitecLcLevent_base);
      instance.SetDelete(&delete_larlitecLcLevent_base);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_base);
      instance.SetDestructor(&destruct_larlitecLcLevent_base);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_base*)
   {
      return GenerateInitInstanceLocal((::larlite::event_base*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_base*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_base_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_base*)0x0)->GetClass();
      larlitecLcLevent_base_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_base_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLsparse_datalEfloatgR_Dictionary();
   static void larlitecLcLsparse_datalEfloatgR_TClassManip(TClass*);
   static void *new_larlitecLcLsparse_datalEfloatgR(void *p = 0);
   static void *newArray_larlitecLcLsparse_datalEfloatgR(Long_t size, void *p);
   static void delete_larlitecLcLsparse_datalEfloatgR(void *p);
   static void deleteArray_larlitecLcLsparse_datalEfloatgR(void *p);
   static void destruct_larlitecLcLsparse_datalEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::sparse_data<float>*)
   {
      ::larlite::sparse_data<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::sparse_data<float>));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::sparse_data<float>", "sparse_vector.h", 10,
                  typeid(::larlite::sparse_data<float>), DefineBehavior(ptr, ptr),
                  &larlitecLcLsparse_datalEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::sparse_data<float>) );
      instance.SetNew(&new_larlitecLcLsparse_datalEfloatgR);
      instance.SetNewArray(&newArray_larlitecLcLsparse_datalEfloatgR);
      instance.SetDelete(&delete_larlitecLcLsparse_datalEfloatgR);
      instance.SetDeleteArray(&deleteArray_larlitecLcLsparse_datalEfloatgR);
      instance.SetDestructor(&destruct_larlitecLcLsparse_datalEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::sparse_data<float>*)
   {
      return GenerateInitInstanceLocal((::larlite::sparse_data<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::sparse_data<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLsparse_datalEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::sparse_data<float>*)0x0)->GetClass();
      larlitecLcLsparse_datalEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLsparse_datalEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLsparse_vectorlEfloatgR_Dictionary();
   static void larlitecLcLsparse_vectorlEfloatgR_TClassManip(TClass*);
   static void *new_larlitecLcLsparse_vectorlEfloatgR(void *p = 0);
   static void *newArray_larlitecLcLsparse_vectorlEfloatgR(Long_t size, void *p);
   static void delete_larlitecLcLsparse_vectorlEfloatgR(void *p);
   static void deleteArray_larlitecLcLsparse_vectorlEfloatgR(void *p);
   static void destruct_larlitecLcLsparse_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::sparse_vector<float>*)
   {
      ::larlite::sparse_vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::sparse_vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::sparse_vector<float>", "sparse_vector.h", 44,
                  typeid(::larlite::sparse_vector<float>), DefineBehavior(ptr, ptr),
                  &larlitecLcLsparse_vectorlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::sparse_vector<float>) );
      instance.SetNew(&new_larlitecLcLsparse_vectorlEfloatgR);
      instance.SetNewArray(&newArray_larlitecLcLsparse_vectorlEfloatgR);
      instance.SetDelete(&delete_larlitecLcLsparse_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_larlitecLcLsparse_vectorlEfloatgR);
      instance.SetDestructor(&destruct_larlitecLcLsparse_vectorlEfloatgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::sparse_vector<float>*)
   {
      return GenerateInitInstanceLocal((::larlite::sparse_vector<float>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::sparse_vector<float>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLsparse_vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::sparse_vector<float>*)0x0)->GetClass();
      larlitecLcLsparse_vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLsparse_vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLpotsummary_Dictionary();
   static void larlitecLcLpotsummary_TClassManip(TClass*);
   static void *new_larlitecLcLpotsummary(void *p = 0);
   static void *newArray_larlitecLcLpotsummary(Long_t size, void *p);
   static void delete_larlitecLcLpotsummary(void *p);
   static void deleteArray_larlitecLcLpotsummary(void *p);
   static void destruct_larlitecLcLpotsummary(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::potsummary*)
   {
      ::larlite::potsummary *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::potsummary));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::potsummary", "potsummary.h", 25,
                  typeid(::larlite::potsummary), DefineBehavior(ptr, ptr),
                  &larlitecLcLpotsummary_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::potsummary) );
      instance.SetNew(&new_larlitecLcLpotsummary);
      instance.SetNewArray(&newArray_larlitecLcLpotsummary);
      instance.SetDelete(&delete_larlitecLcLpotsummary);
      instance.SetDeleteArray(&deleteArray_larlitecLcLpotsummary);
      instance.SetDestructor(&destruct_larlitecLcLpotsummary);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::potsummary*)
   {
      return GenerateInitInstanceLocal((::larlite::potsummary*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::potsummary*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLpotsummary_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::potsummary*)0x0)->GetClass();
      larlitecLcLpotsummary_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLpotsummary_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLrawdigit_Dictionary();
   static void larlitecLcLrawdigit_TClassManip(TClass*);
   static void *new_larlitecLcLrawdigit(void *p = 0);
   static void *newArray_larlitecLcLrawdigit(Long_t size, void *p);
   static void delete_larlitecLcLrawdigit(void *p);
   static void deleteArray_larlitecLcLrawdigit(void *p);
   static void destruct_larlitecLcLrawdigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::rawdigit*)
   {
      ::larlite::rawdigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::rawdigit));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::rawdigit", "rawdigit.h", 30,
                  typeid(::larlite::rawdigit), DefineBehavior(ptr, ptr),
                  &larlitecLcLrawdigit_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::rawdigit) );
      instance.SetNew(&new_larlitecLcLrawdigit);
      instance.SetNewArray(&newArray_larlitecLcLrawdigit);
      instance.SetDelete(&delete_larlitecLcLrawdigit);
      instance.SetDeleteArray(&deleteArray_larlitecLcLrawdigit);
      instance.SetDestructor(&destruct_larlitecLcLrawdigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::rawdigit*)
   {
      return GenerateInitInstanceLocal((::larlite::rawdigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::rawdigit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLrawdigit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::rawdigit*)0x0)->GetClass();
      larlitecLcLrawdigit_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLrawdigit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_rawdigit_Dictionary();
   static void larlitecLcLevent_rawdigit_TClassManip(TClass*);
   static void *new_larlitecLcLevent_rawdigit(void *p = 0);
   static void *newArray_larlitecLcLevent_rawdigit(Long_t size, void *p);
   static void delete_larlitecLcLevent_rawdigit(void *p);
   static void deleteArray_larlitecLcLevent_rawdigit(void *p);
   static void destruct_larlitecLcLevent_rawdigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_rawdigit*)
   {
      ::larlite::event_rawdigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_rawdigit));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_rawdigit", "rawdigit.h", 82,
                  typeid(::larlite::event_rawdigit), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_rawdigit_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_rawdigit) );
      instance.SetNew(&new_larlitecLcLevent_rawdigit);
      instance.SetNewArray(&newArray_larlitecLcLevent_rawdigit);
      instance.SetDelete(&delete_larlitecLcLevent_rawdigit);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_rawdigit);
      instance.SetDestructor(&destruct_larlitecLcLevent_rawdigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_rawdigit*)
   {
      return GenerateInitInstanceLocal((::larlite::event_rawdigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_rawdigit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_rawdigit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_rawdigit*)0x0)->GetClass();
      larlitecLcLevent_rawdigit_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_rawdigit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLwire_Dictionary();
   static void larlitecLcLwire_TClassManip(TClass*);
   static void *new_larlitecLcLwire(void *p = 0);
   static void *newArray_larlitecLcLwire(Long_t size, void *p);
   static void delete_larlitecLcLwire(void *p);
   static void deleteArray_larlitecLcLwire(void *p);
   static void destruct_larlitecLcLwire(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::wire*)
   {
      ::larlite::wire *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::wire));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::wire", "wire.h", 84,
                  typeid(::larlite::wire), DefineBehavior(ptr, ptr),
                  &larlitecLcLwire_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::wire) );
      instance.SetNew(&new_larlitecLcLwire);
      instance.SetNewArray(&newArray_larlitecLcLwire);
      instance.SetDelete(&delete_larlitecLcLwire);
      instance.SetDeleteArray(&deleteArray_larlitecLcLwire);
      instance.SetDestructor(&destruct_larlitecLcLwire);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::wire*)
   {
      return GenerateInitInstanceLocal((::larlite::wire*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::wire*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLwire_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::wire*)0x0)->GetClass();
      larlitecLcLwire_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLwire_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_wire_Dictionary();
   static void larlitecLcLevent_wire_TClassManip(TClass*);
   static void *new_larlitecLcLevent_wire(void *p = 0);
   static void *newArray_larlitecLcLevent_wire(Long_t size, void *p);
   static void delete_larlitecLcLevent_wire(void *p);
   static void deleteArray_larlitecLcLevent_wire(void *p);
   static void destruct_larlitecLcLevent_wire(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_wire*)
   {
      ::larlite::event_wire *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_wire));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_wire", "wire.h", 163,
                  typeid(::larlite::event_wire), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_wire_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_wire) );
      instance.SetNew(&new_larlitecLcLevent_wire);
      instance.SetNewArray(&newArray_larlitecLcLevent_wire);
      instance.SetDelete(&delete_larlitecLcLevent_wire);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_wire);
      instance.SetDestructor(&destruct_larlitecLcLevent_wire);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_wire*)
   {
      return GenerateInitInstanceLocal((::larlite::event_wire*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_wire*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_wire_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_wire*)0x0)->GetClass();
      larlitecLcLevent_wire_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_wire_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLhit_Dictionary();
   static void larlitecLcLhit_TClassManip(TClass*);
   static void *new_larlitecLcLhit(void *p = 0);
   static void *newArray_larlitecLcLhit(Long_t size, void *p);
   static void delete_larlitecLcLhit(void *p);
   static void deleteArray_larlitecLcLhit(void *p);
   static void destruct_larlitecLcLhit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::hit*)
   {
      ::larlite::hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::hit));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::hit", "hit.h", 28,
                  typeid(::larlite::hit), DefineBehavior(ptr, ptr),
                  &larlitecLcLhit_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::hit) );
      instance.SetNew(&new_larlitecLcLhit);
      instance.SetNewArray(&newArray_larlitecLcLhit);
      instance.SetDelete(&delete_larlitecLcLhit);
      instance.SetDeleteArray(&deleteArray_larlitecLcLhit);
      instance.SetDestructor(&destruct_larlitecLcLhit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::hit*)
   {
      return GenerateInitInstanceLocal((::larlite::hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::hit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLhit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::hit*)0x0)->GetClass();
      larlitecLcLhit_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLhit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_hit_Dictionary();
   static void larlitecLcLevent_hit_TClassManip(TClass*);
   static void *new_larlitecLcLevent_hit(void *p = 0);
   static void *newArray_larlitecLcLevent_hit(Long_t size, void *p);
   static void delete_larlitecLcLevent_hit(void *p);
   static void deleteArray_larlitecLcLevent_hit(void *p);
   static void destruct_larlitecLcLevent_hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_hit*)
   {
      ::larlite::event_hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_hit));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_hit", "hit.h", 188,
                  typeid(::larlite::event_hit), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_hit_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_hit) );
      instance.SetNew(&new_larlitecLcLevent_hit);
      instance.SetNewArray(&newArray_larlitecLcLevent_hit);
      instance.SetDelete(&delete_larlitecLcLevent_hit);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_hit);
      instance.SetDestructor(&destruct_larlitecLcLevent_hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_hit*)
   {
      return GenerateInitInstanceLocal((::larlite::event_hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_hit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_hit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_hit*)0x0)->GetClass();
      larlitecLcLevent_hit_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_hit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLophit_Dictionary();
   static void larlitecLcLophit_TClassManip(TClass*);
   static void *new_larlitecLcLophit(void *p = 0);
   static void *newArray_larlitecLcLophit(Long_t size, void *p);
   static void delete_larlitecLcLophit(void *p);
   static void deleteArray_larlitecLcLophit(void *p);
   static void destruct_larlitecLcLophit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ophit*)
   {
      ::larlite::ophit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ophit));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ophit", "ophit.h", 19,
                  typeid(::larlite::ophit), DefineBehavior(ptr, ptr),
                  &larlitecLcLophit_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ophit) );
      instance.SetNew(&new_larlitecLcLophit);
      instance.SetNewArray(&newArray_larlitecLcLophit);
      instance.SetDelete(&delete_larlitecLcLophit);
      instance.SetDeleteArray(&deleteArray_larlitecLcLophit);
      instance.SetDestructor(&destruct_larlitecLcLophit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ophit*)
   {
      return GenerateInitInstanceLocal((::larlite::ophit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ophit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLophit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ophit*)0x0)->GetClass();
      larlitecLcLophit_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLophit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_ophit_Dictionary();
   static void larlitecLcLevent_ophit_TClassManip(TClass*);
   static void *new_larlitecLcLevent_ophit(void *p = 0);
   static void *newArray_larlitecLcLevent_ophit(Long_t size, void *p);
   static void delete_larlitecLcLevent_ophit(void *p);
   static void deleteArray_larlitecLcLevent_ophit(void *p);
   static void destruct_larlitecLcLevent_ophit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_ophit*)
   {
      ::larlite::event_ophit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_ophit));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_ophit", "ophit.h", 64,
                  typeid(::larlite::event_ophit), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_ophit_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_ophit) );
      instance.SetNew(&new_larlitecLcLevent_ophit);
      instance.SetNewArray(&newArray_larlitecLcLevent_ophit);
      instance.SetDelete(&delete_larlitecLcLevent_ophit);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_ophit);
      instance.SetDestructor(&destruct_larlitecLcLevent_ophit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_ophit*)
   {
      return GenerateInitInstanceLocal((::larlite::event_ophit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_ophit*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_ophit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_ophit*)0x0)->GetClass();
      larlitecLcLevent_ophit_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_ophit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLopflash_Dictionary();
   static void larlitecLcLopflash_TClassManip(TClass*);
   static void *new_larlitecLcLopflash(void *p = 0);
   static void *newArray_larlitecLcLopflash(Long_t size, void *p);
   static void delete_larlitecLcLopflash(void *p);
   static void deleteArray_larlitecLcLopflash(void *p);
   static void destruct_larlitecLcLopflash(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::opflash*)
   {
      ::larlite::opflash *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::opflash));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::opflash", "opflash.h", 20,
                  typeid(::larlite::opflash), DefineBehavior(ptr, ptr),
                  &larlitecLcLopflash_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::opflash) );
      instance.SetNew(&new_larlitecLcLopflash);
      instance.SetNewArray(&newArray_larlitecLcLopflash);
      instance.SetDelete(&delete_larlitecLcLopflash);
      instance.SetDeleteArray(&deleteArray_larlitecLcLopflash);
      instance.SetDestructor(&destruct_larlitecLcLopflash);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::opflash*)
   {
      return GenerateInitInstanceLocal((::larlite::opflash*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::opflash*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLopflash_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::opflash*)0x0)->GetClass();
      larlitecLcLopflash_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLopflash_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_opflash_Dictionary();
   static void larlitecLcLevent_opflash_TClassManip(TClass*);
   static void *new_larlitecLcLevent_opflash(void *p = 0);
   static void *newArray_larlitecLcLevent_opflash(Long_t size, void *p);
   static void delete_larlitecLcLevent_opflash(void *p);
   static void deleteArray_larlitecLcLevent_opflash(void *p);
   static void destruct_larlitecLcLevent_opflash(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_opflash*)
   {
      ::larlite::event_opflash *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_opflash));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_opflash", "opflash.h", 76,
                  typeid(::larlite::event_opflash), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_opflash_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_opflash) );
      instance.SetNew(&new_larlitecLcLevent_opflash);
      instance.SetNewArray(&newArray_larlitecLcLevent_opflash);
      instance.SetDelete(&delete_larlitecLcLevent_opflash);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_opflash);
      instance.SetDestructor(&destruct_larlitecLcLevent_opflash);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_opflash*)
   {
      return GenerateInitInstanceLocal((::larlite::event_opflash*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_opflash*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_opflash_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_opflash*)0x0)->GetClass();
      larlitecLcLevent_opflash_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_opflash_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLcosmictag_Dictionary();
   static void larlitecLcLcosmictag_TClassManip(TClass*);
   static void *new_larlitecLcLcosmictag(void *p = 0);
   static void *newArray_larlitecLcLcosmictag(Long_t size, void *p);
   static void delete_larlitecLcLcosmictag(void *p);
   static void deleteArray_larlitecLcLcosmictag(void *p);
   static void destruct_larlitecLcLcosmictag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::cosmictag*)
   {
      ::larlite::cosmictag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::cosmictag));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::cosmictag", "cosmictag.h", 31,
                  typeid(::larlite::cosmictag), DefineBehavior(ptr, ptr),
                  &larlitecLcLcosmictag_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::cosmictag) );
      instance.SetNew(&new_larlitecLcLcosmictag);
      instance.SetNewArray(&newArray_larlitecLcLcosmictag);
      instance.SetDelete(&delete_larlitecLcLcosmictag);
      instance.SetDeleteArray(&deleteArray_larlitecLcLcosmictag);
      instance.SetDestructor(&destruct_larlitecLcLcosmictag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::cosmictag*)
   {
      return GenerateInitInstanceLocal((::larlite::cosmictag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::cosmictag*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLcosmictag_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::cosmictag*)0x0)->GetClass();
      larlitecLcLcosmictag_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLcosmictag_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_cosmictag_Dictionary();
   static void larlitecLcLevent_cosmictag_TClassManip(TClass*);
   static void *new_larlitecLcLevent_cosmictag(void *p = 0);
   static void *newArray_larlitecLcLevent_cosmictag(Long_t size, void *p);
   static void delete_larlitecLcLevent_cosmictag(void *p);
   static void deleteArray_larlitecLcLevent_cosmictag(void *p);
   static void destruct_larlitecLcLevent_cosmictag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_cosmictag*)
   {
      ::larlite::event_cosmictag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_cosmictag));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_cosmictag", "cosmictag.h", 80,
                  typeid(::larlite::event_cosmictag), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_cosmictag_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_cosmictag) );
      instance.SetNew(&new_larlitecLcLevent_cosmictag);
      instance.SetNewArray(&newArray_larlitecLcLevent_cosmictag);
      instance.SetDelete(&delete_larlitecLcLevent_cosmictag);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_cosmictag);
      instance.SetDestructor(&destruct_larlitecLcLevent_cosmictag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_cosmictag*)
   {
      return GenerateInitInstanceLocal((::larlite::event_cosmictag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_cosmictag*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_cosmictag_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_cosmictag*)0x0)->GetClass();
      larlitecLcLevent_cosmictag_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_cosmictag_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLcluster_Dictionary();
   static void larlitecLcLcluster_TClassManip(TClass*);
   static void *new_larlitecLcLcluster(void *p = 0);
   static void *newArray_larlitecLcLcluster(Long_t size, void *p);
   static void delete_larlitecLcLcluster(void *p);
   static void deleteArray_larlitecLcLcluster(void *p);
   static void destruct_larlitecLcLcluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::cluster*)
   {
      ::larlite::cluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::cluster));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::cluster", "cluster.h", 45,
                  typeid(::larlite::cluster), DefineBehavior(ptr, ptr),
                  &larlitecLcLcluster_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::cluster) );
      instance.SetNew(&new_larlitecLcLcluster);
      instance.SetNewArray(&newArray_larlitecLcLcluster);
      instance.SetDelete(&delete_larlitecLcLcluster);
      instance.SetDeleteArray(&deleteArray_larlitecLcLcluster);
      instance.SetDestructor(&destruct_larlitecLcLcluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::cluster*)
   {
      return GenerateInitInstanceLocal((::larlite::cluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::cluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLcluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::cluster*)0x0)->GetClass();
      larlitecLcLcluster_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLcluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_cluster_Dictionary();
   static void larlitecLcLevent_cluster_TClassManip(TClass*);
   static void *new_larlitecLcLevent_cluster(void *p = 0);
   static void *newArray_larlitecLcLevent_cluster(Long_t size, void *p);
   static void delete_larlitecLcLevent_cluster(void *p);
   static void deleteArray_larlitecLcLevent_cluster(void *p);
   static void destruct_larlitecLcLevent_cluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_cluster*)
   {
      ::larlite::event_cluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_cluster));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_cluster", "cluster.h", 641,
                  typeid(::larlite::event_cluster), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_cluster_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_cluster) );
      instance.SetNew(&new_larlitecLcLevent_cluster);
      instance.SetNewArray(&newArray_larlitecLcLevent_cluster);
      instance.SetDelete(&delete_larlitecLcLevent_cluster);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_cluster);
      instance.SetDestructor(&destruct_larlitecLcLevent_cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_cluster*)
   {
      return GenerateInitInstanceLocal((::larlite::event_cluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_cluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_cluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_cluster*)0x0)->GetClass();
      larlitecLcLevent_cluster_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_cluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLendpoint2d_Dictionary();
   static void larlitecLcLendpoint2d_TClassManip(TClass*);
   static void *new_larlitecLcLendpoint2d(void *p = 0);
   static void *newArray_larlitecLcLendpoint2d(Long_t size, void *p);
   static void delete_larlitecLcLendpoint2d(void *p);
   static void deleteArray_larlitecLcLendpoint2d(void *p);
   static void destruct_larlitecLcLendpoint2d(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::endpoint2d*)
   {
      ::larlite::endpoint2d *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::endpoint2d));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::endpoint2d", "endpoint2d.h", 25,
                  typeid(::larlite::endpoint2d), DefineBehavior(ptr, ptr),
                  &larlitecLcLendpoint2d_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::endpoint2d) );
      instance.SetNew(&new_larlitecLcLendpoint2d);
      instance.SetNewArray(&newArray_larlitecLcLendpoint2d);
      instance.SetDelete(&delete_larlitecLcLendpoint2d);
      instance.SetDeleteArray(&deleteArray_larlitecLcLendpoint2d);
      instance.SetDestructor(&destruct_larlitecLcLendpoint2d);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::endpoint2d*)
   {
      return GenerateInitInstanceLocal((::larlite::endpoint2d*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::endpoint2d*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLendpoint2d_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::endpoint2d*)0x0)->GetClass();
      larlitecLcLendpoint2d_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLendpoint2d_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_endpoint2d_Dictionary();
   static void larlitecLcLevent_endpoint2d_TClassManip(TClass*);
   static void *new_larlitecLcLevent_endpoint2d(void *p = 0);
   static void *newArray_larlitecLcLevent_endpoint2d(Long_t size, void *p);
   static void delete_larlitecLcLevent_endpoint2d(void *p);
   static void deleteArray_larlitecLcLevent_endpoint2d(void *p);
   static void destruct_larlitecLcLevent_endpoint2d(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_endpoint2d*)
   {
      ::larlite::event_endpoint2d *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_endpoint2d));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_endpoint2d", "endpoint2d.h", 69,
                  typeid(::larlite::event_endpoint2d), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_endpoint2d_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_endpoint2d) );
      instance.SetNew(&new_larlitecLcLevent_endpoint2d);
      instance.SetNewArray(&newArray_larlitecLcLevent_endpoint2d);
      instance.SetDelete(&delete_larlitecLcLevent_endpoint2d);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_endpoint2d);
      instance.SetDestructor(&destruct_larlitecLcLevent_endpoint2d);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_endpoint2d*)
   {
      return GenerateInitInstanceLocal((::larlite::event_endpoint2d*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_endpoint2d*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_endpoint2d_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_endpoint2d*)0x0)->GetClass();
      larlitecLcLevent_endpoint2d_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_endpoint2d_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLseed_Dictionary();
   static void larlitecLcLseed_TClassManip(TClass*);
   static void *new_larlitecLcLseed(void *p = 0);
   static void *newArray_larlitecLcLseed(Long_t size, void *p);
   static void delete_larlitecLcLseed(void *p);
   static void deleteArray_larlitecLcLseed(void *p);
   static void destruct_larlitecLcLseed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::seed*)
   {
      ::larlite::seed *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::seed));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::seed", "seed.h", 29,
                  typeid(::larlite::seed), DefineBehavior(ptr, ptr),
                  &larlitecLcLseed_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::seed) );
      instance.SetNew(&new_larlitecLcLseed);
      instance.SetNewArray(&newArray_larlitecLcLseed);
      instance.SetDelete(&delete_larlitecLcLseed);
      instance.SetDeleteArray(&deleteArray_larlitecLcLseed);
      instance.SetDestructor(&destruct_larlitecLcLseed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::seed*)
   {
      return GenerateInitInstanceLocal((::larlite::seed*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::seed*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLseed_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::seed*)0x0)->GetClass();
      larlitecLcLseed_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLseed_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_seed_Dictionary();
   static void larlitecLcLevent_seed_TClassManip(TClass*);
   static void *new_larlitecLcLevent_seed(void *p = 0);
   static void *newArray_larlitecLcLevent_seed(Long_t size, void *p);
   static void delete_larlitecLcLevent_seed(void *p);
   static void deleteArray_larlitecLcLevent_seed(void *p);
   static void destruct_larlitecLcLevent_seed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_seed*)
   {
      ::larlite::event_seed *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_seed));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_seed", "seed.h", 99,
                  typeid(::larlite::event_seed), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_seed_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_seed) );
      instance.SetNew(&new_larlitecLcLevent_seed);
      instance.SetNewArray(&newArray_larlitecLcLevent_seed);
      instance.SetDelete(&delete_larlitecLcLevent_seed);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_seed);
      instance.SetDestructor(&destruct_larlitecLcLevent_seed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_seed*)
   {
      return GenerateInitInstanceLocal((::larlite::event_seed*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_seed*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_seed_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_seed*)0x0)->GetClass();
      larlitecLcLevent_seed_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_seed_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLspacepoint_Dictionary();
   static void larlitecLcLspacepoint_TClassManip(TClass*);
   static void *new_larlitecLcLspacepoint(void *p = 0);
   static void *newArray_larlitecLcLspacepoint(Long_t size, void *p);
   static void delete_larlitecLcLspacepoint(void *p);
   static void deleteArray_larlitecLcLspacepoint(void *p);
   static void destruct_larlitecLcLspacepoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::spacepoint*)
   {
      ::larlite::spacepoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::spacepoint));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::spacepoint", "spacepoint.h", 27,
                  typeid(::larlite::spacepoint), DefineBehavior(ptr, ptr),
                  &larlitecLcLspacepoint_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::spacepoint) );
      instance.SetNew(&new_larlitecLcLspacepoint);
      instance.SetNewArray(&newArray_larlitecLcLspacepoint);
      instance.SetDelete(&delete_larlitecLcLspacepoint);
      instance.SetDeleteArray(&deleteArray_larlitecLcLspacepoint);
      instance.SetDestructor(&destruct_larlitecLcLspacepoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::spacepoint*)
   {
      return GenerateInitInstanceLocal((::larlite::spacepoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::spacepoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLspacepoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::spacepoint*)0x0)->GetClass();
      larlitecLcLspacepoint_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLspacepoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_spacepoint_Dictionary();
   static void larlitecLcLevent_spacepoint_TClassManip(TClass*);
   static void *new_larlitecLcLevent_spacepoint(void *p = 0);
   static void *newArray_larlitecLcLevent_spacepoint(Long_t size, void *p);
   static void delete_larlitecLcLevent_spacepoint(void *p);
   static void deleteArray_larlitecLcLevent_spacepoint(void *p);
   static void destruct_larlitecLcLevent_spacepoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_spacepoint*)
   {
      ::larlite::event_spacepoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_spacepoint));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_spacepoint", "spacepoint.h", 65,
                  typeid(::larlite::event_spacepoint), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_spacepoint_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_spacepoint) );
      instance.SetNew(&new_larlitecLcLevent_spacepoint);
      instance.SetNewArray(&newArray_larlitecLcLevent_spacepoint);
      instance.SetDelete(&delete_larlitecLcLevent_spacepoint);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_spacepoint);
      instance.SetDestructor(&destruct_larlitecLcLevent_spacepoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_spacepoint*)
   {
      return GenerateInitInstanceLocal((::larlite::event_spacepoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_spacepoint*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_spacepoint_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_spacepoint*)0x0)->GetClass();
      larlitecLcLevent_spacepoint_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_spacepoint_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLtrack_Dictionary();
   static void larlitecLcLtrack_TClassManip(TClass*);
   static void *new_larlitecLcLtrack(void *p = 0);
   static void *newArray_larlitecLcLtrack(Long_t size, void *p);
   static void delete_larlitecLcLtrack(void *p);
   static void deleteArray_larlitecLcLtrack(void *p);
   static void destruct_larlitecLcLtrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::track*)
   {
      ::larlite::track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::track));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::track", "track.h", 29,
                  typeid(::larlite::track), DefineBehavior(ptr, ptr),
                  &larlitecLcLtrack_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::track) );
      instance.SetNew(&new_larlitecLcLtrack);
      instance.SetNewArray(&newArray_larlitecLcLtrack);
      instance.SetDelete(&delete_larlitecLcLtrack);
      instance.SetDeleteArray(&deleteArray_larlitecLcLtrack);
      instance.SetDestructor(&destruct_larlitecLcLtrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::track*)
   {
      return GenerateInitInstanceLocal((::larlite::track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::track*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLtrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::track*)0x0)->GetClass();
      larlitecLcLtrack_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLtrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_track_Dictionary();
   static void larlitecLcLevent_track_TClassManip(TClass*);
   static void *new_larlitecLcLevent_track(void *p = 0);
   static void *newArray_larlitecLcLevent_track(Long_t size, void *p);
   static void delete_larlitecLcLevent_track(void *p);
   static void deleteArray_larlitecLcLevent_track(void *p);
   static void destruct_larlitecLcLevent_track(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_track*)
   {
      ::larlite::event_track *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_track));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_track", "track.h", 121,
                  typeid(::larlite::event_track), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_track_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_track) );
      instance.SetNew(&new_larlitecLcLevent_track);
      instance.SetNewArray(&newArray_larlitecLcLevent_track);
      instance.SetDelete(&delete_larlitecLcLevent_track);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_track);
      instance.SetDestructor(&destruct_larlitecLcLevent_track);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_track*)
   {
      return GenerateInitInstanceLocal((::larlite::event_track*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_track*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_track_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_track*)0x0)->GetClass();
      larlitecLcLevent_track_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_track_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLshower_Dictionary();
   static void larlitecLcLshower_TClassManip(TClass*);
   static void *new_larlitecLcLshower(void *p = 0);
   static void *newArray_larlitecLcLshower(Long_t size, void *p);
   static void delete_larlitecLcLshower(void *p);
   static void deleteArray_larlitecLcLshower(void *p);
   static void destruct_larlitecLcLshower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::shower*)
   {
      ::larlite::shower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::shower));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::shower", "shower.h", 25,
                  typeid(::larlite::shower), DefineBehavior(ptr, ptr),
                  &larlitecLcLshower_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::shower) );
      instance.SetNew(&new_larlitecLcLshower);
      instance.SetNewArray(&newArray_larlitecLcLshower);
      instance.SetDelete(&delete_larlitecLcLshower);
      instance.SetDeleteArray(&deleteArray_larlitecLcLshower);
      instance.SetDestructor(&destruct_larlitecLcLshower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::shower*)
   {
      return GenerateInitInstanceLocal((::larlite::shower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::shower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLshower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::shower*)0x0)->GetClass();
      larlitecLcLshower_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLshower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_shower_Dictionary();
   static void larlitecLcLevent_shower_TClassManip(TClass*);
   static void *new_larlitecLcLevent_shower(void *p = 0);
   static void *newArray_larlitecLcLevent_shower(Long_t size, void *p);
   static void delete_larlitecLcLevent_shower(void *p);
   static void deleteArray_larlitecLcLevent_shower(void *p);
   static void destruct_larlitecLcLevent_shower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_shower*)
   {
      ::larlite::event_shower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_shower));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_shower", "shower.h", 99,
                  typeid(::larlite::event_shower), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_shower_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_shower) );
      instance.SetNew(&new_larlitecLcLevent_shower);
      instance.SetNewArray(&newArray_larlitecLcLevent_shower);
      instance.SetDelete(&delete_larlitecLcLevent_shower);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_shower);
      instance.SetDestructor(&destruct_larlitecLcLevent_shower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_shower*)
   {
      return GenerateInitInstanceLocal((::larlite::event_shower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_shower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_shower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_shower*)0x0)->GetClass();
      larlitecLcLevent_shower_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_shower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLvertex_Dictionary();
   static void larlitecLcLvertex_TClassManip(TClass*);
   static void *new_larlitecLcLvertex(void *p = 0);
   static void *newArray_larlitecLcLvertex(Long_t size, void *p);
   static void delete_larlitecLcLvertex(void *p);
   static void deleteArray_larlitecLcLvertex(void *p);
   static void destruct_larlitecLcLvertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::vertex*)
   {
      ::larlite::vertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::vertex));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::vertex", "vertex.h", 25,
                  typeid(::larlite::vertex), DefineBehavior(ptr, ptr),
                  &larlitecLcLvertex_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::vertex) );
      instance.SetNew(&new_larlitecLcLvertex);
      instance.SetNewArray(&newArray_larlitecLcLvertex);
      instance.SetDelete(&delete_larlitecLcLvertex);
      instance.SetDeleteArray(&deleteArray_larlitecLcLvertex);
      instance.SetDestructor(&destruct_larlitecLcLvertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::vertex*)
   {
      return GenerateInitInstanceLocal((::larlite::vertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::vertex*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLvertex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::vertex*)0x0)->GetClass();
      larlitecLcLvertex_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLvertex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_vertex_Dictionary();
   static void larlitecLcLevent_vertex_TClassManip(TClass*);
   static void *new_larlitecLcLevent_vertex(void *p = 0);
   static void *newArray_larlitecLcLevent_vertex(Long_t size, void *p);
   static void delete_larlitecLcLevent_vertex(void *p);
   static void deleteArray_larlitecLcLevent_vertex(void *p);
   static void destruct_larlitecLcLevent_vertex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_vertex*)
   {
      ::larlite::event_vertex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_vertex));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_vertex", "vertex.h", 65,
                  typeid(::larlite::event_vertex), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_vertex_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_vertex) );
      instance.SetNew(&new_larlitecLcLevent_vertex);
      instance.SetNewArray(&newArray_larlitecLcLevent_vertex);
      instance.SetDelete(&delete_larlitecLcLevent_vertex);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_vertex);
      instance.SetDestructor(&destruct_larlitecLcLevent_vertex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_vertex*)
   {
      return GenerateInitInstanceLocal((::larlite::event_vertex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_vertex*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_vertex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_vertex*)0x0)->GetClass();
      larlitecLcLevent_vertex_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_vertex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLcalorimetry_Dictionary();
   static void larlitecLcLcalorimetry_TClassManip(TClass*);
   static void *new_larlitecLcLcalorimetry(void *p = 0);
   static void *newArray_larlitecLcLcalorimetry(Long_t size, void *p);
   static void delete_larlitecLcLcalorimetry(void *p);
   static void deleteArray_larlitecLcLcalorimetry(void *p);
   static void destruct_larlitecLcLcalorimetry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::calorimetry*)
   {
      ::larlite::calorimetry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::calorimetry));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::calorimetry", "calorimetry.h", 26,
                  typeid(::larlite::calorimetry), DefineBehavior(ptr, ptr),
                  &larlitecLcLcalorimetry_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::calorimetry) );
      instance.SetNew(&new_larlitecLcLcalorimetry);
      instance.SetNewArray(&newArray_larlitecLcLcalorimetry);
      instance.SetDelete(&delete_larlitecLcLcalorimetry);
      instance.SetDeleteArray(&deleteArray_larlitecLcLcalorimetry);
      instance.SetDestructor(&destruct_larlitecLcLcalorimetry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::calorimetry*)
   {
      return GenerateInitInstanceLocal((::larlite::calorimetry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::calorimetry*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLcalorimetry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::calorimetry*)0x0)->GetClass();
      larlitecLcLcalorimetry_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLcalorimetry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_calorimetry_Dictionary();
   static void larlitecLcLevent_calorimetry_TClassManip(TClass*);
   static void *new_larlitecLcLevent_calorimetry(void *p = 0);
   static void *newArray_larlitecLcLevent_calorimetry(Long_t size, void *p);
   static void delete_larlitecLcLevent_calorimetry(void *p);
   static void deleteArray_larlitecLcLevent_calorimetry(void *p);
   static void destruct_larlitecLcLevent_calorimetry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_calorimetry*)
   {
      ::larlite::event_calorimetry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_calorimetry));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_calorimetry", "calorimetry.h", 100,
                  typeid(::larlite::event_calorimetry), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_calorimetry_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_calorimetry) );
      instance.SetNew(&new_larlitecLcLevent_calorimetry);
      instance.SetNewArray(&newArray_larlitecLcLevent_calorimetry);
      instance.SetDelete(&delete_larlitecLcLevent_calorimetry);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_calorimetry);
      instance.SetDestructor(&destruct_larlitecLcLevent_calorimetry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_calorimetry*)
   {
      return GenerateInitInstanceLocal((::larlite::event_calorimetry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_calorimetry*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_calorimetry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_calorimetry*)0x0)->GetClass();
      larlitecLcLevent_calorimetry_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_calorimetry_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLpfpart_Dictionary();
   static void larlitecLcLpfpart_TClassManip(TClass*);
   static void *new_larlitecLcLpfpart(void *p = 0);
   static void *newArray_larlitecLcLpfpart(Long_t size, void *p);
   static void delete_larlitecLcLpfpart(void *p);
   static void deleteArray_larlitecLcLpfpart(void *p);
   static void destruct_larlitecLcLpfpart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::pfpart*)
   {
      ::larlite::pfpart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::pfpart));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::pfpart", "pfpart.h", 28,
                  typeid(::larlite::pfpart), DefineBehavior(ptr, ptr),
                  &larlitecLcLpfpart_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::pfpart) );
      instance.SetNew(&new_larlitecLcLpfpart);
      instance.SetNewArray(&newArray_larlitecLcLpfpart);
      instance.SetDelete(&delete_larlitecLcLpfpart);
      instance.SetDeleteArray(&deleteArray_larlitecLcLpfpart);
      instance.SetDestructor(&destruct_larlitecLcLpfpart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::pfpart*)
   {
      return GenerateInitInstanceLocal((::larlite::pfpart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::pfpart*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLpfpart_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::pfpart*)0x0)->GetClass();
      larlitecLcLpfpart_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLpfpart_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_pfpart_Dictionary();
   static void larlitecLcLevent_pfpart_TClassManip(TClass*);
   static void *new_larlitecLcLevent_pfpart(void *p = 0);
   static void *newArray_larlitecLcLevent_pfpart(Long_t size, void *p);
   static void delete_larlitecLcLevent_pfpart(void *p);
   static void deleteArray_larlitecLcLevent_pfpart(void *p);
   static void destruct_larlitecLcLevent_pfpart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_pfpart*)
   {
      ::larlite::event_pfpart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_pfpart));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_pfpart", "pfpart.h", 80,
                  typeid(::larlite::event_pfpart), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_pfpart_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_pfpart) );
      instance.SetNew(&new_larlitecLcLevent_pfpart);
      instance.SetNewArray(&newArray_larlitecLcLevent_pfpart);
      instance.SetDelete(&delete_larlitecLcLevent_pfpart);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_pfpart);
      instance.SetDestructor(&destruct_larlitecLcLevent_pfpart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_pfpart*)
   {
      return GenerateInitInstanceLocal((::larlite::event_pfpart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_pfpart*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_pfpart_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_pfpart*)0x0)->GetClass();
      larlitecLcLevent_pfpart_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_pfpart_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLpartid_Dictionary();
   static void larlitecLcLpartid_TClassManip(TClass*);
   static void *new_larlitecLcLpartid(void *p = 0);
   static void *newArray_larlitecLcLpartid(Long_t size, void *p);
   static void delete_larlitecLcLpartid(void *p);
   static void deleteArray_larlitecLcLpartid(void *p);
   static void destruct_larlitecLcLpartid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::partid*)
   {
      ::larlite::partid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::partid));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::partid", "partid.h", 25,
                  typeid(::larlite::partid), DefineBehavior(ptr, ptr),
                  &larlitecLcLpartid_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::partid) );
      instance.SetNew(&new_larlitecLcLpartid);
      instance.SetNewArray(&newArray_larlitecLcLpartid);
      instance.SetDelete(&delete_larlitecLcLpartid);
      instance.SetDeleteArray(&deleteArray_larlitecLcLpartid);
      instance.SetDestructor(&destruct_larlitecLcLpartid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::partid*)
   {
      return GenerateInitInstanceLocal((::larlite::partid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::partid*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLpartid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::partid*)0x0)->GetClass();
      larlitecLcLpartid_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLpartid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_partid_Dictionary();
   static void larlitecLcLevent_partid_TClassManip(TClass*);
   static void *new_larlitecLcLevent_partid(void *p = 0);
   static void *newArray_larlitecLcLevent_partid(Long_t size, void *p);
   static void delete_larlitecLcLevent_partid(void *p);
   static void deleteArray_larlitecLcLevent_partid(void *p);
   static void destruct_larlitecLcLevent_partid(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_partid*)
   {
      ::larlite::event_partid *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_partid));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_partid", "partid.h", 90,
                  typeid(::larlite::event_partid), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_partid_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_partid) );
      instance.SetNew(&new_larlitecLcLevent_partid);
      instance.SetNewArray(&newArray_larlitecLcLevent_partid);
      instance.SetDelete(&delete_larlitecLcLevent_partid);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_partid);
      instance.SetDestructor(&destruct_larlitecLcLevent_partid);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_partid*)
   {
      return GenerateInitInstanceLocal((::larlite::event_partid*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_partid*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_partid_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_partid*)0x0)->GetClass();
      larlitecLcLevent_partid_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_partid_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLuser_info_Dictionary();
   static void larlitecLcLuser_info_TClassManip(TClass*);
   static void *new_larlitecLcLuser_info(void *p = 0);
   static void *newArray_larlitecLcLuser_info(Long_t size, void *p);
   static void delete_larlitecLcLuser_info(void *p);
   static void deleteArray_larlitecLcLuser_info(void *p);
   static void destruct_larlitecLcLuser_info(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::user_info*)
   {
      ::larlite::user_info *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::user_info));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::user_info", "user_info.h", 36,
                  typeid(::larlite::user_info), DefineBehavior(ptr, ptr),
                  &larlitecLcLuser_info_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::user_info) );
      instance.SetNew(&new_larlitecLcLuser_info);
      instance.SetNewArray(&newArray_larlitecLcLuser_info);
      instance.SetDelete(&delete_larlitecLcLuser_info);
      instance.SetDeleteArray(&deleteArray_larlitecLcLuser_info);
      instance.SetDestructor(&destruct_larlitecLcLuser_info);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::user_info*)
   {
      return GenerateInitInstanceLocal((::larlite::user_info*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::user_info*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLuser_info_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::user_info*)0x0)->GetClass();
      larlitecLcLuser_info_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLuser_info_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_user_Dictionary();
   static void larlitecLcLevent_user_TClassManip(TClass*);
   static void *new_larlitecLcLevent_user(void *p = 0);
   static void *newArray_larlitecLcLevent_user(Long_t size, void *p);
   static void delete_larlitecLcLevent_user(void *p);
   static void deleteArray_larlitecLcLevent_user(void *p);
   static void destruct_larlitecLcLevent_user(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_user*)
   {
      ::larlite::event_user *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_user));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_user", "user_info.h", 128,
                  typeid(::larlite::event_user), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_user_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_user) );
      instance.SetNew(&new_larlitecLcLevent_user);
      instance.SetNewArray(&newArray_larlitecLcLevent_user);
      instance.SetDelete(&delete_larlitecLcLevent_user);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_user);
      instance.SetDestructor(&destruct_larlitecLcLevent_user);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_user*)
   {
      return GenerateInitInstanceLocal((::larlite::event_user*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_user*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_user_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_user*)0x0)->GetClass();
      larlitecLcLevent_user_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_user_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLgtruth_Dictionary();
   static void larlitecLcLgtruth_TClassManip(TClass*);
   static void *new_larlitecLcLgtruth(void *p = 0);
   static void *newArray_larlitecLcLgtruth(Long_t size, void *p);
   static void delete_larlitecLcLgtruth(void *p);
   static void deleteArray_larlitecLcLgtruth(void *p);
   static void destruct_larlitecLcLgtruth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::gtruth*)
   {
      ::larlite::gtruth *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::gtruth));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::gtruth", "gtruth.h", 30,
                  typeid(::larlite::gtruth), DefineBehavior(ptr, ptr),
                  &larlitecLcLgtruth_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::gtruth) );
      instance.SetNew(&new_larlitecLcLgtruth);
      instance.SetNewArray(&newArray_larlitecLcLgtruth);
      instance.SetDelete(&delete_larlitecLcLgtruth);
      instance.SetDeleteArray(&deleteArray_larlitecLcLgtruth);
      instance.SetDestructor(&destruct_larlitecLcLgtruth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::gtruth*)
   {
      return GenerateInitInstanceLocal((::larlite::gtruth*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::gtruth*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLgtruth_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::gtruth*)0x0)->GetClass();
      larlitecLcLgtruth_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLgtruth_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_gtruth_Dictionary();
   static void larlitecLcLevent_gtruth_TClassManip(TClass*);
   static void *new_larlitecLcLevent_gtruth(void *p = 0);
   static void *newArray_larlitecLcLevent_gtruth(Long_t size, void *p);
   static void delete_larlitecLcLevent_gtruth(void *p);
   static void deleteArray_larlitecLcLevent_gtruth(void *p);
   static void destruct_larlitecLcLevent_gtruth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_gtruth*)
   {
      ::larlite::event_gtruth *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_gtruth));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_gtruth", "gtruth.h", 94,
                  typeid(::larlite::event_gtruth), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_gtruth_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_gtruth) );
      instance.SetNew(&new_larlitecLcLevent_gtruth);
      instance.SetNewArray(&newArray_larlitecLcLevent_gtruth);
      instance.SetDelete(&delete_larlitecLcLevent_gtruth);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_gtruth);
      instance.SetDestructor(&destruct_larlitecLcLevent_gtruth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_gtruth*)
   {
      return GenerateInitInstanceLocal((::larlite::event_gtruth*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_gtruth*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_gtruth_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_gtruth*)0x0)->GetClass();
      larlitecLcLevent_gtruth_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_gtruth_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmcshower_Dictionary();
   static void larlitecLcLmcshower_TClassManip(TClass*);
   static void *new_larlitecLcLmcshower(void *p = 0);
   static void *newArray_larlitecLcLmcshower(Long_t size, void *p);
   static void delete_larlitecLcLmcshower(void *p);
   static void deleteArray_larlitecLcLmcshower(void *p);
   static void destruct_larlitecLcLmcshower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mcshower*)
   {
      ::larlite::mcshower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mcshower));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mcshower", "mcshower.h", 26,
                  typeid(::larlite::mcshower), DefineBehavior(ptr, ptr),
                  &larlitecLcLmcshower_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mcshower) );
      instance.SetNew(&new_larlitecLcLmcshower);
      instance.SetNewArray(&newArray_larlitecLcLmcshower);
      instance.SetDelete(&delete_larlitecLcLmcshower);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmcshower);
      instance.SetDestructor(&destruct_larlitecLcLmcshower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mcshower*)
   {
      return GenerateInitInstanceLocal((::larlite::mcshower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mcshower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmcshower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mcshower*)0x0)->GetClass();
      larlitecLcLmcshower_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmcshower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_mcshower_Dictionary();
   static void larlitecLcLevent_mcshower_TClassManip(TClass*);
   static void *new_larlitecLcLevent_mcshower(void *p = 0);
   static void *newArray_larlitecLcLevent_mcshower(Long_t size, void *p);
   static void delete_larlitecLcLevent_mcshower(void *p);
   static void deleteArray_larlitecLcLevent_mcshower(void *p);
   static void destruct_larlitecLcLevent_mcshower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_mcshower*)
   {
      ::larlite::event_mcshower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_mcshower));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_mcshower", "mcshower.h", 157,
                  typeid(::larlite::event_mcshower), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_mcshower_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_mcshower) );
      instance.SetNew(&new_larlitecLcLevent_mcshower);
      instance.SetNewArray(&newArray_larlitecLcLevent_mcshower);
      instance.SetDelete(&delete_larlitecLcLevent_mcshower);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_mcshower);
      instance.SetDestructor(&destruct_larlitecLcLevent_mcshower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_mcshower*)
   {
      return GenerateInitInstanceLocal((::larlite::event_mcshower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_mcshower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_mcshower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_mcshower*)0x0)->GetClass();
      larlitecLcLevent_mcshower_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_mcshower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmcpart_Dictionary();
   static void larlitecLcLmcpart_TClassManip(TClass*);
   static void *new_larlitecLcLmcpart(void *p = 0);
   static void *newArray_larlitecLcLmcpart(Long_t size, void *p);
   static void delete_larlitecLcLmcpart(void *p);
   static void deleteArray_larlitecLcLmcpart(void *p);
   static void destruct_larlitecLcLmcpart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mcpart*)
   {
      ::larlite::mcpart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mcpart));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mcpart", "mcpart.h", 25,
                  typeid(::larlite::mcpart), DefineBehavior(ptr, ptr),
                  &larlitecLcLmcpart_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mcpart) );
      instance.SetNew(&new_larlitecLcLmcpart);
      instance.SetNewArray(&newArray_larlitecLcLmcpart);
      instance.SetDelete(&delete_larlitecLcLmcpart);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmcpart);
      instance.SetDestructor(&destruct_larlitecLcLmcpart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mcpart*)
   {
      return GenerateInitInstanceLocal((::larlite::mcpart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mcpart*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmcpart_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mcpart*)0x0)->GetClass();
      larlitecLcLmcpart_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmcpart_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_mcpart_Dictionary();
   static void larlitecLcLevent_mcpart_TClassManip(TClass*);
   static void *new_larlitecLcLevent_mcpart(void *p = 0);
   static void *newArray_larlitecLcLevent_mcpart(Long_t size, void *p);
   static void delete_larlitecLcLevent_mcpart(void *p);
   static void deleteArray_larlitecLcLevent_mcpart(void *p);
   static void destruct_larlitecLcLevent_mcpart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_mcpart*)
   {
      ::larlite::event_mcpart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_mcpart));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_mcpart", "mcpart.h", 132,
                  typeid(::larlite::event_mcpart), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_mcpart_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_mcpart) );
      instance.SetNew(&new_larlitecLcLevent_mcpart);
      instance.SetNewArray(&newArray_larlitecLcLevent_mcpart);
      instance.SetDelete(&delete_larlitecLcLevent_mcpart);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_mcpart);
      instance.SetDestructor(&destruct_larlitecLcLevent_mcpart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_mcpart*)
   {
      return GenerateInitInstanceLocal((::larlite::event_mcpart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_mcpart*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_mcpart_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_mcpart*)0x0)->GetClass();
      larlitecLcLevent_mcpart_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_mcpart_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *treenode_Dictionary();
   static void treenode_TClassManip(TClass*);
   static void *new_treenode(void *p = 0);
   static void *newArray_treenode(Long_t size, void *p);
   static void delete_treenode(void *p);
   static void deleteArray_treenode(void *p);
   static void destruct_treenode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::treenode*)
   {
      ::treenode *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::treenode));
      static ::ROOT::TGenericClassInfo 
         instance("treenode", "treenode.h", 25,
                  typeid(::treenode), DefineBehavior(ptr, ptr),
                  &treenode_Dictionary, isa_proxy, 4,
                  sizeof(::treenode) );
      instance.SetNew(&new_treenode);
      instance.SetNewArray(&newArray_treenode);
      instance.SetDelete(&delete_treenode);
      instance.SetDeleteArray(&deleteArray_treenode);
      instance.SetDestructor(&destruct_treenode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::treenode*)
   {
      return GenerateInitInstanceLocal((::treenode*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::treenode*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *treenode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::treenode*)0x0)->GetClass();
      treenode_TClassManip(theClass);
   return theClass;
   }

   static void treenode_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmctree_Dictionary();
   static void larlitecLcLmctree_TClassManip(TClass*);
   static void *new_larlitecLcLmctree(void *p = 0);
   static void *newArray_larlitecLcLmctree(Long_t size, void *p);
   static void delete_larlitecLcLmctree(void *p);
   static void deleteArray_larlitecLcLmctree(void *p);
   static void destruct_larlitecLcLmctree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mctree*)
   {
      ::larlite::mctree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mctree));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mctree", "mctree.h", 29,
                  typeid(::larlite::mctree), DefineBehavior(ptr, ptr),
                  &larlitecLcLmctree_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mctree) );
      instance.SetNew(&new_larlitecLcLmctree);
      instance.SetNewArray(&newArray_larlitecLcLmctree);
      instance.SetDelete(&delete_larlitecLcLmctree);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmctree);
      instance.SetDestructor(&destruct_larlitecLcLmctree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mctree*)
   {
      return GenerateInitInstanceLocal((::larlite::mctree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mctree*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmctree_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mctree*)0x0)->GetClass();
      larlitecLcLmctree_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmctree_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_mctree_Dictionary();
   static void larlitecLcLevent_mctree_TClassManip(TClass*);
   static void *new_larlitecLcLevent_mctree(void *p = 0);
   static void *newArray_larlitecLcLevent_mctree(Long_t size, void *p);
   static void delete_larlitecLcLevent_mctree(void *p);
   static void deleteArray_larlitecLcLevent_mctree(void *p);
   static void destruct_larlitecLcLevent_mctree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_mctree*)
   {
      ::larlite::event_mctree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_mctree));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_mctree", "mctree.h", 59,
                  typeid(::larlite::event_mctree), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_mctree_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_mctree) );
      instance.SetNew(&new_larlitecLcLevent_mctree);
      instance.SetNewArray(&newArray_larlitecLcLevent_mctree);
      instance.SetDelete(&delete_larlitecLcLevent_mctree);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_mctree);
      instance.SetDestructor(&destruct_larlitecLcLevent_mctree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_mctree*)
   {
      return GenerateInitInstanceLocal((::larlite::event_mctree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_mctree*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_mctree_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_mctree*)0x0)->GetClass();
      larlitecLcLevent_mctree_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_mctree_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmcflux_Dictionary();
   static void larlitecLcLmcflux_TClassManip(TClass*);
   static void *new_larlitecLcLmcflux(void *p = 0);
   static void *newArray_larlitecLcLmcflux(Long_t size, void *p);
   static void delete_larlitecLcLmcflux(void *p);
   static void deleteArray_larlitecLcLmcflux(void *p);
   static void destruct_larlitecLcLmcflux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mcflux*)
   {
      ::larlite::mcflux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mcflux));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mcflux", "mcflux.h", 28,
                  typeid(::larlite::mcflux), DefineBehavior(ptr, ptr),
                  &larlitecLcLmcflux_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mcflux) );
      instance.SetNew(&new_larlitecLcLmcflux);
      instance.SetNewArray(&newArray_larlitecLcLmcflux);
      instance.SetDelete(&delete_larlitecLcLmcflux);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmcflux);
      instance.SetDestructor(&destruct_larlitecLcLmcflux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mcflux*)
   {
      return GenerateInitInstanceLocal((::larlite::mcflux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mcflux*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmcflux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mcflux*)0x0)->GetClass();
      larlitecLcLmcflux_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmcflux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_mcflux_Dictionary();
   static void larlitecLcLevent_mcflux_TClassManip(TClass*);
   static void *new_larlitecLcLevent_mcflux(void *p = 0);
   static void *newArray_larlitecLcLevent_mcflux(Long_t size, void *p);
   static void delete_larlitecLcLevent_mcflux(void *p);
   static void deleteArray_larlitecLcLevent_mcflux(void *p);
   static void destruct_larlitecLcLevent_mcflux(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_mcflux*)
   {
      ::larlite::event_mcflux *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_mcflux));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_mcflux", "mcflux.h", 144,
                  typeid(::larlite::event_mcflux), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_mcflux_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_mcflux) );
      instance.SetNew(&new_larlitecLcLevent_mcflux);
      instance.SetNewArray(&newArray_larlitecLcLevent_mcflux);
      instance.SetDelete(&delete_larlitecLcLevent_mcflux);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_mcflux);
      instance.SetDestructor(&destruct_larlitecLcLevent_mcflux);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_mcflux*)
   {
      return GenerateInitInstanceLocal((::larlite::event_mcflux*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_mcflux*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_mcflux_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_mcflux*)0x0)->GetClass();
      larlitecLcLevent_mcflux_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_mcflux_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmcstep_Dictionary();
   static void larlitecLcLmcstep_TClassManip(TClass*);
   static void *new_larlitecLcLmcstep(void *p = 0);
   static void *newArray_larlitecLcLmcstep(Long_t size, void *p);
   static void delete_larlitecLcLmcstep(void *p);
   static void deleteArray_larlitecLcLmcstep(void *p);
   static void destruct_larlitecLcLmcstep(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mcstep*)
   {
      ::larlite::mcstep *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mcstep));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mcstep", "mctrajectory.h", 29,
                  typeid(::larlite::mcstep), DefineBehavior(ptr, ptr),
                  &larlitecLcLmcstep_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mcstep) );
      instance.SetNew(&new_larlitecLcLmcstep);
      instance.SetNewArray(&newArray_larlitecLcLmcstep);
      instance.SetDelete(&delete_larlitecLcLmcstep);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmcstep);
      instance.SetDestructor(&destruct_larlitecLcLmcstep);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mcstep*)
   {
      return GenerateInitInstanceLocal((::larlite::mcstep*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mcstep*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmcstep_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mcstep*)0x0)->GetClass();
      larlitecLcLmcstep_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmcstep_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmctrajectory_Dictionary();
   static void larlitecLcLmctrajectory_TClassManip(TClass*);
   static void *new_larlitecLcLmctrajectory(void *p = 0);
   static void *newArray_larlitecLcLmctrajectory(Long_t size, void *p);
   static void delete_larlitecLcLmctrajectory(void *p);
   static void deleteArray_larlitecLcLmctrajectory(void *p);
   static void destruct_larlitecLcLmctrajectory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mctrajectory*)
   {
      ::larlite::mctrajectory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mctrajectory));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mctrajectory", "mctrajectory.h", 68,
                  typeid(::larlite::mctrajectory), DefineBehavior(ptr, ptr),
                  &larlitecLcLmctrajectory_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mctrajectory) );
      instance.SetNew(&new_larlitecLcLmctrajectory);
      instance.SetNewArray(&newArray_larlitecLcLmctrajectory);
      instance.SetDelete(&delete_larlitecLcLmctrajectory);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmctrajectory);
      instance.SetDestructor(&destruct_larlitecLcLmctrajectory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mctrajectory*)
   {
      return GenerateInitInstanceLocal((::larlite::mctrajectory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mctrajectory*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmctrajectory_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mctrajectory*)0x0)->GetClass();
      larlitecLcLmctrajectory_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmctrajectory_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmctrack_Dictionary();
   static void larlitecLcLmctrack_TClassManip(TClass*);
   static void *new_larlitecLcLmctrack(void *p = 0);
   static void *newArray_larlitecLcLmctrack(Long_t size, void *p);
   static void delete_larlitecLcLmctrack(void *p);
   static void deleteArray_larlitecLcLmctrack(void *p);
   static void destruct_larlitecLcLmctrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mctrack*)
   {
      ::larlite::mctrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mctrack));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mctrack", "mctrack.h", 27,
                  typeid(::larlite::mctrack), DefineBehavior(ptr, ptr),
                  &larlitecLcLmctrack_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mctrack) );
      instance.SetNew(&new_larlitecLcLmctrack);
      instance.SetNewArray(&newArray_larlitecLcLmctrack);
      instance.SetDelete(&delete_larlitecLcLmctrack);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmctrack);
      instance.SetDestructor(&destruct_larlitecLcLmctrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mctrack*)
   {
      return GenerateInitInstanceLocal((::larlite::mctrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mctrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmctrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mctrack*)0x0)->GetClass();
      larlitecLcLmctrack_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmctrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_mctrack_Dictionary();
   static void larlitecLcLevent_mctrack_TClassManip(TClass*);
   static void *new_larlitecLcLevent_mctrack(void *p = 0);
   static void *newArray_larlitecLcLevent_mctrack(Long_t size, void *p);
   static void delete_larlitecLcLevent_mctrack(void *p);
   static void deleteArray_larlitecLcLevent_mctrack(void *p);
   static void destruct_larlitecLcLevent_mctrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_mctrack*)
   {
      ::larlite::event_mctrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_mctrack));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_mctrack", "mctrack.h", 127,
                  typeid(::larlite::event_mctrack), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_mctrack_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_mctrack) );
      instance.SetNew(&new_larlitecLcLevent_mctrack);
      instance.SetNewArray(&newArray_larlitecLcLevent_mctrack);
      instance.SetDelete(&delete_larlitecLcLevent_mctrack);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_mctrack);
      instance.SetDestructor(&destruct_larlitecLcLevent_mctrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_mctrack*)
   {
      return GenerateInitInstanceLocal((::larlite::event_mctrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_mctrack*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_mctrack_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_mctrack*)0x0)->GetClass();
      larlitecLcLevent_mctrack_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_mctrack_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmcnu_Dictionary();
   static void larlitecLcLmcnu_TClassManip(TClass*);
   static void *new_larlitecLcLmcnu(void *p = 0);
   static void *newArray_larlitecLcLmcnu(Long_t size, void *p);
   static void delete_larlitecLcLmcnu(void *p);
   static void deleteArray_larlitecLcLmcnu(void *p);
   static void destruct_larlitecLcLmcnu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mcnu*)
   {
      ::larlite::mcnu *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mcnu));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mcnu", "mcnu.h", 25,
                  typeid(::larlite::mcnu), DefineBehavior(ptr, ptr),
                  &larlitecLcLmcnu_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mcnu) );
      instance.SetNew(&new_larlitecLcLmcnu);
      instance.SetNewArray(&newArray_larlitecLcLmcnu);
      instance.SetDelete(&delete_larlitecLcLmcnu);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmcnu);
      instance.SetDestructor(&destruct_larlitecLcLmcnu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mcnu*)
   {
      return GenerateInitInstanceLocal((::larlite::mcnu*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mcnu*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmcnu_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mcnu*)0x0)->GetClass();
      larlitecLcLmcnu_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmcnu_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLmctruth_Dictionary();
   static void larlitecLcLmctruth_TClassManip(TClass*);
   static void *new_larlitecLcLmctruth(void *p = 0);
   static void *newArray_larlitecLcLmctruth(Long_t size, void *p);
   static void delete_larlitecLcLmctruth(void *p);
   static void deleteArray_larlitecLcLmctruth(void *p);
   static void destruct_larlitecLcLmctruth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::mctruth*)
   {
      ::larlite::mctruth *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::mctruth));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::mctruth", "mctruth.h", 25,
                  typeid(::larlite::mctruth), DefineBehavior(ptr, ptr),
                  &larlitecLcLmctruth_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::mctruth) );
      instance.SetNew(&new_larlitecLcLmctruth);
      instance.SetNewArray(&newArray_larlitecLcLmctruth);
      instance.SetDelete(&delete_larlitecLcLmctruth);
      instance.SetDeleteArray(&deleteArray_larlitecLcLmctruth);
      instance.SetDestructor(&destruct_larlitecLcLmctruth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::mctruth*)
   {
      return GenerateInitInstanceLocal((::larlite::mctruth*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::mctruth*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLmctruth_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::mctruth*)0x0)->GetClass();
      larlitecLcLmctruth_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLmctruth_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_mctruth_Dictionary();
   static void larlitecLcLevent_mctruth_TClassManip(TClass*);
   static void *new_larlitecLcLevent_mctruth(void *p = 0);
   static void *newArray_larlitecLcLevent_mctruth(Long_t size, void *p);
   static void delete_larlitecLcLevent_mctruth(void *p);
   static void deleteArray_larlitecLcLevent_mctruth(void *p);
   static void destruct_larlitecLcLevent_mctruth(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_mctruth*)
   {
      ::larlite::event_mctruth *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_mctruth));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_mctruth", "mctruth.h", 73,
                  typeid(::larlite::event_mctruth), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_mctruth_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_mctruth) );
      instance.SetNew(&new_larlitecLcLevent_mctruth);
      instance.SetNewArray(&newArray_larlitecLcLevent_mctruth);
      instance.SetDelete(&delete_larlitecLcLevent_mctruth);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_mctruth);
      instance.SetDestructor(&destruct_larlitecLcLevent_mctruth);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_mctruth*)
   {
      return GenerateInitInstanceLocal((::larlite::event_mctruth*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_mctruth*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_mctruth_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_mctruth*)0x0)->GetClass();
      larlitecLcLevent_mctruth_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_mctruth_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLide_Dictionary();
   static void larlitecLcLide_TClassManip(TClass*);
   static void *new_larlitecLcLide(void *p = 0);
   static void *newArray_larlitecLcLide(Long_t size, void *p);
   static void delete_larlitecLcLide(void *p);
   static void deleteArray_larlitecLcLide(void *p);
   static void destruct_larlitecLcLide(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::ide*)
   {
      ::larlite::ide *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::ide));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::ide", "simch.h", 26,
                  typeid(::larlite::ide), DefineBehavior(ptr, ptr),
                  &larlitecLcLide_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::ide) );
      instance.SetNew(&new_larlitecLcLide);
      instance.SetNewArray(&newArray_larlitecLcLide);
      instance.SetDelete(&delete_larlitecLcLide);
      instance.SetDeleteArray(&deleteArray_larlitecLcLide);
      instance.SetDestructor(&destruct_larlitecLcLide);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::ide*)
   {
      return GenerateInitInstanceLocal((::larlite::ide*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::ide*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLide_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::ide*)0x0)->GetClass();
      larlitecLcLide_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLide_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLsimch_Dictionary();
   static void larlitecLcLsimch_TClassManip(TClass*);
   static void *new_larlitecLcLsimch(void *p = 0);
   static void *newArray_larlitecLcLsimch(Long_t size, void *p);
   static void delete_larlitecLcLsimch(void *p);
   static void deleteArray_larlitecLcLsimch(void *p);
   static void destruct_larlitecLcLsimch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::simch*)
   {
      ::larlite::simch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::simch));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::simch", "simch.h", 63,
                  typeid(::larlite::simch), DefineBehavior(ptr, ptr),
                  &larlitecLcLsimch_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::simch) );
      instance.SetNew(&new_larlitecLcLsimch);
      instance.SetNewArray(&newArray_larlitecLcLsimch);
      instance.SetDelete(&delete_larlitecLcLsimch);
      instance.SetDeleteArray(&deleteArray_larlitecLcLsimch);
      instance.SetDestructor(&destruct_larlitecLcLsimch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::simch*)
   {
      return GenerateInitInstanceLocal((::larlite::simch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::simch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLsimch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::simch*)0x0)->GetClass();
      larlitecLcLsimch_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLsimch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_simch_Dictionary();
   static void larlitecLcLevent_simch_TClassManip(TClass*);
   static void *new_larlitecLcLevent_simch(void *p = 0);
   static void *newArray_larlitecLcLevent_simch(Long_t size, void *p);
   static void delete_larlitecLcLevent_simch(void *p);
   static void deleteArray_larlitecLcLevent_simch(void *p);
   static void destruct_larlitecLcLevent_simch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_simch*)
   {
      ::larlite::event_simch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_simch));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_simch", "simch.h", 126,
                  typeid(::larlite::event_simch), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_simch_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_simch) );
      instance.SetNew(&new_larlitecLcLevent_simch);
      instance.SetNewArray(&newArray_larlitecLcLevent_simch);
      instance.SetDelete(&delete_larlitecLcLevent_simch);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_simch);
      instance.SetDestructor(&destruct_larlitecLcLevent_simch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_simch*)
   {
      return GenerateInitInstanceLocal((::larlite::event_simch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_simch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_simch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_simch*)0x0)->GetClass();
      larlitecLcLevent_simch_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_simch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLtrigger_Dictionary();
   static void larlitecLcLtrigger_TClassManip(TClass*);
   static void *new_larlitecLcLtrigger(void *p = 0);
   static void *newArray_larlitecLcLtrigger(Long_t size, void *p);
   static void delete_larlitecLcLtrigger(void *p);
   static void deleteArray_larlitecLcLtrigger(void *p);
   static void destruct_larlitecLcLtrigger(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::trigger*)
   {
      ::larlite::trigger *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::trigger));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::trigger", "trigger.h", 13,
                  typeid(::larlite::trigger), DefineBehavior(ptr, ptr),
                  &larlitecLcLtrigger_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::trigger) );
      instance.SetNew(&new_larlitecLcLtrigger);
      instance.SetNewArray(&newArray_larlitecLcLtrigger);
      instance.SetDelete(&delete_larlitecLcLtrigger);
      instance.SetDeleteArray(&deleteArray_larlitecLcLtrigger);
      instance.SetDestructor(&destruct_larlitecLcLtrigger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::trigger*)
   {
      return GenerateInitInstanceLocal((::larlite::trigger*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::trigger*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLtrigger_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::trigger*)0x0)->GetClass();
      larlitecLcLtrigger_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLtrigger_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLminos_Dictionary();
   static void larlitecLcLminos_TClassManip(TClass*);
   static void *new_larlitecLcLminos(void *p = 0);
   static void *newArray_larlitecLcLminos(Long_t size, void *p);
   static void delete_larlitecLcLminos(void *p);
   static void deleteArray_larlitecLcLminos(void *p);
   static void destruct_larlitecLcLminos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::minos*)
   {
      ::larlite::minos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::minos));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::minos", "minos.h", 16,
                  typeid(::larlite::minos), DefineBehavior(ptr, ptr),
                  &larlitecLcLminos_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::minos) );
      instance.SetNew(&new_larlitecLcLminos);
      instance.SetNewArray(&newArray_larlitecLcLminos);
      instance.SetDelete(&delete_larlitecLcLminos);
      instance.SetDeleteArray(&deleteArray_larlitecLcLminos);
      instance.SetDestructor(&destruct_larlitecLcLminos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::minos*)
   {
      return GenerateInitInstanceLocal((::larlite::minos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::minos*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLminos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::minos*)0x0)->GetClass();
      larlitecLcLminos_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLminos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_minos_Dictionary();
   static void larlitecLcLevent_minos_TClassManip(TClass*);
   static void *new_larlitecLcLevent_minos(void *p = 0);
   static void *newArray_larlitecLcLevent_minos(Long_t size, void *p);
   static void delete_larlitecLcLevent_minos(void *p);
   static void deleteArray_larlitecLcLevent_minos(void *p);
   static void destruct_larlitecLcLevent_minos(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_minos*)
   {
      ::larlite::event_minos *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_minos));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_minos", "minos.h", 103,
                  typeid(::larlite::event_minos), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_minos_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_minos) );
      instance.SetNew(&new_larlitecLcLevent_minos);
      instance.SetNewArray(&newArray_larlitecLcLevent_minos);
      instance.SetDelete(&delete_larlitecLcLevent_minos);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_minos);
      instance.SetDestructor(&destruct_larlitecLcLevent_minos);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_minos*)
   {
      return GenerateInitInstanceLocal((::larlite::event_minos*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_minos*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_minos_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_minos*)0x0)->GetClass();
      larlitecLcLevent_minos_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_minos_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLpcaxis_Dictionary();
   static void larlitecLcLpcaxis_TClassManip(TClass*);
   static void *new_larlitecLcLpcaxis(void *p = 0);
   static void *newArray_larlitecLcLpcaxis(Long_t size, void *p);
   static void delete_larlitecLcLpcaxis(void *p);
   static void deleteArray_larlitecLcLpcaxis(void *p);
   static void destruct_larlitecLcLpcaxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::pcaxis*)
   {
      ::larlite::pcaxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::pcaxis));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::pcaxis", "pcaxis.h", 19,
                  typeid(::larlite::pcaxis), DefineBehavior(ptr, ptr),
                  &larlitecLcLpcaxis_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::pcaxis) );
      instance.SetNew(&new_larlitecLcLpcaxis);
      instance.SetNewArray(&newArray_larlitecLcLpcaxis);
      instance.SetDelete(&delete_larlitecLcLpcaxis);
      instance.SetDeleteArray(&deleteArray_larlitecLcLpcaxis);
      instance.SetDestructor(&destruct_larlitecLcLpcaxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::pcaxis*)
   {
      return GenerateInitInstanceLocal((::larlite::pcaxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::pcaxis*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLpcaxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::pcaxis*)0x0)->GetClass();
      larlitecLcLpcaxis_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLpcaxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_pcaxis_Dictionary();
   static void larlitecLcLevent_pcaxis_TClassManip(TClass*);
   static void *new_larlitecLcLevent_pcaxis(void *p = 0);
   static void *newArray_larlitecLcLevent_pcaxis(Long_t size, void *p);
   static void delete_larlitecLcLevent_pcaxis(void *p);
   static void deleteArray_larlitecLcLevent_pcaxis(void *p);
   static void destruct_larlitecLcLevent_pcaxis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_pcaxis*)
   {
      ::larlite::event_pcaxis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_pcaxis));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_pcaxis", "pcaxis.h", 66,
                  typeid(::larlite::event_pcaxis), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_pcaxis_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_pcaxis) );
      instance.SetNew(&new_larlitecLcLevent_pcaxis);
      instance.SetNewArray(&newArray_larlitecLcLevent_pcaxis);
      instance.SetDelete(&delete_larlitecLcLevent_pcaxis);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_pcaxis);
      instance.SetDestructor(&destruct_larlitecLcLevent_pcaxis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_pcaxis*)
   {
      return GenerateInitInstanceLocal((::larlite::event_pcaxis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_pcaxis*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_pcaxis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_pcaxis*)0x0)->GetClass();
      larlitecLcLevent_pcaxis_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_pcaxis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLflashmatch_Dictionary();
   static void larlitecLcLflashmatch_TClassManip(TClass*);
   static void *new_larlitecLcLflashmatch(void *p = 0);
   static void *newArray_larlitecLcLflashmatch(Long_t size, void *p);
   static void delete_larlitecLcLflashmatch(void *p);
   static void deleteArray_larlitecLcLflashmatch(void *p);
   static void destruct_larlitecLcLflashmatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::flashmatch*)
   {
      ::larlite::flashmatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::flashmatch));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::flashmatch", "flashmatch.h", 16,
                  typeid(::larlite::flashmatch), DefineBehavior(ptr, ptr),
                  &larlitecLcLflashmatch_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::flashmatch) );
      instance.SetNew(&new_larlitecLcLflashmatch);
      instance.SetNewArray(&newArray_larlitecLcLflashmatch);
      instance.SetDelete(&delete_larlitecLcLflashmatch);
      instance.SetDeleteArray(&deleteArray_larlitecLcLflashmatch);
      instance.SetDestructor(&destruct_larlitecLcLflashmatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::flashmatch*)
   {
      return GenerateInitInstanceLocal((::larlite::flashmatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::flashmatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLflashmatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::flashmatch*)0x0)->GetClass();
      larlitecLcLflashmatch_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLflashmatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_flashmatch_Dictionary();
   static void larlitecLcLevent_flashmatch_TClassManip(TClass*);
   static void *new_larlitecLcLevent_flashmatch(void *p = 0);
   static void *newArray_larlitecLcLevent_flashmatch(Long_t size, void *p);
   static void delete_larlitecLcLevent_flashmatch(void *p);
   static void deleteArray_larlitecLcLevent_flashmatch(void *p);
   static void destruct_larlitecLcLevent_flashmatch(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_flashmatch*)
   {
      ::larlite::event_flashmatch *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_flashmatch));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_flashmatch", "flashmatch.h", 44,
                  typeid(::larlite::event_flashmatch), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_flashmatch_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_flashmatch) );
      instance.SetNew(&new_larlitecLcLevent_flashmatch);
      instance.SetNewArray(&newArray_larlitecLcLevent_flashmatch);
      instance.SetDelete(&delete_larlitecLcLevent_flashmatch);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_flashmatch);
      instance.SetDestructor(&destruct_larlitecLcLevent_flashmatch);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_flashmatch*)
   {
      return GenerateInitInstanceLocal((::larlite::event_flashmatch*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_flashmatch*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_flashmatch_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_flashmatch*)0x0)->GetClass();
      larlitecLcLevent_flashmatch_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_flashmatch_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_ass_Dictionary();
   static void larlitecLcLevent_ass_TClassManip(TClass*);
   static void *new_larlitecLcLevent_ass(void *p = 0);
   static void *newArray_larlitecLcLevent_ass(Long_t size, void *p);
   static void delete_larlitecLcLevent_ass(void *p);
   static void deleteArray_larlitecLcLevent_ass(void *p);
   static void destruct_larlitecLcLevent_ass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_ass*)
   {
      ::larlite::event_ass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_ass));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_ass", "event_ass.h", 27,
                  typeid(::larlite::event_ass), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_ass_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_ass) );
      instance.SetNew(&new_larlitecLcLevent_ass);
      instance.SetNewArray(&newArray_larlitecLcLevent_ass);
      instance.SetDelete(&delete_larlitecLcLevent_ass);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_ass);
      instance.SetDestructor(&destruct_larlitecLcLevent_ass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_ass*)
   {
      return GenerateInitInstanceLocal((::larlite::event_ass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_ass*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_ass_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_ass*)0x0)->GetClass();
      larlitecLcLevent_ass_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_ass_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLfifo_Dictionary();
   static void larlitecLcLfifo_TClassManip(TClass*);
   static void *new_larlitecLcLfifo(void *p = 0);
   static void *newArray_larlitecLcLfifo(Long_t size, void *p);
   static void delete_larlitecLcLfifo(void *p);
   static void deleteArray_larlitecLcLfifo(void *p);
   static void destruct_larlitecLcLfifo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::fifo*)
   {
      ::larlite::fifo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::fifo));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::fifo", "fifo.h", 28,
                  typeid(::larlite::fifo), DefineBehavior(ptr, ptr),
                  &larlitecLcLfifo_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::fifo) );
      instance.SetNew(&new_larlitecLcLfifo);
      instance.SetNewArray(&newArray_larlitecLcLfifo);
      instance.SetDelete(&delete_larlitecLcLfifo);
      instance.SetDeleteArray(&deleteArray_larlitecLcLfifo);
      instance.SetDestructor(&destruct_larlitecLcLfifo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::fifo*)
   {
      return GenerateInitInstanceLocal((::larlite::fifo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::fifo*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLfifo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::fifo*)0x0)->GetClass();
      larlitecLcLfifo_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLfifo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLevent_fifo_Dictionary();
   static void larlitecLcLevent_fifo_TClassManip(TClass*);
   static void *new_larlitecLcLevent_fifo(void *p = 0);
   static void *newArray_larlitecLcLevent_fifo(Long_t size, void *p);
   static void delete_larlitecLcLevent_fifo(void *p);
   static void deleteArray_larlitecLcLevent_fifo(void *p);
   static void destruct_larlitecLcLevent_fifo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::event_fifo*)
   {
      ::larlite::event_fifo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::event_fifo));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::event_fifo", "fifo.h", 131,
                  typeid(::larlite::event_fifo), DefineBehavior(ptr, ptr),
                  &larlitecLcLevent_fifo_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::event_fifo) );
      instance.SetNew(&new_larlitecLcLevent_fifo);
      instance.SetNewArray(&newArray_larlitecLcLevent_fifo);
      instance.SetDelete(&delete_larlitecLcLevent_fifo);
      instance.SetDeleteArray(&deleteArray_larlitecLcLevent_fifo);
      instance.SetDestructor(&destruct_larlitecLcLevent_fifo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::event_fifo*)
   {
      return GenerateInitInstanceLocal((::larlite::event_fifo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::event_fifo*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLevent_fifo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::event_fifo*)0x0)->GetClass();
      larlitecLcLevent_fifo_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLevent_fifo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *larlitecLcLstorage_manager_Dictionary();
   static void larlitecLcLstorage_manager_TClassManip(TClass*);
   static void *new_larlitecLcLstorage_manager(void *p = 0);
   static void *newArray_larlitecLcLstorage_manager(Long_t size, void *p);
   static void delete_larlitecLcLstorage_manager(void *p);
   static void deleteArray_larlitecLcLstorage_manager(void *p);
   static void destruct_larlitecLcLstorage_manager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::larlite::storage_manager*)
   {
      ::larlite::storage_manager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::larlite::storage_manager));
      static ::ROOT::TGenericClassInfo 
         instance("larlite::storage_manager", "storage_manager.h", 66,
                  typeid(::larlite::storage_manager), DefineBehavior(ptr, ptr),
                  &larlitecLcLstorage_manager_Dictionary, isa_proxy, 4,
                  sizeof(::larlite::storage_manager) );
      instance.SetNew(&new_larlitecLcLstorage_manager);
      instance.SetNewArray(&newArray_larlitecLcLstorage_manager);
      instance.SetDelete(&delete_larlitecLcLstorage_manager);
      instance.SetDeleteArray(&deleteArray_larlitecLcLstorage_manager);
      instance.SetDestructor(&destruct_larlitecLcLstorage_manager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::larlite::storage_manager*)
   {
      return GenerateInitInstanceLocal((::larlite::storage_manager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::larlite::storage_manager*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *larlitecLcLstorage_manager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::larlite::storage_manager*)0x0)->GetClass();
      larlitecLcLstorage_manager_TClassManip(theClass);
   return theClass;
   }

   static void larlitecLcLstorage_manager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEunsignedsPlongcOunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<unsigned long,unsigned long> : new pair<unsigned long,unsigned long>;
   }
   static void *newArray_pairlEunsignedsPlongcOunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<unsigned long,unsigned long>[nElements] : new pair<unsigned long,unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEunsignedsPlongcOunsignedsPlonggR(void *p) {
      delete ((pair<unsigned long,unsigned long>*)p);
   }
   static void deleteArray_pairlEunsignedsPlongcOunsignedsPlonggR(void *p) {
      delete [] ((pair<unsigned long,unsigned long>*)p);
   }
   static void destruct_pairlEunsignedsPlongcOunsignedsPlonggR(void *p) {
      typedef pair<unsigned long,unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<unsigned long,unsigned long>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEunsignedsPshortcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<unsigned short,string> : new pair<unsigned short,string>;
   }
   static void *newArray_pairlEunsignedsPshortcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<unsigned short,string>[nElements] : new pair<unsigned short,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEunsignedsPshortcOstringgR(void *p) {
      delete ((pair<unsigned short,string>*)p);
   }
   static void deleteArray_pairlEunsignedsPshortcOstringgR(void *p) {
      delete [] ((pair<unsigned short,string>*)p);
   }
   static void destruct_pairlEunsignedsPshortcOstringgR(void *p) {
      typedef pair<unsigned short,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<unsigned short,string>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,bool> : new pair<string,bool>;
   }
   static void *newArray_pairlEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,bool>[nElements] : new pair<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOboolgR(void *p) {
      delete ((pair<string,bool>*)p);
   }
   static void deleteArray_pairlEstringcOboolgR(void *p) {
      delete [] ((pair<string,bool>*)p);
   }
   static void destruct_pairlEstringcOboolgR(void *p) {
      typedef pair<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,bool>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,string> : new pair<string,string>;
   }
   static void *newArray_pairlEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<string,string>[nElements] : new pair<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOstringgR(void *p) {
      delete ((pair<string,string>*)p);
   }
   static void deleteArray_pairlEstringcOstringgR(void *p) {
      delete [] ((pair<string,string>*)p);
   }
   static void destruct_pairlEstringcOstringgR(void *p) {
      typedef pair<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,string>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<larlite::data::DataType_t,string> : new pair<larlite::data::DataType_t,string>;
   }
   static void *newArray_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<larlite::data::DataType_t,string>[nElements] : new pair<larlite::data::DataType_t,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p) {
      delete ((pair<larlite::data::DataType_t,string>*)p);
   }
   static void deleteArray_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p) {
      delete [] ((pair<larlite::data::DataType_t,string>*)p);
   }
   static void destruct_pairlElarlitecLcLdatacLcLDataType_tcOstringgR(void *p) {
      typedef pair<larlite::data::DataType_t,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<larlite::data::DataType_t,string>

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLproduct_id(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::product_id : new ::larlite::product_id;
   }
   static void *newArray_larlitecLcLproduct_id(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::product_id[nElements] : new ::larlite::product_id[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLproduct_id(void *p) {
      delete ((::larlite::product_id*)p);
   }
   static void deleteArray_larlitecLcLproduct_id(void *p) {
      delete [] ((::larlite::product_id*)p);
   }
   static void destruct_larlitecLcLproduct_id(void *p) {
      typedef ::larlite::product_id current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::product_id

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<larlite::product_id,larlite::product_id> : new pair<larlite::product_id,larlite::product_id>;
   }
   static void *newArray_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) pair<larlite::product_id,larlite::product_id>[nElements] : new pair<larlite::product_id,larlite::product_id>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p) {
      delete ((pair<larlite::product_id,larlite::product_id>*)p);
   }
   static void deleteArray_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p) {
      delete [] ((pair<larlite::product_id,larlite::product_id>*)p);
   }
   static void destruct_pairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgR(void *p) {
      typedef pair<larlite::product_id,larlite::product_id> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<larlite::product_id,larlite::product_id>

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLDataFormatException(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::DataFormatException : new ::larlite::DataFormatException;
   }
   static void *newArray_larlitecLcLDataFormatException(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::DataFormatException[nElements] : new ::larlite::DataFormatException[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLDataFormatException(void *p) {
      delete ((::larlite::DataFormatException*)p);
   }
   static void deleteArray_larlitecLcLDataFormatException(void *p) {
      delete [] ((::larlite::DataFormatException*)p);
   }
   static void destruct_larlitecLcLDataFormatException(void *p) {
      typedef ::larlite::DataFormatException current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::DataFormatException

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLdata_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::data_base : new ::larlite::data_base;
   }
   static void *newArray_larlitecLcLdata_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::data_base[nElements] : new ::larlite::data_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLdata_base(void *p) {
      delete ((::larlite::data_base*)p);
   }
   static void deleteArray_larlitecLcLdata_base(void *p) {
      delete [] ((::larlite::data_base*)p);
   }
   static void destruct_larlitecLcLdata_base(void *p) {
      typedef ::larlite::data_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::data_base

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLoutput_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::output_base : new ::larlite::output_base;
   }
   static void *newArray_larlitecLcLoutput_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::output_base[nElements] : new ::larlite::output_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLoutput_base(void *p) {
      delete ((::larlite::output_base*)p);
   }
   static void deleteArray_larlitecLcLoutput_base(void *p) {
      delete [] ((::larlite::output_base*)p);
   }
   static void destruct_larlitecLcLoutput_base(void *p) {
      typedef ::larlite::output_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::output_base

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLrun_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::run_base : new ::larlite::run_base;
   }
   static void *newArray_larlitecLcLrun_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::run_base[nElements] : new ::larlite::run_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLrun_base(void *p) {
      delete ((::larlite::run_base*)p);
   }
   static void deleteArray_larlitecLcLrun_base(void *p) {
      delete [] ((::larlite::run_base*)p);
   }
   static void destruct_larlitecLcLrun_base(void *p) {
      typedef ::larlite::run_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::run_base

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLsubrun_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::subrun_base : new ::larlite::subrun_base;
   }
   static void *newArray_larlitecLcLsubrun_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::subrun_base[nElements] : new ::larlite::subrun_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLsubrun_base(void *p) {
      delete ((::larlite::subrun_base*)p);
   }
   static void deleteArray_larlitecLcLsubrun_base(void *p) {
      delete [] ((::larlite::subrun_base*)p);
   }
   static void destruct_larlitecLcLsubrun_base(void *p) {
      typedef ::larlite::subrun_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::subrun_base

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_base(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_base : new ::larlite::event_base;
   }
   static void *newArray_larlitecLcLevent_base(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_base[nElements] : new ::larlite::event_base[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_base(void *p) {
      delete ((::larlite::event_base*)p);
   }
   static void deleteArray_larlitecLcLevent_base(void *p) {
      delete [] ((::larlite::event_base*)p);
   }
   static void destruct_larlitecLcLevent_base(void *p) {
      typedef ::larlite::event_base current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_base

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLsparse_datalEfloatgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::sparse_data<float> : new ::larlite::sparse_data<float>;
   }
   static void *newArray_larlitecLcLsparse_datalEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::sparse_data<float>[nElements] : new ::larlite::sparse_data<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLsparse_datalEfloatgR(void *p) {
      delete ((::larlite::sparse_data<float>*)p);
   }
   static void deleteArray_larlitecLcLsparse_datalEfloatgR(void *p) {
      delete [] ((::larlite::sparse_data<float>*)p);
   }
   static void destruct_larlitecLcLsparse_datalEfloatgR(void *p) {
      typedef ::larlite::sparse_data<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::sparse_data<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLsparse_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::sparse_vector<float> : new ::larlite::sparse_vector<float>;
   }
   static void *newArray_larlitecLcLsparse_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::sparse_vector<float>[nElements] : new ::larlite::sparse_vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLsparse_vectorlEfloatgR(void *p) {
      delete ((::larlite::sparse_vector<float>*)p);
   }
   static void deleteArray_larlitecLcLsparse_vectorlEfloatgR(void *p) {
      delete [] ((::larlite::sparse_vector<float>*)p);
   }
   static void destruct_larlitecLcLsparse_vectorlEfloatgR(void *p) {
      typedef ::larlite::sparse_vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::sparse_vector<float>

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLpotsummary(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::potsummary : new ::larlite::potsummary;
   }
   static void *newArray_larlitecLcLpotsummary(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::potsummary[nElements] : new ::larlite::potsummary[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLpotsummary(void *p) {
      delete ((::larlite::potsummary*)p);
   }
   static void deleteArray_larlitecLcLpotsummary(void *p) {
      delete [] ((::larlite::potsummary*)p);
   }
   static void destruct_larlitecLcLpotsummary(void *p) {
      typedef ::larlite::potsummary current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::potsummary

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLrawdigit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::rawdigit : new ::larlite::rawdigit;
   }
   static void *newArray_larlitecLcLrawdigit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::rawdigit[nElements] : new ::larlite::rawdigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLrawdigit(void *p) {
      delete ((::larlite::rawdigit*)p);
   }
   static void deleteArray_larlitecLcLrawdigit(void *p) {
      delete [] ((::larlite::rawdigit*)p);
   }
   static void destruct_larlitecLcLrawdigit(void *p) {
      typedef ::larlite::rawdigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::rawdigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_rawdigit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_rawdigit : new ::larlite::event_rawdigit;
   }
   static void *newArray_larlitecLcLevent_rawdigit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_rawdigit[nElements] : new ::larlite::event_rawdigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_rawdigit(void *p) {
      delete ((::larlite::event_rawdigit*)p);
   }
   static void deleteArray_larlitecLcLevent_rawdigit(void *p) {
      delete [] ((::larlite::event_rawdigit*)p);
   }
   static void destruct_larlitecLcLevent_rawdigit(void *p) {
      typedef ::larlite::event_rawdigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_rawdigit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLwire(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::wire : new ::larlite::wire;
   }
   static void *newArray_larlitecLcLwire(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::wire[nElements] : new ::larlite::wire[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLwire(void *p) {
      delete ((::larlite::wire*)p);
   }
   static void deleteArray_larlitecLcLwire(void *p) {
      delete [] ((::larlite::wire*)p);
   }
   static void destruct_larlitecLcLwire(void *p) {
      typedef ::larlite::wire current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::wire

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_wire(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_wire : new ::larlite::event_wire;
   }
   static void *newArray_larlitecLcLevent_wire(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_wire[nElements] : new ::larlite::event_wire[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_wire(void *p) {
      delete ((::larlite::event_wire*)p);
   }
   static void deleteArray_larlitecLcLevent_wire(void *p) {
      delete [] ((::larlite::event_wire*)p);
   }
   static void destruct_larlitecLcLevent_wire(void *p) {
      typedef ::larlite::event_wire current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_wire

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLhit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::hit : new ::larlite::hit;
   }
   static void *newArray_larlitecLcLhit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::hit[nElements] : new ::larlite::hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLhit(void *p) {
      delete ((::larlite::hit*)p);
   }
   static void deleteArray_larlitecLcLhit(void *p) {
      delete [] ((::larlite::hit*)p);
   }
   static void destruct_larlitecLcLhit(void *p) {
      typedef ::larlite::hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::hit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_hit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_hit : new ::larlite::event_hit;
   }
   static void *newArray_larlitecLcLevent_hit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_hit[nElements] : new ::larlite::event_hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_hit(void *p) {
      delete ((::larlite::event_hit*)p);
   }
   static void deleteArray_larlitecLcLevent_hit(void *p) {
      delete [] ((::larlite::event_hit*)p);
   }
   static void destruct_larlitecLcLevent_hit(void *p) {
      typedef ::larlite::event_hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_hit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLophit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ophit : new ::larlite::ophit;
   }
   static void *newArray_larlitecLcLophit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ophit[nElements] : new ::larlite::ophit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLophit(void *p) {
      delete ((::larlite::ophit*)p);
   }
   static void deleteArray_larlitecLcLophit(void *p) {
      delete [] ((::larlite::ophit*)p);
   }
   static void destruct_larlitecLcLophit(void *p) {
      typedef ::larlite::ophit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ophit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_ophit(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_ophit : new ::larlite::event_ophit;
   }
   static void *newArray_larlitecLcLevent_ophit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_ophit[nElements] : new ::larlite::event_ophit[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_ophit(void *p) {
      delete ((::larlite::event_ophit*)p);
   }
   static void deleteArray_larlitecLcLevent_ophit(void *p) {
      delete [] ((::larlite::event_ophit*)p);
   }
   static void destruct_larlitecLcLevent_ophit(void *p) {
      typedef ::larlite::event_ophit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_ophit

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLopflash(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::opflash : new ::larlite::opflash;
   }
   static void *newArray_larlitecLcLopflash(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::opflash[nElements] : new ::larlite::opflash[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLopflash(void *p) {
      delete ((::larlite::opflash*)p);
   }
   static void deleteArray_larlitecLcLopflash(void *p) {
      delete [] ((::larlite::opflash*)p);
   }
   static void destruct_larlitecLcLopflash(void *p) {
      typedef ::larlite::opflash current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::opflash

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_opflash(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_opflash : new ::larlite::event_opflash;
   }
   static void *newArray_larlitecLcLevent_opflash(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_opflash[nElements] : new ::larlite::event_opflash[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_opflash(void *p) {
      delete ((::larlite::event_opflash*)p);
   }
   static void deleteArray_larlitecLcLevent_opflash(void *p) {
      delete [] ((::larlite::event_opflash*)p);
   }
   static void destruct_larlitecLcLevent_opflash(void *p) {
      typedef ::larlite::event_opflash current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_opflash

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLcosmictag(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::cosmictag : new ::larlite::cosmictag;
   }
   static void *newArray_larlitecLcLcosmictag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::cosmictag[nElements] : new ::larlite::cosmictag[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLcosmictag(void *p) {
      delete ((::larlite::cosmictag*)p);
   }
   static void deleteArray_larlitecLcLcosmictag(void *p) {
      delete [] ((::larlite::cosmictag*)p);
   }
   static void destruct_larlitecLcLcosmictag(void *p) {
      typedef ::larlite::cosmictag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::cosmictag

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_cosmictag(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_cosmictag : new ::larlite::event_cosmictag;
   }
   static void *newArray_larlitecLcLevent_cosmictag(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_cosmictag[nElements] : new ::larlite::event_cosmictag[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_cosmictag(void *p) {
      delete ((::larlite::event_cosmictag*)p);
   }
   static void deleteArray_larlitecLcLevent_cosmictag(void *p) {
      delete [] ((::larlite::event_cosmictag*)p);
   }
   static void destruct_larlitecLcLevent_cosmictag(void *p) {
      typedef ::larlite::event_cosmictag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_cosmictag

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLcluster(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::cluster : new ::larlite::cluster;
   }
   static void *newArray_larlitecLcLcluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::cluster[nElements] : new ::larlite::cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLcluster(void *p) {
      delete ((::larlite::cluster*)p);
   }
   static void deleteArray_larlitecLcLcluster(void *p) {
      delete [] ((::larlite::cluster*)p);
   }
   static void destruct_larlitecLcLcluster(void *p) {
      typedef ::larlite::cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::cluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_cluster(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_cluster : new ::larlite::event_cluster;
   }
   static void *newArray_larlitecLcLevent_cluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_cluster[nElements] : new ::larlite::event_cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_cluster(void *p) {
      delete ((::larlite::event_cluster*)p);
   }
   static void deleteArray_larlitecLcLevent_cluster(void *p) {
      delete [] ((::larlite::event_cluster*)p);
   }
   static void destruct_larlitecLcLevent_cluster(void *p) {
      typedef ::larlite::event_cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_cluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLendpoint2d(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::endpoint2d : new ::larlite::endpoint2d;
   }
   static void *newArray_larlitecLcLendpoint2d(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::endpoint2d[nElements] : new ::larlite::endpoint2d[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLendpoint2d(void *p) {
      delete ((::larlite::endpoint2d*)p);
   }
   static void deleteArray_larlitecLcLendpoint2d(void *p) {
      delete [] ((::larlite::endpoint2d*)p);
   }
   static void destruct_larlitecLcLendpoint2d(void *p) {
      typedef ::larlite::endpoint2d current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::endpoint2d

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_endpoint2d(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_endpoint2d : new ::larlite::event_endpoint2d;
   }
   static void *newArray_larlitecLcLevent_endpoint2d(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_endpoint2d[nElements] : new ::larlite::event_endpoint2d[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_endpoint2d(void *p) {
      delete ((::larlite::event_endpoint2d*)p);
   }
   static void deleteArray_larlitecLcLevent_endpoint2d(void *p) {
      delete [] ((::larlite::event_endpoint2d*)p);
   }
   static void destruct_larlitecLcLevent_endpoint2d(void *p) {
      typedef ::larlite::event_endpoint2d current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_endpoint2d

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLseed(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::seed : new ::larlite::seed;
   }
   static void *newArray_larlitecLcLseed(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::seed[nElements] : new ::larlite::seed[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLseed(void *p) {
      delete ((::larlite::seed*)p);
   }
   static void deleteArray_larlitecLcLseed(void *p) {
      delete [] ((::larlite::seed*)p);
   }
   static void destruct_larlitecLcLseed(void *p) {
      typedef ::larlite::seed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::seed

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_seed(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_seed : new ::larlite::event_seed;
   }
   static void *newArray_larlitecLcLevent_seed(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_seed[nElements] : new ::larlite::event_seed[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_seed(void *p) {
      delete ((::larlite::event_seed*)p);
   }
   static void deleteArray_larlitecLcLevent_seed(void *p) {
      delete [] ((::larlite::event_seed*)p);
   }
   static void destruct_larlitecLcLevent_seed(void *p) {
      typedef ::larlite::event_seed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_seed

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLspacepoint(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::spacepoint : new ::larlite::spacepoint;
   }
   static void *newArray_larlitecLcLspacepoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::spacepoint[nElements] : new ::larlite::spacepoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLspacepoint(void *p) {
      delete ((::larlite::spacepoint*)p);
   }
   static void deleteArray_larlitecLcLspacepoint(void *p) {
      delete [] ((::larlite::spacepoint*)p);
   }
   static void destruct_larlitecLcLspacepoint(void *p) {
      typedef ::larlite::spacepoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::spacepoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_spacepoint(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_spacepoint : new ::larlite::event_spacepoint;
   }
   static void *newArray_larlitecLcLevent_spacepoint(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_spacepoint[nElements] : new ::larlite::event_spacepoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_spacepoint(void *p) {
      delete ((::larlite::event_spacepoint*)p);
   }
   static void deleteArray_larlitecLcLevent_spacepoint(void *p) {
      delete [] ((::larlite::event_spacepoint*)p);
   }
   static void destruct_larlitecLcLevent_spacepoint(void *p) {
      typedef ::larlite::event_spacepoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_spacepoint

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLtrack(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::track : new ::larlite::track;
   }
   static void *newArray_larlitecLcLtrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::track[nElements] : new ::larlite::track[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLtrack(void *p) {
      delete ((::larlite::track*)p);
   }
   static void deleteArray_larlitecLcLtrack(void *p) {
      delete [] ((::larlite::track*)p);
   }
   static void destruct_larlitecLcLtrack(void *p) {
      typedef ::larlite::track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::track

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_track(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_track : new ::larlite::event_track;
   }
   static void *newArray_larlitecLcLevent_track(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_track[nElements] : new ::larlite::event_track[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_track(void *p) {
      delete ((::larlite::event_track*)p);
   }
   static void deleteArray_larlitecLcLevent_track(void *p) {
      delete [] ((::larlite::event_track*)p);
   }
   static void destruct_larlitecLcLevent_track(void *p) {
      typedef ::larlite::event_track current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_track

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLshower(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::shower : new ::larlite::shower;
   }
   static void *newArray_larlitecLcLshower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::shower[nElements] : new ::larlite::shower[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLshower(void *p) {
      delete ((::larlite::shower*)p);
   }
   static void deleteArray_larlitecLcLshower(void *p) {
      delete [] ((::larlite::shower*)p);
   }
   static void destruct_larlitecLcLshower(void *p) {
      typedef ::larlite::shower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::shower

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_shower(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_shower : new ::larlite::event_shower;
   }
   static void *newArray_larlitecLcLevent_shower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_shower[nElements] : new ::larlite::event_shower[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_shower(void *p) {
      delete ((::larlite::event_shower*)p);
   }
   static void deleteArray_larlitecLcLevent_shower(void *p) {
      delete [] ((::larlite::event_shower*)p);
   }
   static void destruct_larlitecLcLevent_shower(void *p) {
      typedef ::larlite::event_shower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_shower

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLvertex(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::vertex : new ::larlite::vertex;
   }
   static void *newArray_larlitecLcLvertex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::vertex[nElements] : new ::larlite::vertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLvertex(void *p) {
      delete ((::larlite::vertex*)p);
   }
   static void deleteArray_larlitecLcLvertex(void *p) {
      delete [] ((::larlite::vertex*)p);
   }
   static void destruct_larlitecLcLvertex(void *p) {
      typedef ::larlite::vertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::vertex

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_vertex(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_vertex : new ::larlite::event_vertex;
   }
   static void *newArray_larlitecLcLevent_vertex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_vertex[nElements] : new ::larlite::event_vertex[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_vertex(void *p) {
      delete ((::larlite::event_vertex*)p);
   }
   static void deleteArray_larlitecLcLevent_vertex(void *p) {
      delete [] ((::larlite::event_vertex*)p);
   }
   static void destruct_larlitecLcLevent_vertex(void *p) {
      typedef ::larlite::event_vertex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_vertex

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLcalorimetry(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::calorimetry : new ::larlite::calorimetry;
   }
   static void *newArray_larlitecLcLcalorimetry(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::calorimetry[nElements] : new ::larlite::calorimetry[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLcalorimetry(void *p) {
      delete ((::larlite::calorimetry*)p);
   }
   static void deleteArray_larlitecLcLcalorimetry(void *p) {
      delete [] ((::larlite::calorimetry*)p);
   }
   static void destruct_larlitecLcLcalorimetry(void *p) {
      typedef ::larlite::calorimetry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::calorimetry

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_calorimetry(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_calorimetry : new ::larlite::event_calorimetry;
   }
   static void *newArray_larlitecLcLevent_calorimetry(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_calorimetry[nElements] : new ::larlite::event_calorimetry[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_calorimetry(void *p) {
      delete ((::larlite::event_calorimetry*)p);
   }
   static void deleteArray_larlitecLcLevent_calorimetry(void *p) {
      delete [] ((::larlite::event_calorimetry*)p);
   }
   static void destruct_larlitecLcLevent_calorimetry(void *p) {
      typedef ::larlite::event_calorimetry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_calorimetry

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLpfpart(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::pfpart : new ::larlite::pfpart;
   }
   static void *newArray_larlitecLcLpfpart(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::pfpart[nElements] : new ::larlite::pfpart[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLpfpart(void *p) {
      delete ((::larlite::pfpart*)p);
   }
   static void deleteArray_larlitecLcLpfpart(void *p) {
      delete [] ((::larlite::pfpart*)p);
   }
   static void destruct_larlitecLcLpfpart(void *p) {
      typedef ::larlite::pfpart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::pfpart

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_pfpart(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_pfpart : new ::larlite::event_pfpart;
   }
   static void *newArray_larlitecLcLevent_pfpart(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_pfpart[nElements] : new ::larlite::event_pfpart[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_pfpart(void *p) {
      delete ((::larlite::event_pfpart*)p);
   }
   static void deleteArray_larlitecLcLevent_pfpart(void *p) {
      delete [] ((::larlite::event_pfpart*)p);
   }
   static void destruct_larlitecLcLevent_pfpart(void *p) {
      typedef ::larlite::event_pfpart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_pfpart

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLpartid(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::partid : new ::larlite::partid;
   }
   static void *newArray_larlitecLcLpartid(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::partid[nElements] : new ::larlite::partid[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLpartid(void *p) {
      delete ((::larlite::partid*)p);
   }
   static void deleteArray_larlitecLcLpartid(void *p) {
      delete [] ((::larlite::partid*)p);
   }
   static void destruct_larlitecLcLpartid(void *p) {
      typedef ::larlite::partid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::partid

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_partid(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_partid : new ::larlite::event_partid;
   }
   static void *newArray_larlitecLcLevent_partid(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_partid[nElements] : new ::larlite::event_partid[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_partid(void *p) {
      delete ((::larlite::event_partid*)p);
   }
   static void deleteArray_larlitecLcLevent_partid(void *p) {
      delete [] ((::larlite::event_partid*)p);
   }
   static void destruct_larlitecLcLevent_partid(void *p) {
      typedef ::larlite::event_partid current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_partid

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLuser_info(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::user_info : new ::larlite::user_info;
   }
   static void *newArray_larlitecLcLuser_info(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::user_info[nElements] : new ::larlite::user_info[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLuser_info(void *p) {
      delete ((::larlite::user_info*)p);
   }
   static void deleteArray_larlitecLcLuser_info(void *p) {
      delete [] ((::larlite::user_info*)p);
   }
   static void destruct_larlitecLcLuser_info(void *p) {
      typedef ::larlite::user_info current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::user_info

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_user(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_user : new ::larlite::event_user;
   }
   static void *newArray_larlitecLcLevent_user(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_user[nElements] : new ::larlite::event_user[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_user(void *p) {
      delete ((::larlite::event_user*)p);
   }
   static void deleteArray_larlitecLcLevent_user(void *p) {
      delete [] ((::larlite::event_user*)p);
   }
   static void destruct_larlitecLcLevent_user(void *p) {
      typedef ::larlite::event_user current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_user

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLgtruth(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::gtruth : new ::larlite::gtruth;
   }
   static void *newArray_larlitecLcLgtruth(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::gtruth[nElements] : new ::larlite::gtruth[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLgtruth(void *p) {
      delete ((::larlite::gtruth*)p);
   }
   static void deleteArray_larlitecLcLgtruth(void *p) {
      delete [] ((::larlite::gtruth*)p);
   }
   static void destruct_larlitecLcLgtruth(void *p) {
      typedef ::larlite::gtruth current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::gtruth

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_gtruth(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_gtruth : new ::larlite::event_gtruth;
   }
   static void *newArray_larlitecLcLevent_gtruth(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_gtruth[nElements] : new ::larlite::event_gtruth[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_gtruth(void *p) {
      delete ((::larlite::event_gtruth*)p);
   }
   static void deleteArray_larlitecLcLevent_gtruth(void *p) {
      delete [] ((::larlite::event_gtruth*)p);
   }
   static void destruct_larlitecLcLevent_gtruth(void *p) {
      typedef ::larlite::event_gtruth current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_gtruth

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmcshower(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcshower : new ::larlite::mcshower;
   }
   static void *newArray_larlitecLcLmcshower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcshower[nElements] : new ::larlite::mcshower[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmcshower(void *p) {
      delete ((::larlite::mcshower*)p);
   }
   static void deleteArray_larlitecLcLmcshower(void *p) {
      delete [] ((::larlite::mcshower*)p);
   }
   static void destruct_larlitecLcLmcshower(void *p) {
      typedef ::larlite::mcshower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mcshower

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_mcshower(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mcshower : new ::larlite::event_mcshower;
   }
   static void *newArray_larlitecLcLevent_mcshower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mcshower[nElements] : new ::larlite::event_mcshower[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_mcshower(void *p) {
      delete ((::larlite::event_mcshower*)p);
   }
   static void deleteArray_larlitecLcLevent_mcshower(void *p) {
      delete [] ((::larlite::event_mcshower*)p);
   }
   static void destruct_larlitecLcLevent_mcshower(void *p) {
      typedef ::larlite::event_mcshower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_mcshower

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmcpart(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcpart : new ::larlite::mcpart;
   }
   static void *newArray_larlitecLcLmcpart(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcpart[nElements] : new ::larlite::mcpart[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmcpart(void *p) {
      delete ((::larlite::mcpart*)p);
   }
   static void deleteArray_larlitecLcLmcpart(void *p) {
      delete [] ((::larlite::mcpart*)p);
   }
   static void destruct_larlitecLcLmcpart(void *p) {
      typedef ::larlite::mcpart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mcpart

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_mcpart(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mcpart : new ::larlite::event_mcpart;
   }
   static void *newArray_larlitecLcLevent_mcpart(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mcpart[nElements] : new ::larlite::event_mcpart[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_mcpart(void *p) {
      delete ((::larlite::event_mcpart*)p);
   }
   static void deleteArray_larlitecLcLevent_mcpart(void *p) {
      delete [] ((::larlite::event_mcpart*)p);
   }
   static void destruct_larlitecLcLevent_mcpart(void *p) {
      typedef ::larlite::event_mcpart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_mcpart

namespace ROOT {
   // Wrappers around operator new
   static void *new_treenode(void *p) {
      return  p ? new(p) ::treenode : new ::treenode;
   }
   static void *newArray_treenode(Long_t nElements, void *p) {
      return p ? new(p) ::treenode[nElements] : new ::treenode[nElements];
   }
   // Wrapper around operator delete
   static void delete_treenode(void *p) {
      delete ((::treenode*)p);
   }
   static void deleteArray_treenode(void *p) {
      delete [] ((::treenode*)p);
   }
   static void destruct_treenode(void *p) {
      typedef ::treenode current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::treenode

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmctree(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctree : new ::larlite::mctree;
   }
   static void *newArray_larlitecLcLmctree(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctree[nElements] : new ::larlite::mctree[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmctree(void *p) {
      delete ((::larlite::mctree*)p);
   }
   static void deleteArray_larlitecLcLmctree(void *p) {
      delete [] ((::larlite::mctree*)p);
   }
   static void destruct_larlitecLcLmctree(void *p) {
      typedef ::larlite::mctree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mctree

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_mctree(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mctree : new ::larlite::event_mctree;
   }
   static void *newArray_larlitecLcLevent_mctree(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mctree[nElements] : new ::larlite::event_mctree[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_mctree(void *p) {
      delete ((::larlite::event_mctree*)p);
   }
   static void deleteArray_larlitecLcLevent_mctree(void *p) {
      delete [] ((::larlite::event_mctree*)p);
   }
   static void destruct_larlitecLcLevent_mctree(void *p) {
      typedef ::larlite::event_mctree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_mctree

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmcflux(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcflux : new ::larlite::mcflux;
   }
   static void *newArray_larlitecLcLmcflux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcflux[nElements] : new ::larlite::mcflux[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmcflux(void *p) {
      delete ((::larlite::mcflux*)p);
   }
   static void deleteArray_larlitecLcLmcflux(void *p) {
      delete [] ((::larlite::mcflux*)p);
   }
   static void destruct_larlitecLcLmcflux(void *p) {
      typedef ::larlite::mcflux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mcflux

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_mcflux(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mcflux : new ::larlite::event_mcflux;
   }
   static void *newArray_larlitecLcLevent_mcflux(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mcflux[nElements] : new ::larlite::event_mcflux[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_mcflux(void *p) {
      delete ((::larlite::event_mcflux*)p);
   }
   static void deleteArray_larlitecLcLevent_mcflux(void *p) {
      delete [] ((::larlite::event_mcflux*)p);
   }
   static void destruct_larlitecLcLevent_mcflux(void *p) {
      typedef ::larlite::event_mcflux current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_mcflux

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmcstep(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcstep : new ::larlite::mcstep;
   }
   static void *newArray_larlitecLcLmcstep(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcstep[nElements] : new ::larlite::mcstep[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmcstep(void *p) {
      delete ((::larlite::mcstep*)p);
   }
   static void deleteArray_larlitecLcLmcstep(void *p) {
      delete [] ((::larlite::mcstep*)p);
   }
   static void destruct_larlitecLcLmcstep(void *p) {
      typedef ::larlite::mcstep current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mcstep

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmctrajectory(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctrajectory : new ::larlite::mctrajectory;
   }
   static void *newArray_larlitecLcLmctrajectory(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctrajectory[nElements] : new ::larlite::mctrajectory[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmctrajectory(void *p) {
      delete ((::larlite::mctrajectory*)p);
   }
   static void deleteArray_larlitecLcLmctrajectory(void *p) {
      delete [] ((::larlite::mctrajectory*)p);
   }
   static void destruct_larlitecLcLmctrajectory(void *p) {
      typedef ::larlite::mctrajectory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mctrajectory

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmctrack(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctrack : new ::larlite::mctrack;
   }
   static void *newArray_larlitecLcLmctrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctrack[nElements] : new ::larlite::mctrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmctrack(void *p) {
      delete ((::larlite::mctrack*)p);
   }
   static void deleteArray_larlitecLcLmctrack(void *p) {
      delete [] ((::larlite::mctrack*)p);
   }
   static void destruct_larlitecLcLmctrack(void *p) {
      typedef ::larlite::mctrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mctrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_mctrack(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mctrack : new ::larlite::event_mctrack;
   }
   static void *newArray_larlitecLcLevent_mctrack(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mctrack[nElements] : new ::larlite::event_mctrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_mctrack(void *p) {
      delete ((::larlite::event_mctrack*)p);
   }
   static void deleteArray_larlitecLcLevent_mctrack(void *p) {
      delete [] ((::larlite::event_mctrack*)p);
   }
   static void destruct_larlitecLcLevent_mctrack(void *p) {
      typedef ::larlite::event_mctrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_mctrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmcnu(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcnu : new ::larlite::mcnu;
   }
   static void *newArray_larlitecLcLmcnu(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mcnu[nElements] : new ::larlite::mcnu[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmcnu(void *p) {
      delete ((::larlite::mcnu*)p);
   }
   static void deleteArray_larlitecLcLmcnu(void *p) {
      delete [] ((::larlite::mcnu*)p);
   }
   static void destruct_larlitecLcLmcnu(void *p) {
      typedef ::larlite::mcnu current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mcnu

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLmctruth(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctruth : new ::larlite::mctruth;
   }
   static void *newArray_larlitecLcLmctruth(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::mctruth[nElements] : new ::larlite::mctruth[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLmctruth(void *p) {
      delete ((::larlite::mctruth*)p);
   }
   static void deleteArray_larlitecLcLmctruth(void *p) {
      delete [] ((::larlite::mctruth*)p);
   }
   static void destruct_larlitecLcLmctruth(void *p) {
      typedef ::larlite::mctruth current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::mctruth

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_mctruth(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mctruth : new ::larlite::event_mctruth;
   }
   static void *newArray_larlitecLcLevent_mctruth(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_mctruth[nElements] : new ::larlite::event_mctruth[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_mctruth(void *p) {
      delete ((::larlite::event_mctruth*)p);
   }
   static void deleteArray_larlitecLcLevent_mctruth(void *p) {
      delete [] ((::larlite::event_mctruth*)p);
   }
   static void destruct_larlitecLcLevent_mctruth(void *p) {
      typedef ::larlite::event_mctruth current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_mctruth

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLide(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ide : new ::larlite::ide;
   }
   static void *newArray_larlitecLcLide(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::ide[nElements] : new ::larlite::ide[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLide(void *p) {
      delete ((::larlite::ide*)p);
   }
   static void deleteArray_larlitecLcLide(void *p) {
      delete [] ((::larlite::ide*)p);
   }
   static void destruct_larlitecLcLide(void *p) {
      typedef ::larlite::ide current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::ide

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLsimch(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::simch : new ::larlite::simch;
   }
   static void *newArray_larlitecLcLsimch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::simch[nElements] : new ::larlite::simch[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLsimch(void *p) {
      delete ((::larlite::simch*)p);
   }
   static void deleteArray_larlitecLcLsimch(void *p) {
      delete [] ((::larlite::simch*)p);
   }
   static void destruct_larlitecLcLsimch(void *p) {
      typedef ::larlite::simch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::simch

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_simch(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_simch : new ::larlite::event_simch;
   }
   static void *newArray_larlitecLcLevent_simch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_simch[nElements] : new ::larlite::event_simch[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_simch(void *p) {
      delete ((::larlite::event_simch*)p);
   }
   static void deleteArray_larlitecLcLevent_simch(void *p) {
      delete [] ((::larlite::event_simch*)p);
   }
   static void destruct_larlitecLcLevent_simch(void *p) {
      typedef ::larlite::event_simch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_simch

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLtrigger(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::trigger : new ::larlite::trigger;
   }
   static void *newArray_larlitecLcLtrigger(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::trigger[nElements] : new ::larlite::trigger[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLtrigger(void *p) {
      delete ((::larlite::trigger*)p);
   }
   static void deleteArray_larlitecLcLtrigger(void *p) {
      delete [] ((::larlite::trigger*)p);
   }
   static void destruct_larlitecLcLtrigger(void *p) {
      typedef ::larlite::trigger current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::trigger

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLminos(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::minos : new ::larlite::minos;
   }
   static void *newArray_larlitecLcLminos(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::minos[nElements] : new ::larlite::minos[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLminos(void *p) {
      delete ((::larlite::minos*)p);
   }
   static void deleteArray_larlitecLcLminos(void *p) {
      delete [] ((::larlite::minos*)p);
   }
   static void destruct_larlitecLcLminos(void *p) {
      typedef ::larlite::minos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::minos

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_minos(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_minos : new ::larlite::event_minos;
   }
   static void *newArray_larlitecLcLevent_minos(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_minos[nElements] : new ::larlite::event_minos[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_minos(void *p) {
      delete ((::larlite::event_minos*)p);
   }
   static void deleteArray_larlitecLcLevent_minos(void *p) {
      delete [] ((::larlite::event_minos*)p);
   }
   static void destruct_larlitecLcLevent_minos(void *p) {
      typedef ::larlite::event_minos current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_minos

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLpcaxis(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::pcaxis : new ::larlite::pcaxis;
   }
   static void *newArray_larlitecLcLpcaxis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::pcaxis[nElements] : new ::larlite::pcaxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLpcaxis(void *p) {
      delete ((::larlite::pcaxis*)p);
   }
   static void deleteArray_larlitecLcLpcaxis(void *p) {
      delete [] ((::larlite::pcaxis*)p);
   }
   static void destruct_larlitecLcLpcaxis(void *p) {
      typedef ::larlite::pcaxis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::pcaxis

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_pcaxis(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_pcaxis : new ::larlite::event_pcaxis;
   }
   static void *newArray_larlitecLcLevent_pcaxis(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_pcaxis[nElements] : new ::larlite::event_pcaxis[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_pcaxis(void *p) {
      delete ((::larlite::event_pcaxis*)p);
   }
   static void deleteArray_larlitecLcLevent_pcaxis(void *p) {
      delete [] ((::larlite::event_pcaxis*)p);
   }
   static void destruct_larlitecLcLevent_pcaxis(void *p) {
      typedef ::larlite::event_pcaxis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_pcaxis

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLflashmatch(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::flashmatch : new ::larlite::flashmatch;
   }
   static void *newArray_larlitecLcLflashmatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::flashmatch[nElements] : new ::larlite::flashmatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLflashmatch(void *p) {
      delete ((::larlite::flashmatch*)p);
   }
   static void deleteArray_larlitecLcLflashmatch(void *p) {
      delete [] ((::larlite::flashmatch*)p);
   }
   static void destruct_larlitecLcLflashmatch(void *p) {
      typedef ::larlite::flashmatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::flashmatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_flashmatch(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_flashmatch : new ::larlite::event_flashmatch;
   }
   static void *newArray_larlitecLcLevent_flashmatch(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_flashmatch[nElements] : new ::larlite::event_flashmatch[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_flashmatch(void *p) {
      delete ((::larlite::event_flashmatch*)p);
   }
   static void deleteArray_larlitecLcLevent_flashmatch(void *p) {
      delete [] ((::larlite::event_flashmatch*)p);
   }
   static void destruct_larlitecLcLevent_flashmatch(void *p) {
      typedef ::larlite::event_flashmatch current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_flashmatch

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_ass(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_ass : new ::larlite::event_ass;
   }
   static void *newArray_larlitecLcLevent_ass(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_ass[nElements] : new ::larlite::event_ass[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_ass(void *p) {
      delete ((::larlite::event_ass*)p);
   }
   static void deleteArray_larlitecLcLevent_ass(void *p) {
      delete [] ((::larlite::event_ass*)p);
   }
   static void destruct_larlitecLcLevent_ass(void *p) {
      typedef ::larlite::event_ass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_ass

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLfifo(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::fifo : new ::larlite::fifo;
   }
   static void *newArray_larlitecLcLfifo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::fifo[nElements] : new ::larlite::fifo[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLfifo(void *p) {
      delete ((::larlite::fifo*)p);
   }
   static void deleteArray_larlitecLcLfifo(void *p) {
      delete [] ((::larlite::fifo*)p);
   }
   static void destruct_larlitecLcLfifo(void *p) {
      typedef ::larlite::fifo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::fifo

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLevent_fifo(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_fifo : new ::larlite::event_fifo;
   }
   static void *newArray_larlitecLcLevent_fifo(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::event_fifo[nElements] : new ::larlite::event_fifo[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLevent_fifo(void *p) {
      delete ((::larlite::event_fifo*)p);
   }
   static void deleteArray_larlitecLcLevent_fifo(void *p) {
      delete [] ((::larlite::event_fifo*)p);
   }
   static void destruct_larlitecLcLevent_fifo(void *p) {
      typedef ::larlite::event_fifo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::event_fifo

namespace ROOT {
   // Wrappers around operator new
   static void *new_larlitecLcLstorage_manager(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::storage_manager : new ::larlite::storage_manager;
   }
   static void *newArray_larlitecLcLstorage_manager(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) ::larlite::storage_manager[nElements] : new ::larlite::storage_manager[nElements];
   }
   // Wrapper around operator delete
   static void delete_larlitecLcLstorage_manager(void *p) {
      delete ((::larlite::storage_manager*)p);
   }
   static void deleteArray_larlitecLcLstorage_manager(void *p) {
      delete [] ((::larlite::storage_manager*)p);
   }
   static void destruct_larlitecLcLstorage_manager(void *p) {
      typedef ::larlite::storage_manager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::larlite::storage_manager

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<unsigned int> > >*)
   {
      vector<vector<vector<unsigned int> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<unsigned int> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<unsigned int> > >", -2, "vector", 477,
                  typeid(vector<vector<vector<unsigned int> > >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<unsigned int> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<unsigned int> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<unsigned int> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<unsigned int> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<vector<unsigned int> > > : new vector<vector<vector<unsigned int> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<vector<unsigned int> > >[nElements] : new vector<vector<vector<unsigned int> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<unsigned int> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<unsigned int> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlEunsignedsPintgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<unsigned int> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<unsigned int> > >

namespace ROOT {
   static TClass *vectorlEvectorlEunsignedsPintgRsPgR_Dictionary();
   static void vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<unsigned int> >*)
   {
      vector<vector<unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<unsigned int> >", -2, "vector", 477,
                  typeid(vector<vector<unsigned int> >), DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<unsigned int> >) );
      instance.SetNew(&new_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<unsigned int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<unsigned int> >*)0x0)->GetClass();
      vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<unsigned int> > : new vector<vector<unsigned int> >;
   }
   static void *newArray_vectorlEvectorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<vector<unsigned int> >[nElements] : new vector<vector<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete ((vector<vector<unsigned int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((vector<vector<unsigned int> >*)p);
   }
   static void destruct_vectorlEvectorlEunsignedsPintgRsPgR(void *p) {
      typedef vector<vector<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<unsigned int> >

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
                  &vectorlEvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
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
   static TClass *vectorlEunsignedsPlonggR_Dictionary();
   static void vectorlEunsignedsPlonggR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPlonggR(void *p = 0);
   static void *newArray_vectorlEunsignedsPlonggR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPlonggR(void *p);
   static void deleteArray_vectorlEunsignedsPlonggR(void *p);
   static void destruct_vectorlEunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned long>*)
   {
      vector<unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned long>", -2, "vector", 477,
                  typeid(vector<unsigned long>), DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned long>) );
      instance.SetNew(&new_vectorlEunsignedsPlonggR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPlonggR);
      instance.SetDelete(&delete_vectorlEunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPlonggR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned long>*)0x0)->GetClass();
      vectorlEunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned long> : new vector<unsigned long>;
   }
   static void *newArray_vectorlEunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned long>[nElements] : new vector<unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPlonggR(void *p) {
      delete ((vector<unsigned long>*)p);
   }
   static void deleteArray_vectorlEunsignedsPlonggR(void *p) {
      delete [] ((vector<unsigned long>*)p);
   }
   static void destruct_vectorlEunsignedsPlonggR(void *p) {
      typedef vector<unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned long>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 477,
                  typeid(vector<unsigned int>), DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEtreenodegR_Dictionary();
   static void vectorlEtreenodegR_TClassManip(TClass*);
   static void *new_vectorlEtreenodegR(void *p = 0);
   static void *newArray_vectorlEtreenodegR(Long_t size, void *p);
   static void delete_vectorlEtreenodegR(void *p);
   static void deleteArray_vectorlEtreenodegR(void *p);
   static void destruct_vectorlEtreenodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<treenode>*)
   {
      vector<treenode> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<treenode>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<treenode>", -2, "vector", 477,
                  typeid(vector<treenode>), DefineBehavior(ptr, ptr),
                  &vectorlEtreenodegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<treenode>) );
      instance.SetNew(&new_vectorlEtreenodegR);
      instance.SetNewArray(&newArray_vectorlEtreenodegR);
      instance.SetDelete(&delete_vectorlEtreenodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEtreenodegR);
      instance.SetDestructor(&destruct_vectorlEtreenodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<treenode> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<treenode>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtreenodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<treenode>*)0x0)->GetClass();
      vectorlEtreenodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtreenodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtreenodegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<treenode> : new vector<treenode>;
   }
   static void *newArray_vectorlEtreenodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<treenode>[nElements] : new vector<treenode>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtreenodegR(void *p) {
      delete ((vector<treenode>*)p);
   }
   static void deleteArray_vectorlEtreenodegR(void *p) {
      delete [] ((vector<treenode>*)p);
   }
   static void destruct_vectorlEtreenodegR(void *p) {
      typedef vector<treenode> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<treenode>

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
                  &vectorlEstringgR_Dictionary, isa_proxy, 4,
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
   static TClass *vectorlEshortgR_Dictionary();
   static void vectorlEshortgR_TClassManip(TClass*);
   static void *new_vectorlEshortgR(void *p = 0);
   static void *newArray_vectorlEshortgR(Long_t size, void *p);
   static void delete_vectorlEshortgR(void *p);
   static void deleteArray_vectorlEshortgR(void *p);
   static void destruct_vectorlEshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<short>*)
   {
      vector<short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<short>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<short>", -2, "vector", 477,
                  typeid(vector<short>), DefineBehavior(ptr, ptr),
                  &vectorlEshortgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<short>) );
      instance.SetNew(&new_vectorlEshortgR);
      instance.SetNewArray(&newArray_vectorlEshortgR);
      instance.SetDelete(&delete_vectorlEshortgR);
      instance.SetDeleteArray(&deleteArray_vectorlEshortgR);
      instance.SetDestructor(&destruct_vectorlEshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<short>*)0x0)->GetClass();
      vectorlEshortgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEshortgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<short> : new vector<short>;
   }
   static void *newArray_vectorlEshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<short>[nElements] : new vector<short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEshortgR(void *p) {
      delete ((vector<short>*)p);
   }
   static void deleteArray_vectorlEshortgR(void *p) {
      delete [] ((vector<short>*)p);
   }
   static void destruct_vectorlEshortgR(void *p) {
      typedef vector<short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<short>

namespace ROOT {
   static TClass *vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_Dictionary();
   static void vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p);
   static void deleteArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p);
   static void destruct_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<unsigned long,unsigned long> >*)
   {
      vector<pair<unsigned long,unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<unsigned long,unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<unsigned long,unsigned long> >", -2, "vector", 477,
                  typeid(vector<pair<unsigned long,unsigned long> >), DefineBehavior(ptr, ptr),
                  &vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<unsigned long,unsigned long> >) );
      instance.SetNew(&new_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<unsigned long,unsigned long> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<unsigned long,unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<unsigned long,unsigned long> >*)0x0)->GetClass();
      vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<unsigned long,unsigned long> > : new vector<pair<unsigned long,unsigned long> >;
   }
   static void *newArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<unsigned long,unsigned long> >[nElements] : new vector<pair<unsigned long,unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      delete ((vector<pair<unsigned long,unsigned long> >*)p);
   }
   static void deleteArray_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      delete [] ((vector<pair<unsigned long,unsigned long> >*)p);
   }
   static void destruct_vectorlEpairlEunsignedsPlongcOunsignedsPlonggRsPgR(void *p) {
      typedef vector<pair<unsigned long,unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<unsigned long,unsigned long> >

namespace ROOT {
   static TClass *vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR_Dictionary();
   static void vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p);
   static void deleteArray_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p);
   static void destruct_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<larlite::product_id,larlite::product_id> >*)
   {
      vector<pair<larlite::product_id,larlite::product_id> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<larlite::product_id,larlite::product_id> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<larlite::product_id,larlite::product_id> >", -2, "vector", 477,
                  typeid(vector<pair<larlite::product_id,larlite::product_id> >), DefineBehavior(ptr, ptr),
                  &vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<pair<larlite::product_id,larlite::product_id> >) );
      instance.SetNew(&new_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<larlite::product_id,larlite::product_id> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<pair<larlite::product_id,larlite::product_id> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<larlite::product_id,larlite::product_id> >*)0x0)->GetClass();
      vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<larlite::product_id,larlite::product_id> > : new vector<pair<larlite::product_id,larlite::product_id> >;
   }
   static void *newArray_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<pair<larlite::product_id,larlite::product_id> >[nElements] : new vector<pair<larlite::product_id,larlite::product_id> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p) {
      delete ((vector<pair<larlite::product_id,larlite::product_id> >*)p);
   }
   static void deleteArray_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p) {
      delete [] ((vector<pair<larlite::product_id,larlite::product_id> >*)p);
   }
   static void destruct_vectorlEpairlElarlitecLcLproduct_idcOlarlitecLcLproduct_idgRsPgR(void *p) {
      typedef vector<pair<larlite::product_id,larlite::product_id> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<larlite::product_id,larlite::product_id> >

namespace ROOT {
   static TClass *vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR_Dictionary();
   static void vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p);
   static void destruct_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<string,larlite::subrun_base*> >*)
   {
      vector<map<string,larlite::subrun_base*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<string,larlite::subrun_base*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<string,larlite::subrun_base*> >", -2, "vector", 477,
                  typeid(vector<map<string,larlite::subrun_base*> >), DefineBehavior(ptr, ptr),
                  &vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<string,larlite::subrun_base*> >) );
      instance.SetNew(&new_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<string,larlite::subrun_base*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<string,larlite::subrun_base*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<string,larlite::subrun_base*> >*)0x0)->GetClass();
      vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,larlite::subrun_base*> > : new vector<map<string,larlite::subrun_base*> >;
   }
   static void *newArray_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,larlite::subrun_base*> >[nElements] : new vector<map<string,larlite::subrun_base*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p) {
      delete ((vector<map<string,larlite::subrun_base*> >*)p);
   }
   static void deleteArray_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p) {
      delete [] ((vector<map<string,larlite::subrun_base*> >*)p);
   }
   static void destruct_vectorlEmaplEstringcOlarlitecLcLsubrun_basemUgRsPgR(void *p) {
      typedef vector<map<string,larlite::subrun_base*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<string,larlite::subrun_base*> >

namespace ROOT {
   static TClass *vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR_Dictionary();
   static void vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p);
   static void destruct_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<string,larlite::run_base*> >*)
   {
      vector<map<string,larlite::run_base*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<string,larlite::run_base*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<string,larlite::run_base*> >", -2, "vector", 477,
                  typeid(vector<map<string,larlite::run_base*> >), DefineBehavior(ptr, ptr),
                  &vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<string,larlite::run_base*> >) );
      instance.SetNew(&new_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<string,larlite::run_base*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<string,larlite::run_base*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<string,larlite::run_base*> >*)0x0)->GetClass();
      vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,larlite::run_base*> > : new vector<map<string,larlite::run_base*> >;
   }
   static void *newArray_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,larlite::run_base*> >[nElements] : new vector<map<string,larlite::run_base*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p) {
      delete ((vector<map<string,larlite::run_base*> >*)p);
   }
   static void deleteArray_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p) {
      delete [] ((vector<map<string,larlite::run_base*> >*)p);
   }
   static void destruct_vectorlEmaplEstringcOlarlitecLcLrun_basemUgRsPgR(void *p) {
      typedef vector<map<string,larlite::run_base*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<string,larlite::run_base*> >

namespace ROOT {
   static TClass *vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR_Dictionary();
   static void vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p);
   static void destruct_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<string,larlite::event_base*> >*)
   {
      vector<map<string,larlite::event_base*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<string,larlite::event_base*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<string,larlite::event_base*> >", -2, "vector", 477,
                  typeid(vector<map<string,larlite::event_base*> >), DefineBehavior(ptr, ptr),
                  &vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<string,larlite::event_base*> >) );
      instance.SetNew(&new_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<string,larlite::event_base*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<string,larlite::event_base*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<string,larlite::event_base*> >*)0x0)->GetClass();
      vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,larlite::event_base*> > : new vector<map<string,larlite::event_base*> >;
   }
   static void *newArray_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,larlite::event_base*> >[nElements] : new vector<map<string,larlite::event_base*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p) {
      delete ((vector<map<string,larlite::event_base*> >*)p);
   }
   static void deleteArray_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p) {
      delete [] ((vector<map<string,larlite::event_base*> >*)p);
   }
   static void destruct_vectorlEmaplEstringcOlarlitecLcLevent_basemUgRsPgR(void *p) {
      typedef vector<map<string,larlite::event_base*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<string,larlite::event_base*> >

namespace ROOT {
   static TClass *vectorlEmaplEstringcOboolgRsPgR_Dictionary();
   static void vectorlEmaplEstringcOboolgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEstringcOboolgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEstringcOboolgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEstringcOboolgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEstringcOboolgRsPgR(void *p);
   static void destruct_vectorlEmaplEstringcOboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<string,bool> >*)
   {
      vector<map<string,bool> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<string,bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<string,bool> >", -2, "vector", 477,
                  typeid(vector<map<string,bool> >), DefineBehavior(ptr, ptr),
                  &vectorlEmaplEstringcOboolgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<string,bool> >) );
      instance.SetNew(&new_vectorlEmaplEstringcOboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEstringcOboolgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEstringcOboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEstringcOboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEstringcOboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<string,bool> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<string,bool> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEstringcOboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<string,bool> >*)0x0)->GetClass();
      vectorlEmaplEstringcOboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEstringcOboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEstringcOboolgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,bool> > : new vector<map<string,bool> >;
   }
   static void *newArray_vectorlEmaplEstringcOboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,bool> >[nElements] : new vector<map<string,bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEstringcOboolgRsPgR(void *p) {
      delete ((vector<map<string,bool> >*)p);
   }
   static void deleteArray_vectorlEmaplEstringcOboolgRsPgR(void *p) {
      delete [] ((vector<map<string,bool> >*)p);
   }
   static void destruct_vectorlEmaplEstringcOboolgRsPgR(void *p) {
      typedef vector<map<string,bool> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<string,bool> >

namespace ROOT {
   static TClass *vectorlEmaplEstringcOTTreemUgRsPgR_Dictionary();
   static void vectorlEmaplEstringcOTTreemUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEstringcOTTreemUgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEstringcOTTreemUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEstringcOTTreemUgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEstringcOTTreemUgRsPgR(void *p);
   static void destruct_vectorlEmaplEstringcOTTreemUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<string,TTree*> >*)
   {
      vector<map<string,TTree*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<string,TTree*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<string,TTree*> >", -2, "vector", 477,
                  typeid(vector<map<string,TTree*> >), DefineBehavior(ptr, ptr),
                  &vectorlEmaplEstringcOTTreemUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<string,TTree*> >) );
      instance.SetNew(&new_vectorlEmaplEstringcOTTreemUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEstringcOTTreemUgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEstringcOTTreemUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEstringcOTTreemUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEstringcOTTreemUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<string,TTree*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<string,TTree*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEstringcOTTreemUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<string,TTree*> >*)0x0)->GetClass();
      vectorlEmaplEstringcOTTreemUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEstringcOTTreemUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEstringcOTTreemUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,TTree*> > : new vector<map<string,TTree*> >;
   }
   static void *newArray_vectorlEmaplEstringcOTTreemUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,TTree*> >[nElements] : new vector<map<string,TTree*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEstringcOTTreemUgRsPgR(void *p) {
      delete ((vector<map<string,TTree*> >*)p);
   }
   static void deleteArray_vectorlEmaplEstringcOTTreemUgRsPgR(void *p) {
      delete [] ((vector<map<string,TTree*> >*)p);
   }
   static void destruct_vectorlEmaplEstringcOTTreemUgRsPgR(void *p) {
      typedef vector<map<string,TTree*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<string,TTree*> >

namespace ROOT {
   static TClass *vectorlEmaplEstringcOTChainmUgRsPgR_Dictionary();
   static void vectorlEmaplEstringcOTChainmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEstringcOTChainmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEstringcOTChainmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEstringcOTChainmUgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEstringcOTChainmUgRsPgR(void *p);
   static void destruct_vectorlEmaplEstringcOTChainmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<string,TChain*> >*)
   {
      vector<map<string,TChain*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<string,TChain*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<string,TChain*> >", -2, "vector", 477,
                  typeid(vector<map<string,TChain*> >), DefineBehavior(ptr, ptr),
                  &vectorlEmaplEstringcOTChainmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<map<string,TChain*> >) );
      instance.SetNew(&new_vectorlEmaplEstringcOTChainmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEstringcOTChainmUgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEstringcOTChainmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEstringcOTChainmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEstringcOTChainmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<string,TChain*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<string,TChain*> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEstringcOTChainmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<string,TChain*> >*)0x0)->GetClass();
      vectorlEmaplEstringcOTChainmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEstringcOTChainmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEstringcOTChainmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,TChain*> > : new vector<map<string,TChain*> >;
   }
   static void *newArray_vectorlEmaplEstringcOTChainmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<map<string,TChain*> >[nElements] : new vector<map<string,TChain*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEstringcOTChainmUgRsPgR(void *p) {
      delete ((vector<map<string,TChain*> >*)p);
   }
   static void deleteArray_vectorlEmaplEstringcOTChainmUgRsPgR(void *p) {
      delete [] ((vector<map<string,TChain*> >*)p);
   }
   static void destruct_vectorlEmaplEstringcOTChainmUgRsPgR(void *p) {
      typedef vector<map<string,TChain*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<string,TChain*> >

namespace ROOT {
   static TClass *vectorlElarlitecLcLwiregR_Dictionary();
   static void vectorlElarlitecLcLwiregR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLwiregR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLwiregR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLwiregR(void *p);
   static void deleteArray_vectorlElarlitecLcLwiregR(void *p);
   static void destruct_vectorlElarlitecLcLwiregR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::wire>*)
   {
      vector<larlite::wire> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::wire>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::wire>", -2, "vector", 477,
                  typeid(vector<larlite::wire>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLwiregR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::wire>) );
      instance.SetNew(&new_vectorlElarlitecLcLwiregR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLwiregR);
      instance.SetDelete(&delete_vectorlElarlitecLcLwiregR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLwiregR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLwiregR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::wire> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::wire>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLwiregR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::wire>*)0x0)->GetClass();
      vectorlElarlitecLcLwiregR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLwiregR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLwiregR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::wire> : new vector<larlite::wire>;
   }
   static void *newArray_vectorlElarlitecLcLwiregR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::wire>[nElements] : new vector<larlite::wire>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLwiregR(void *p) {
      delete ((vector<larlite::wire>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLwiregR(void *p) {
      delete [] ((vector<larlite::wire>*)p);
   }
   static void destruct_vectorlElarlitecLcLwiregR(void *p) {
      typedef vector<larlite::wire> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::wire>

namespace ROOT {
   static TClass *vectorlElarlitecLcLvertexgR_Dictionary();
   static void vectorlElarlitecLcLvertexgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLvertexgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLvertexgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLvertexgR(void *p);
   static void deleteArray_vectorlElarlitecLcLvertexgR(void *p);
   static void destruct_vectorlElarlitecLcLvertexgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::vertex>*)
   {
      vector<larlite::vertex> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::vertex>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::vertex>", -2, "vector", 477,
                  typeid(vector<larlite::vertex>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLvertexgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::vertex>) );
      instance.SetNew(&new_vectorlElarlitecLcLvertexgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLvertexgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLvertexgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLvertexgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLvertexgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::vertex> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::vertex>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLvertexgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::vertex>*)0x0)->GetClass();
      vectorlElarlitecLcLvertexgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLvertexgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLvertexgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::vertex> : new vector<larlite::vertex>;
   }
   static void *newArray_vectorlElarlitecLcLvertexgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::vertex>[nElements] : new vector<larlite::vertex>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLvertexgR(void *p) {
      delete ((vector<larlite::vertex>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLvertexgR(void *p) {
      delete [] ((vector<larlite::vertex>*)p);
   }
   static void destruct_vectorlElarlitecLcLvertexgR(void *p) {
      typedef vector<larlite::vertex> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::vertex>

namespace ROOT {
   static TClass *vectorlElarlitecLcLuser_infogR_Dictionary();
   static void vectorlElarlitecLcLuser_infogR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLuser_infogR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLuser_infogR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLuser_infogR(void *p);
   static void deleteArray_vectorlElarlitecLcLuser_infogR(void *p);
   static void destruct_vectorlElarlitecLcLuser_infogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::user_info>*)
   {
      vector<larlite::user_info> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::user_info>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::user_info>", -2, "vector", 477,
                  typeid(vector<larlite::user_info>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLuser_infogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::user_info>) );
      instance.SetNew(&new_vectorlElarlitecLcLuser_infogR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLuser_infogR);
      instance.SetDelete(&delete_vectorlElarlitecLcLuser_infogR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLuser_infogR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLuser_infogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::user_info> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::user_info>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLuser_infogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::user_info>*)0x0)->GetClass();
      vectorlElarlitecLcLuser_infogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLuser_infogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLuser_infogR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::user_info> : new vector<larlite::user_info>;
   }
   static void *newArray_vectorlElarlitecLcLuser_infogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::user_info>[nElements] : new vector<larlite::user_info>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLuser_infogR(void *p) {
      delete ((vector<larlite::user_info>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLuser_infogR(void *p) {
      delete [] ((vector<larlite::user_info>*)p);
   }
   static void destruct_vectorlElarlitecLcLuser_infogR(void *p) {
      typedef vector<larlite::user_info> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::user_info>

namespace ROOT {
   static TClass *vectorlElarlitecLcLtrackgR_Dictionary();
   static void vectorlElarlitecLcLtrackgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLtrackgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLtrackgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLtrackgR(void *p);
   static void deleteArray_vectorlElarlitecLcLtrackgR(void *p);
   static void destruct_vectorlElarlitecLcLtrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::track>*)
   {
      vector<larlite::track> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::track>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::track>", -2, "vector", 477,
                  typeid(vector<larlite::track>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLtrackgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::track>) );
      instance.SetNew(&new_vectorlElarlitecLcLtrackgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLtrackgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLtrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLtrackgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLtrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::track> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::track>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLtrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::track>*)0x0)->GetClass();
      vectorlElarlitecLcLtrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLtrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLtrackgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::track> : new vector<larlite::track>;
   }
   static void *newArray_vectorlElarlitecLcLtrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::track>[nElements] : new vector<larlite::track>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLtrackgR(void *p) {
      delete ((vector<larlite::track>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLtrackgR(void *p) {
      delete [] ((vector<larlite::track>*)p);
   }
   static void destruct_vectorlElarlitecLcLtrackgR(void *p) {
      typedef vector<larlite::track> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::track>

namespace ROOT {
   static TClass *vectorlElarlitecLcLsparse_datalEfloatgRsPgR_Dictionary();
   static void vectorlElarlitecLcLsparse_datalEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p);
   static void deleteArray_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p);
   static void destruct_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::sparse_data<float> >*)
   {
      vector<larlite::sparse_data<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::sparse_data<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::sparse_data<float> >", -2, "vector", 477,
                  typeid(vector<larlite::sparse_data<float> >), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLsparse_datalEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::sparse_data<float> >) );
      instance.SetNew(&new_vectorlElarlitecLcLsparse_datalEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLsparse_datalEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLsparse_datalEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLsparse_datalEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLsparse_datalEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::sparse_data<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::sparse_data<float> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLsparse_datalEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::sparse_data<float> >*)0x0)->GetClass();
      vectorlElarlitecLcLsparse_datalEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLsparse_datalEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::sparse_data<float> > : new vector<larlite::sparse_data<float> >;
   }
   static void *newArray_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::sparse_data<float> >[nElements] : new vector<larlite::sparse_data<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p) {
      delete ((vector<larlite::sparse_data<float> >*)p);
   }
   static void deleteArray_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p) {
      delete [] ((vector<larlite::sparse_data<float> >*)p);
   }
   static void destruct_vectorlElarlitecLcLsparse_datalEfloatgRsPgR(void *p) {
      typedef vector<larlite::sparse_data<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::sparse_data<float> >

namespace ROOT {
   static TClass *vectorlElarlitecLcLspacepointgR_Dictionary();
   static void vectorlElarlitecLcLspacepointgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLspacepointgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLspacepointgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLspacepointgR(void *p);
   static void deleteArray_vectorlElarlitecLcLspacepointgR(void *p);
   static void destruct_vectorlElarlitecLcLspacepointgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::spacepoint>*)
   {
      vector<larlite::spacepoint> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::spacepoint>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::spacepoint>", -2, "vector", 477,
                  typeid(vector<larlite::spacepoint>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLspacepointgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::spacepoint>) );
      instance.SetNew(&new_vectorlElarlitecLcLspacepointgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLspacepointgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLspacepointgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLspacepointgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLspacepointgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::spacepoint> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::spacepoint>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLspacepointgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::spacepoint>*)0x0)->GetClass();
      vectorlElarlitecLcLspacepointgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLspacepointgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLspacepointgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::spacepoint> : new vector<larlite::spacepoint>;
   }
   static void *newArray_vectorlElarlitecLcLspacepointgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::spacepoint>[nElements] : new vector<larlite::spacepoint>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLspacepointgR(void *p) {
      delete ((vector<larlite::spacepoint>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLspacepointgR(void *p) {
      delete [] ((vector<larlite::spacepoint>*)p);
   }
   static void destruct_vectorlElarlitecLcLspacepointgR(void *p) {
      typedef vector<larlite::spacepoint> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::spacepoint>

namespace ROOT {
   static TClass *vectorlElarlitecLcLsimchgR_Dictionary();
   static void vectorlElarlitecLcLsimchgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLsimchgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLsimchgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLsimchgR(void *p);
   static void deleteArray_vectorlElarlitecLcLsimchgR(void *p);
   static void destruct_vectorlElarlitecLcLsimchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::simch>*)
   {
      vector<larlite::simch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::simch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::simch>", -2, "vector", 477,
                  typeid(vector<larlite::simch>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLsimchgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::simch>) );
      instance.SetNew(&new_vectorlElarlitecLcLsimchgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLsimchgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLsimchgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLsimchgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLsimchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::simch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::simch>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLsimchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::simch>*)0x0)->GetClass();
      vectorlElarlitecLcLsimchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLsimchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLsimchgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::simch> : new vector<larlite::simch>;
   }
   static void *newArray_vectorlElarlitecLcLsimchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::simch>[nElements] : new vector<larlite::simch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLsimchgR(void *p) {
      delete ((vector<larlite::simch>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLsimchgR(void *p) {
      delete [] ((vector<larlite::simch>*)p);
   }
   static void destruct_vectorlElarlitecLcLsimchgR(void *p) {
      typedef vector<larlite::simch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::simch>

namespace ROOT {
   static TClass *vectorlElarlitecLcLshowergR_Dictionary();
   static void vectorlElarlitecLcLshowergR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLshowergR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLshowergR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLshowergR(void *p);
   static void deleteArray_vectorlElarlitecLcLshowergR(void *p);
   static void destruct_vectorlElarlitecLcLshowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::shower>*)
   {
      vector<larlite::shower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::shower>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::shower>", -2, "vector", 477,
                  typeid(vector<larlite::shower>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLshowergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::shower>) );
      instance.SetNew(&new_vectorlElarlitecLcLshowergR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLshowergR);
      instance.SetDelete(&delete_vectorlElarlitecLcLshowergR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLshowergR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLshowergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::shower> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::shower>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLshowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::shower>*)0x0)->GetClass();
      vectorlElarlitecLcLshowergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLshowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLshowergR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::shower> : new vector<larlite::shower>;
   }
   static void *newArray_vectorlElarlitecLcLshowergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::shower>[nElements] : new vector<larlite::shower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLshowergR(void *p) {
      delete ((vector<larlite::shower>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLshowergR(void *p) {
      delete [] ((vector<larlite::shower>*)p);
   }
   static void destruct_vectorlElarlitecLcLshowergR(void *p) {
      typedef vector<larlite::shower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::shower>

namespace ROOT {
   static TClass *vectorlElarlitecLcLseedgR_Dictionary();
   static void vectorlElarlitecLcLseedgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLseedgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLseedgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLseedgR(void *p);
   static void deleteArray_vectorlElarlitecLcLseedgR(void *p);
   static void destruct_vectorlElarlitecLcLseedgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::seed>*)
   {
      vector<larlite::seed> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::seed>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::seed>", -2, "vector", 477,
                  typeid(vector<larlite::seed>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLseedgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::seed>) );
      instance.SetNew(&new_vectorlElarlitecLcLseedgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLseedgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLseedgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLseedgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLseedgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::seed> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::seed>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLseedgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::seed>*)0x0)->GetClass();
      vectorlElarlitecLcLseedgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLseedgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLseedgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::seed> : new vector<larlite::seed>;
   }
   static void *newArray_vectorlElarlitecLcLseedgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::seed>[nElements] : new vector<larlite::seed>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLseedgR(void *p) {
      delete ((vector<larlite::seed>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLseedgR(void *p) {
      delete [] ((vector<larlite::seed>*)p);
   }
   static void destruct_vectorlElarlitecLcLseedgR(void *p) {
      typedef vector<larlite::seed> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::seed>

namespace ROOT {
   static TClass *vectorlElarlitecLcLrawdigitgR_Dictionary();
   static void vectorlElarlitecLcLrawdigitgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLrawdigitgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLrawdigitgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLrawdigitgR(void *p);
   static void deleteArray_vectorlElarlitecLcLrawdigitgR(void *p);
   static void destruct_vectorlElarlitecLcLrawdigitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::rawdigit>*)
   {
      vector<larlite::rawdigit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::rawdigit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::rawdigit>", -2, "vector", 477,
                  typeid(vector<larlite::rawdigit>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLrawdigitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::rawdigit>) );
      instance.SetNew(&new_vectorlElarlitecLcLrawdigitgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLrawdigitgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLrawdigitgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLrawdigitgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLrawdigitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::rawdigit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::rawdigit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLrawdigitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::rawdigit>*)0x0)->GetClass();
      vectorlElarlitecLcLrawdigitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLrawdigitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLrawdigitgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::rawdigit> : new vector<larlite::rawdigit>;
   }
   static void *newArray_vectorlElarlitecLcLrawdigitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::rawdigit>[nElements] : new vector<larlite::rawdigit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLrawdigitgR(void *p) {
      delete ((vector<larlite::rawdigit>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLrawdigitgR(void *p) {
      delete [] ((vector<larlite::rawdigit>*)p);
   }
   static void destruct_vectorlElarlitecLcLrawdigitgR(void *p) {
      typedef vector<larlite::rawdigit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::rawdigit>

namespace ROOT {
   static TClass *vectorlElarlitecLcLproduct_idgR_Dictionary();
   static void vectorlElarlitecLcLproduct_idgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLproduct_idgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLproduct_idgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLproduct_idgR(void *p);
   static void deleteArray_vectorlElarlitecLcLproduct_idgR(void *p);
   static void destruct_vectorlElarlitecLcLproduct_idgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::product_id>*)
   {
      vector<larlite::product_id> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::product_id>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::product_id>", -2, "vector", 477,
                  typeid(vector<larlite::product_id>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLproduct_idgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::product_id>) );
      instance.SetNew(&new_vectorlElarlitecLcLproduct_idgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLproduct_idgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLproduct_idgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLproduct_idgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLproduct_idgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::product_id> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::product_id>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLproduct_idgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::product_id>*)0x0)->GetClass();
      vectorlElarlitecLcLproduct_idgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLproduct_idgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLproduct_idgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::product_id> : new vector<larlite::product_id>;
   }
   static void *newArray_vectorlElarlitecLcLproduct_idgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::product_id>[nElements] : new vector<larlite::product_id>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLproduct_idgR(void *p) {
      delete ((vector<larlite::product_id>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLproduct_idgR(void *p) {
      delete [] ((vector<larlite::product_id>*)p);
   }
   static void destruct_vectorlElarlitecLcLproduct_idgR(void *p) {
      typedef vector<larlite::product_id> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::product_id>

namespace ROOT {
   static TClass *vectorlElarlitecLcLpfpartgR_Dictionary();
   static void vectorlElarlitecLcLpfpartgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLpfpartgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLpfpartgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLpfpartgR(void *p);
   static void deleteArray_vectorlElarlitecLcLpfpartgR(void *p);
   static void destruct_vectorlElarlitecLcLpfpartgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::pfpart>*)
   {
      vector<larlite::pfpart> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::pfpart>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::pfpart>", -2, "vector", 477,
                  typeid(vector<larlite::pfpart>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLpfpartgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::pfpart>) );
      instance.SetNew(&new_vectorlElarlitecLcLpfpartgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLpfpartgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLpfpartgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLpfpartgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLpfpartgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::pfpart> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::pfpart>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLpfpartgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::pfpart>*)0x0)->GetClass();
      vectorlElarlitecLcLpfpartgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLpfpartgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLpfpartgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::pfpart> : new vector<larlite::pfpart>;
   }
   static void *newArray_vectorlElarlitecLcLpfpartgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::pfpart>[nElements] : new vector<larlite::pfpart>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLpfpartgR(void *p) {
      delete ((vector<larlite::pfpart>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLpfpartgR(void *p) {
      delete [] ((vector<larlite::pfpart>*)p);
   }
   static void destruct_vectorlElarlitecLcLpfpartgR(void *p) {
      typedef vector<larlite::pfpart> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::pfpart>

namespace ROOT {
   static TClass *vectorlElarlitecLcLpcaxisgR_Dictionary();
   static void vectorlElarlitecLcLpcaxisgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLpcaxisgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLpcaxisgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLpcaxisgR(void *p);
   static void deleteArray_vectorlElarlitecLcLpcaxisgR(void *p);
   static void destruct_vectorlElarlitecLcLpcaxisgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::pcaxis>*)
   {
      vector<larlite::pcaxis> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::pcaxis>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::pcaxis>", -2, "vector", 477,
                  typeid(vector<larlite::pcaxis>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLpcaxisgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::pcaxis>) );
      instance.SetNew(&new_vectorlElarlitecLcLpcaxisgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLpcaxisgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLpcaxisgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLpcaxisgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLpcaxisgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::pcaxis> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::pcaxis>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLpcaxisgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::pcaxis>*)0x0)->GetClass();
      vectorlElarlitecLcLpcaxisgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLpcaxisgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLpcaxisgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::pcaxis> : new vector<larlite::pcaxis>;
   }
   static void *newArray_vectorlElarlitecLcLpcaxisgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::pcaxis>[nElements] : new vector<larlite::pcaxis>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLpcaxisgR(void *p) {
      delete ((vector<larlite::pcaxis>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLpcaxisgR(void *p) {
      delete [] ((vector<larlite::pcaxis>*)p);
   }
   static void destruct_vectorlElarlitecLcLpcaxisgR(void *p) {
      typedef vector<larlite::pcaxis> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::pcaxis>

namespace ROOT {
   static TClass *vectorlElarlitecLcLpartidgR_Dictionary();
   static void vectorlElarlitecLcLpartidgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLpartidgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLpartidgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLpartidgR(void *p);
   static void deleteArray_vectorlElarlitecLcLpartidgR(void *p);
   static void destruct_vectorlElarlitecLcLpartidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::partid>*)
   {
      vector<larlite::partid> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::partid>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::partid>", -2, "vector", 477,
                  typeid(vector<larlite::partid>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLpartidgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::partid>) );
      instance.SetNew(&new_vectorlElarlitecLcLpartidgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLpartidgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLpartidgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLpartidgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLpartidgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::partid> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::partid>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLpartidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::partid>*)0x0)->GetClass();
      vectorlElarlitecLcLpartidgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLpartidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLpartidgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::partid> : new vector<larlite::partid>;
   }
   static void *newArray_vectorlElarlitecLcLpartidgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::partid>[nElements] : new vector<larlite::partid>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLpartidgR(void *p) {
      delete ((vector<larlite::partid>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLpartidgR(void *p) {
      delete [] ((vector<larlite::partid>*)p);
   }
   static void destruct_vectorlElarlitecLcLpartidgR(void *p) {
      typedef vector<larlite::partid> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::partid>

namespace ROOT {
   static TClass *vectorlElarlitecLcLophitgR_Dictionary();
   static void vectorlElarlitecLcLophitgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLophitgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLophitgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLophitgR(void *p);
   static void deleteArray_vectorlElarlitecLcLophitgR(void *p);
   static void destruct_vectorlElarlitecLcLophitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::ophit>*)
   {
      vector<larlite::ophit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::ophit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::ophit>", -2, "vector", 477,
                  typeid(vector<larlite::ophit>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLophitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::ophit>) );
      instance.SetNew(&new_vectorlElarlitecLcLophitgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLophitgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLophitgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLophitgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLophitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::ophit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::ophit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLophitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::ophit>*)0x0)->GetClass();
      vectorlElarlitecLcLophitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLophitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLophitgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::ophit> : new vector<larlite::ophit>;
   }
   static void *newArray_vectorlElarlitecLcLophitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::ophit>[nElements] : new vector<larlite::ophit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLophitgR(void *p) {
      delete ((vector<larlite::ophit>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLophitgR(void *p) {
      delete [] ((vector<larlite::ophit>*)p);
   }
   static void destruct_vectorlElarlitecLcLophitgR(void *p) {
      typedef vector<larlite::ophit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::ophit>

namespace ROOT {
   static TClass *vectorlElarlitecLcLopflashgR_Dictionary();
   static void vectorlElarlitecLcLopflashgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLopflashgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLopflashgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLopflashgR(void *p);
   static void deleteArray_vectorlElarlitecLcLopflashgR(void *p);
   static void destruct_vectorlElarlitecLcLopflashgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::opflash>*)
   {
      vector<larlite::opflash> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::opflash>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::opflash>", -2, "vector", 477,
                  typeid(vector<larlite::opflash>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLopflashgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::opflash>) );
      instance.SetNew(&new_vectorlElarlitecLcLopflashgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLopflashgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLopflashgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLopflashgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLopflashgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::opflash> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::opflash>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLopflashgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::opflash>*)0x0)->GetClass();
      vectorlElarlitecLcLopflashgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLopflashgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLopflashgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::opflash> : new vector<larlite::opflash>;
   }
   static void *newArray_vectorlElarlitecLcLopflashgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::opflash>[nElements] : new vector<larlite::opflash>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLopflashgR(void *p) {
      delete ((vector<larlite::opflash>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLopflashgR(void *p) {
      delete [] ((vector<larlite::opflash>*)p);
   }
   static void destruct_vectorlElarlitecLcLopflashgR(void *p) {
      typedef vector<larlite::opflash> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::opflash>

namespace ROOT {
   static TClass *vectorlElarlitecLcLminosgR_Dictionary();
   static void vectorlElarlitecLcLminosgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLminosgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLminosgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLminosgR(void *p);
   static void deleteArray_vectorlElarlitecLcLminosgR(void *p);
   static void destruct_vectorlElarlitecLcLminosgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::minos>*)
   {
      vector<larlite::minos> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::minos>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::minos>", -2, "vector", 477,
                  typeid(vector<larlite::minos>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLminosgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::minos>) );
      instance.SetNew(&new_vectorlElarlitecLcLminosgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLminosgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLminosgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLminosgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLminosgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::minos> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::minos>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLminosgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::minos>*)0x0)->GetClass();
      vectorlElarlitecLcLminosgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLminosgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLminosgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::minos> : new vector<larlite::minos>;
   }
   static void *newArray_vectorlElarlitecLcLminosgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::minos>[nElements] : new vector<larlite::minos>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLminosgR(void *p) {
      delete ((vector<larlite::minos>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLminosgR(void *p) {
      delete [] ((vector<larlite::minos>*)p);
   }
   static void destruct_vectorlElarlitecLcLminosgR(void *p) {
      typedef vector<larlite::minos> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::minos>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmctruthgR_Dictionary();
   static void vectorlElarlitecLcLmctruthgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmctruthgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmctruthgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmctruthgR(void *p);
   static void deleteArray_vectorlElarlitecLcLmctruthgR(void *p);
   static void destruct_vectorlElarlitecLcLmctruthgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mctruth>*)
   {
      vector<larlite::mctruth> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mctruth>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mctruth>", -2, "vector", 477,
                  typeid(vector<larlite::mctruth>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmctruthgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mctruth>) );
      instance.SetNew(&new_vectorlElarlitecLcLmctruthgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmctruthgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmctruthgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmctruthgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmctruthgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mctruth> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mctruth>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmctruthgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mctruth>*)0x0)->GetClass();
      vectorlElarlitecLcLmctruthgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmctruthgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmctruthgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mctruth> : new vector<larlite::mctruth>;
   }
   static void *newArray_vectorlElarlitecLcLmctruthgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mctruth>[nElements] : new vector<larlite::mctruth>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmctruthgR(void *p) {
      delete ((vector<larlite::mctruth>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmctruthgR(void *p) {
      delete [] ((vector<larlite::mctruth>*)p);
   }
   static void destruct_vectorlElarlitecLcLmctruthgR(void *p) {
      typedef vector<larlite::mctruth> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mctruth>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmctreegR_Dictionary();
   static void vectorlElarlitecLcLmctreegR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmctreegR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmctreegR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmctreegR(void *p);
   static void deleteArray_vectorlElarlitecLcLmctreegR(void *p);
   static void destruct_vectorlElarlitecLcLmctreegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mctree>*)
   {
      vector<larlite::mctree> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mctree>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mctree>", -2, "vector", 477,
                  typeid(vector<larlite::mctree>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmctreegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mctree>) );
      instance.SetNew(&new_vectorlElarlitecLcLmctreegR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmctreegR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmctreegR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmctreegR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmctreegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mctree> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mctree>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmctreegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mctree>*)0x0)->GetClass();
      vectorlElarlitecLcLmctreegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmctreegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmctreegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mctree> : new vector<larlite::mctree>;
   }
   static void *newArray_vectorlElarlitecLcLmctreegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mctree>[nElements] : new vector<larlite::mctree>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmctreegR(void *p) {
      delete ((vector<larlite::mctree>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmctreegR(void *p) {
      delete [] ((vector<larlite::mctree>*)p);
   }
   static void destruct_vectorlElarlitecLcLmctreegR(void *p) {
      typedef vector<larlite::mctree> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mctree>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmctrackgR_Dictionary();
   static void vectorlElarlitecLcLmctrackgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmctrackgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmctrackgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmctrackgR(void *p);
   static void deleteArray_vectorlElarlitecLcLmctrackgR(void *p);
   static void destruct_vectorlElarlitecLcLmctrackgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mctrack>*)
   {
      vector<larlite::mctrack> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mctrack>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mctrack>", -2, "vector", 477,
                  typeid(vector<larlite::mctrack>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmctrackgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mctrack>) );
      instance.SetNew(&new_vectorlElarlitecLcLmctrackgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmctrackgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmctrackgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmctrackgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmctrackgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mctrack> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mctrack>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmctrackgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mctrack>*)0x0)->GetClass();
      vectorlElarlitecLcLmctrackgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmctrackgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmctrackgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mctrack> : new vector<larlite::mctrack>;
   }
   static void *newArray_vectorlElarlitecLcLmctrackgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mctrack>[nElements] : new vector<larlite::mctrack>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmctrackgR(void *p) {
      delete ((vector<larlite::mctrack>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmctrackgR(void *p) {
      delete [] ((vector<larlite::mctrack>*)p);
   }
   static void destruct_vectorlElarlitecLcLmctrackgR(void *p) {
      typedef vector<larlite::mctrack> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mctrack>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmcstepgR_Dictionary();
   static void vectorlElarlitecLcLmcstepgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmcstepgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmcstepgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmcstepgR(void *p);
   static void deleteArray_vectorlElarlitecLcLmcstepgR(void *p);
   static void destruct_vectorlElarlitecLcLmcstepgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mcstep>*)
   {
      vector<larlite::mcstep> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mcstep>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mcstep>", -2, "vector", 477,
                  typeid(vector<larlite::mcstep>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmcstepgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mcstep>) );
      instance.SetNew(&new_vectorlElarlitecLcLmcstepgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmcstepgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmcstepgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmcstepgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmcstepgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mcstep> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mcstep>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmcstepgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mcstep>*)0x0)->GetClass();
      vectorlElarlitecLcLmcstepgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmcstepgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmcstepgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcstep> : new vector<larlite::mcstep>;
   }
   static void *newArray_vectorlElarlitecLcLmcstepgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcstep>[nElements] : new vector<larlite::mcstep>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmcstepgR(void *p) {
      delete ((vector<larlite::mcstep>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmcstepgR(void *p) {
      delete [] ((vector<larlite::mcstep>*)p);
   }
   static void destruct_vectorlElarlitecLcLmcstepgR(void *p) {
      typedef vector<larlite::mcstep> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mcstep>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmcshowergR_Dictionary();
   static void vectorlElarlitecLcLmcshowergR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmcshowergR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmcshowergR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmcshowergR(void *p);
   static void deleteArray_vectorlElarlitecLcLmcshowergR(void *p);
   static void destruct_vectorlElarlitecLcLmcshowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mcshower>*)
   {
      vector<larlite::mcshower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mcshower>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mcshower>", -2, "vector", 477,
                  typeid(vector<larlite::mcshower>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmcshowergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mcshower>) );
      instance.SetNew(&new_vectorlElarlitecLcLmcshowergR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmcshowergR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmcshowergR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmcshowergR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmcshowergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mcshower> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mcshower>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmcshowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mcshower>*)0x0)->GetClass();
      vectorlElarlitecLcLmcshowergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmcshowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmcshowergR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcshower> : new vector<larlite::mcshower>;
   }
   static void *newArray_vectorlElarlitecLcLmcshowergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcshower>[nElements] : new vector<larlite::mcshower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmcshowergR(void *p) {
      delete ((vector<larlite::mcshower>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmcshowergR(void *p) {
      delete [] ((vector<larlite::mcshower>*)p);
   }
   static void destruct_vectorlElarlitecLcLmcshowergR(void *p) {
      typedef vector<larlite::mcshower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mcshower>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmcpartgR_Dictionary();
   static void vectorlElarlitecLcLmcpartgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmcpartgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmcpartgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmcpartgR(void *p);
   static void deleteArray_vectorlElarlitecLcLmcpartgR(void *p);
   static void destruct_vectorlElarlitecLcLmcpartgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mcpart>*)
   {
      vector<larlite::mcpart> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mcpart>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mcpart>", -2, "vector", 477,
                  typeid(vector<larlite::mcpart>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmcpartgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mcpart>) );
      instance.SetNew(&new_vectorlElarlitecLcLmcpartgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmcpartgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmcpartgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmcpartgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmcpartgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mcpart> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mcpart>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmcpartgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mcpart>*)0x0)->GetClass();
      vectorlElarlitecLcLmcpartgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmcpartgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmcpartgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcpart> : new vector<larlite::mcpart>;
   }
   static void *newArray_vectorlElarlitecLcLmcpartgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcpart>[nElements] : new vector<larlite::mcpart>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmcpartgR(void *p) {
      delete ((vector<larlite::mcpart>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmcpartgR(void *p) {
      delete [] ((vector<larlite::mcpart>*)p);
   }
   static void destruct_vectorlElarlitecLcLmcpartgR(void *p) {
      typedef vector<larlite::mcpart> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mcpart>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmcnugR_Dictionary();
   static void vectorlElarlitecLcLmcnugR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmcnugR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmcnugR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmcnugR(void *p);
   static void deleteArray_vectorlElarlitecLcLmcnugR(void *p);
   static void destruct_vectorlElarlitecLcLmcnugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mcnu>*)
   {
      vector<larlite::mcnu> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mcnu>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mcnu>", -2, "vector", 477,
                  typeid(vector<larlite::mcnu>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmcnugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mcnu>) );
      instance.SetNew(&new_vectorlElarlitecLcLmcnugR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmcnugR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmcnugR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmcnugR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmcnugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mcnu> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mcnu>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmcnugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mcnu>*)0x0)->GetClass();
      vectorlElarlitecLcLmcnugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmcnugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmcnugR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcnu> : new vector<larlite::mcnu>;
   }
   static void *newArray_vectorlElarlitecLcLmcnugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcnu>[nElements] : new vector<larlite::mcnu>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmcnugR(void *p) {
      delete ((vector<larlite::mcnu>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmcnugR(void *p) {
      delete [] ((vector<larlite::mcnu>*)p);
   }
   static void destruct_vectorlElarlitecLcLmcnugR(void *p) {
      typedef vector<larlite::mcnu> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mcnu>

namespace ROOT {
   static TClass *vectorlElarlitecLcLmcfluxgR_Dictionary();
   static void vectorlElarlitecLcLmcfluxgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLmcfluxgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLmcfluxgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLmcfluxgR(void *p);
   static void deleteArray_vectorlElarlitecLcLmcfluxgR(void *p);
   static void destruct_vectorlElarlitecLcLmcfluxgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::mcflux>*)
   {
      vector<larlite::mcflux> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::mcflux>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::mcflux>", -2, "vector", 477,
                  typeid(vector<larlite::mcflux>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLmcfluxgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::mcflux>) );
      instance.SetNew(&new_vectorlElarlitecLcLmcfluxgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLmcfluxgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLmcfluxgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLmcfluxgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLmcfluxgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::mcflux> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::mcflux>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLmcfluxgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::mcflux>*)0x0)->GetClass();
      vectorlElarlitecLcLmcfluxgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLmcfluxgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLmcfluxgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcflux> : new vector<larlite::mcflux>;
   }
   static void *newArray_vectorlElarlitecLcLmcfluxgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::mcflux>[nElements] : new vector<larlite::mcflux>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLmcfluxgR(void *p) {
      delete ((vector<larlite::mcflux>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLmcfluxgR(void *p) {
      delete [] ((vector<larlite::mcflux>*)p);
   }
   static void destruct_vectorlElarlitecLcLmcfluxgR(void *p) {
      typedef vector<larlite::mcflux> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::mcflux>

namespace ROOT {
   static TClass *vectorlElarlitecLcLidegR_Dictionary();
   static void vectorlElarlitecLcLidegR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLidegR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLidegR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLidegR(void *p);
   static void deleteArray_vectorlElarlitecLcLidegR(void *p);
   static void destruct_vectorlElarlitecLcLidegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::ide>*)
   {
      vector<larlite::ide> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::ide>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::ide>", -2, "vector", 477,
                  typeid(vector<larlite::ide>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLidegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::ide>) );
      instance.SetNew(&new_vectorlElarlitecLcLidegR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLidegR);
      instance.SetDelete(&delete_vectorlElarlitecLcLidegR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLidegR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLidegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::ide> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::ide>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLidegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::ide>*)0x0)->GetClass();
      vectorlElarlitecLcLidegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLidegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLidegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::ide> : new vector<larlite::ide>;
   }
   static void *newArray_vectorlElarlitecLcLidegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::ide>[nElements] : new vector<larlite::ide>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLidegR(void *p) {
      delete ((vector<larlite::ide>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLidegR(void *p) {
      delete [] ((vector<larlite::ide>*)p);
   }
   static void destruct_vectorlElarlitecLcLidegR(void *p) {
      typedef vector<larlite::ide> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::ide>

namespace ROOT {
   static TClass *vectorlElarlitecLcLhitgR_Dictionary();
   static void vectorlElarlitecLcLhitgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLhitgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLhitgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLhitgR(void *p);
   static void deleteArray_vectorlElarlitecLcLhitgR(void *p);
   static void destruct_vectorlElarlitecLcLhitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::hit>*)
   {
      vector<larlite::hit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::hit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::hit>", -2, "vector", 477,
                  typeid(vector<larlite::hit>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLhitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::hit>) );
      instance.SetNew(&new_vectorlElarlitecLcLhitgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLhitgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLhitgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLhitgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLhitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::hit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::hit>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLhitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::hit>*)0x0)->GetClass();
      vectorlElarlitecLcLhitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLhitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLhitgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::hit> : new vector<larlite::hit>;
   }
   static void *newArray_vectorlElarlitecLcLhitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::hit>[nElements] : new vector<larlite::hit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLhitgR(void *p) {
      delete ((vector<larlite::hit>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLhitgR(void *p) {
      delete [] ((vector<larlite::hit>*)p);
   }
   static void destruct_vectorlElarlitecLcLhitgR(void *p) {
      typedef vector<larlite::hit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::hit>

namespace ROOT {
   static TClass *vectorlElarlitecLcLgtruthgR_Dictionary();
   static void vectorlElarlitecLcLgtruthgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLgtruthgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLgtruthgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLgtruthgR(void *p);
   static void deleteArray_vectorlElarlitecLcLgtruthgR(void *p);
   static void destruct_vectorlElarlitecLcLgtruthgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::gtruth>*)
   {
      vector<larlite::gtruth> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::gtruth>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::gtruth>", -2, "vector", 477,
                  typeid(vector<larlite::gtruth>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLgtruthgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::gtruth>) );
      instance.SetNew(&new_vectorlElarlitecLcLgtruthgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLgtruthgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLgtruthgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLgtruthgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLgtruthgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::gtruth> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::gtruth>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLgtruthgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::gtruth>*)0x0)->GetClass();
      vectorlElarlitecLcLgtruthgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLgtruthgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLgtruthgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::gtruth> : new vector<larlite::gtruth>;
   }
   static void *newArray_vectorlElarlitecLcLgtruthgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::gtruth>[nElements] : new vector<larlite::gtruth>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLgtruthgR(void *p) {
      delete ((vector<larlite::gtruth>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLgtruthgR(void *p) {
      delete [] ((vector<larlite::gtruth>*)p);
   }
   static void destruct_vectorlElarlitecLcLgtruthgR(void *p) {
      typedef vector<larlite::gtruth> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::gtruth>

namespace ROOT {
   static TClass *vectorlElarlitecLcLflashmatchgR_Dictionary();
   static void vectorlElarlitecLcLflashmatchgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLflashmatchgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLflashmatchgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLflashmatchgR(void *p);
   static void deleteArray_vectorlElarlitecLcLflashmatchgR(void *p);
   static void destruct_vectorlElarlitecLcLflashmatchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::flashmatch>*)
   {
      vector<larlite::flashmatch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::flashmatch>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::flashmatch>", -2, "vector", 477,
                  typeid(vector<larlite::flashmatch>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLflashmatchgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::flashmatch>) );
      instance.SetNew(&new_vectorlElarlitecLcLflashmatchgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLflashmatchgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLflashmatchgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLflashmatchgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLflashmatchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::flashmatch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::flashmatch>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLflashmatchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::flashmatch>*)0x0)->GetClass();
      vectorlElarlitecLcLflashmatchgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLflashmatchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLflashmatchgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::flashmatch> : new vector<larlite::flashmatch>;
   }
   static void *newArray_vectorlElarlitecLcLflashmatchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::flashmatch>[nElements] : new vector<larlite::flashmatch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLflashmatchgR(void *p) {
      delete ((vector<larlite::flashmatch>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLflashmatchgR(void *p) {
      delete [] ((vector<larlite::flashmatch>*)p);
   }
   static void destruct_vectorlElarlitecLcLflashmatchgR(void *p) {
      typedef vector<larlite::flashmatch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::flashmatch>

namespace ROOT {
   static TClass *vectorlElarlitecLcLfifogR_Dictionary();
   static void vectorlElarlitecLcLfifogR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLfifogR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLfifogR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLfifogR(void *p);
   static void deleteArray_vectorlElarlitecLcLfifogR(void *p);
   static void destruct_vectorlElarlitecLcLfifogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::fifo>*)
   {
      vector<larlite::fifo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::fifo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::fifo>", -2, "vector", 477,
                  typeid(vector<larlite::fifo>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLfifogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::fifo>) );
      instance.SetNew(&new_vectorlElarlitecLcLfifogR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLfifogR);
      instance.SetDelete(&delete_vectorlElarlitecLcLfifogR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLfifogR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLfifogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::fifo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::fifo>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLfifogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::fifo>*)0x0)->GetClass();
      vectorlElarlitecLcLfifogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLfifogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLfifogR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::fifo> : new vector<larlite::fifo>;
   }
   static void *newArray_vectorlElarlitecLcLfifogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::fifo>[nElements] : new vector<larlite::fifo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLfifogR(void *p) {
      delete ((vector<larlite::fifo>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLfifogR(void *p) {
      delete [] ((vector<larlite::fifo>*)p);
   }
   static void destruct_vectorlElarlitecLcLfifogR(void *p) {
      typedef vector<larlite::fifo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::fifo>

namespace ROOT {
   static TClass *vectorlElarlitecLcLendpoint2dgR_Dictionary();
   static void vectorlElarlitecLcLendpoint2dgR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLendpoint2dgR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLendpoint2dgR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLendpoint2dgR(void *p);
   static void deleteArray_vectorlElarlitecLcLendpoint2dgR(void *p);
   static void destruct_vectorlElarlitecLcLendpoint2dgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::endpoint2d>*)
   {
      vector<larlite::endpoint2d> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::endpoint2d>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::endpoint2d>", -2, "vector", 477,
                  typeid(vector<larlite::endpoint2d>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLendpoint2dgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::endpoint2d>) );
      instance.SetNew(&new_vectorlElarlitecLcLendpoint2dgR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLendpoint2dgR);
      instance.SetDelete(&delete_vectorlElarlitecLcLendpoint2dgR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLendpoint2dgR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLendpoint2dgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::endpoint2d> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::endpoint2d>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLendpoint2dgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::endpoint2d>*)0x0)->GetClass();
      vectorlElarlitecLcLendpoint2dgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLendpoint2dgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLendpoint2dgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::endpoint2d> : new vector<larlite::endpoint2d>;
   }
   static void *newArray_vectorlElarlitecLcLendpoint2dgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::endpoint2d>[nElements] : new vector<larlite::endpoint2d>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLendpoint2dgR(void *p) {
      delete ((vector<larlite::endpoint2d>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLendpoint2dgR(void *p) {
      delete [] ((vector<larlite::endpoint2d>*)p);
   }
   static void destruct_vectorlElarlitecLcLendpoint2dgR(void *p) {
      typedef vector<larlite::endpoint2d> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::endpoint2d>

namespace ROOT {
   static TClass *vectorlElarlitecLcLcosmictaggR_Dictionary();
   static void vectorlElarlitecLcLcosmictaggR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLcosmictaggR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLcosmictaggR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLcosmictaggR(void *p);
   static void deleteArray_vectorlElarlitecLcLcosmictaggR(void *p);
   static void destruct_vectorlElarlitecLcLcosmictaggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::cosmictag>*)
   {
      vector<larlite::cosmictag> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::cosmictag>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::cosmictag>", -2, "vector", 477,
                  typeid(vector<larlite::cosmictag>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLcosmictaggR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::cosmictag>) );
      instance.SetNew(&new_vectorlElarlitecLcLcosmictaggR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLcosmictaggR);
      instance.SetDelete(&delete_vectorlElarlitecLcLcosmictaggR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLcosmictaggR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLcosmictaggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::cosmictag> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::cosmictag>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLcosmictaggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::cosmictag>*)0x0)->GetClass();
      vectorlElarlitecLcLcosmictaggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLcosmictaggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLcosmictaggR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::cosmictag> : new vector<larlite::cosmictag>;
   }
   static void *newArray_vectorlElarlitecLcLcosmictaggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::cosmictag>[nElements] : new vector<larlite::cosmictag>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLcosmictaggR(void *p) {
      delete ((vector<larlite::cosmictag>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLcosmictaggR(void *p) {
      delete [] ((vector<larlite::cosmictag>*)p);
   }
   static void destruct_vectorlElarlitecLcLcosmictaggR(void *p) {
      typedef vector<larlite::cosmictag> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::cosmictag>

namespace ROOT {
   static TClass *vectorlElarlitecLcLclustergR_Dictionary();
   static void vectorlElarlitecLcLclustergR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLclustergR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLclustergR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLclustergR(void *p);
   static void deleteArray_vectorlElarlitecLcLclustergR(void *p);
   static void destruct_vectorlElarlitecLcLclustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::cluster>*)
   {
      vector<larlite::cluster> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::cluster>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::cluster>", -2, "vector", 477,
                  typeid(vector<larlite::cluster>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLclustergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::cluster>) );
      instance.SetNew(&new_vectorlElarlitecLcLclustergR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLclustergR);
      instance.SetDelete(&delete_vectorlElarlitecLcLclustergR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLclustergR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLclustergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::cluster> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::cluster>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLclustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::cluster>*)0x0)->GetClass();
      vectorlElarlitecLcLclustergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLclustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLclustergR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::cluster> : new vector<larlite::cluster>;
   }
   static void *newArray_vectorlElarlitecLcLclustergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::cluster>[nElements] : new vector<larlite::cluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLclustergR(void *p) {
      delete ((vector<larlite::cluster>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLclustergR(void *p) {
      delete [] ((vector<larlite::cluster>*)p);
   }
   static void destruct_vectorlElarlitecLcLclustergR(void *p) {
      typedef vector<larlite::cluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::cluster>

namespace ROOT {
   static TClass *vectorlElarlitecLcLcalorimetrygR_Dictionary();
   static void vectorlElarlitecLcLcalorimetrygR_TClassManip(TClass*);
   static void *new_vectorlElarlitecLcLcalorimetrygR(void *p = 0);
   static void *newArray_vectorlElarlitecLcLcalorimetrygR(Long_t size, void *p);
   static void delete_vectorlElarlitecLcLcalorimetrygR(void *p);
   static void deleteArray_vectorlElarlitecLcLcalorimetrygR(void *p);
   static void destruct_vectorlElarlitecLcLcalorimetrygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<larlite::calorimetry>*)
   {
      vector<larlite::calorimetry> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<larlite::calorimetry>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<larlite::calorimetry>", -2, "vector", 477,
                  typeid(vector<larlite::calorimetry>), DefineBehavior(ptr, ptr),
                  &vectorlElarlitecLcLcalorimetrygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<larlite::calorimetry>) );
      instance.SetNew(&new_vectorlElarlitecLcLcalorimetrygR);
      instance.SetNewArray(&newArray_vectorlElarlitecLcLcalorimetrygR);
      instance.SetDelete(&delete_vectorlElarlitecLcLcalorimetrygR);
      instance.SetDeleteArray(&deleteArray_vectorlElarlitecLcLcalorimetrygR);
      instance.SetDestructor(&destruct_vectorlElarlitecLcLcalorimetrygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<larlite::calorimetry> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<larlite::calorimetry>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlElarlitecLcLcalorimetrygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<larlite::calorimetry>*)0x0)->GetClass();
      vectorlElarlitecLcLcalorimetrygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlElarlitecLcLcalorimetrygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlElarlitecLcLcalorimetrygR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::calorimetry> : new vector<larlite::calorimetry>;
   }
   static void *newArray_vectorlElarlitecLcLcalorimetrygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<larlite::calorimetry>[nElements] : new vector<larlite::calorimetry>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlElarlitecLcLcalorimetrygR(void *p) {
      delete ((vector<larlite::calorimetry>*)p);
   }
   static void deleteArray_vectorlElarlitecLcLcalorimetrygR(void *p) {
      delete [] ((vector<larlite::calorimetry>*)p);
   }
   static void destruct_vectorlElarlitecLcLcalorimetrygR(void *p) {
      typedef vector<larlite::calorimetry> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<larlite::calorimetry>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 477,
                  typeid(vector<int>), DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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
                  &vectorlEboolgR_Dictionary, isa_proxy, 4,
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
   static TClass *vectorlETVector3gR_Dictionary();
   static void vectorlETVector3gR_TClassManip(TClass*);
   static void *new_vectorlETVector3gR(void *p = 0);
   static void *newArray_vectorlETVector3gR(Long_t size, void *p);
   static void delete_vectorlETVector3gR(void *p);
   static void deleteArray_vectorlETVector3gR(void *p);
   static void destruct_vectorlETVector3gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TVector3>*)
   {
      vector<TVector3> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TVector3>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TVector3>", -2, "vector", 477,
                  typeid(vector<TVector3>), DefineBehavior(ptr, ptr),
                  &vectorlETVector3gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TVector3>) );
      instance.SetNew(&new_vectorlETVector3gR);
      instance.SetNewArray(&newArray_vectorlETVector3gR);
      instance.SetDelete(&delete_vectorlETVector3gR);
      instance.SetDeleteArray(&deleteArray_vectorlETVector3gR);
      instance.SetDestructor(&destruct_vectorlETVector3gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TVector3> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TVector3>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETVector3gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TVector3>*)0x0)->GetClass();
      vectorlETVector3gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETVector3gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETVector3gR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TVector3> : new vector<TVector3>;
   }
   static void *newArray_vectorlETVector3gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TVector3>[nElements] : new vector<TVector3>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETVector3gR(void *p) {
      delete ((vector<TVector3>*)p);
   }
   static void deleteArray_vectorlETVector3gR(void *p) {
      delete [] ((vector<TVector3>*)p);
   }
   static void destruct_vectorlETVector3gR(void *p) {
      typedef vector<TVector3> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TVector3>

namespace ROOT {
   static TClass *vectorlETMatrixTlEdoublegRsPgR_Dictionary();
   static void vectorlETMatrixTlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_vectorlETMatrixTlEdoublegRsPgR(void *p = 0);
   static void *newArray_vectorlETMatrixTlEdoublegRsPgR(Long_t size, void *p);
   static void delete_vectorlETMatrixTlEdoublegRsPgR(void *p);
   static void deleteArray_vectorlETMatrixTlEdoublegRsPgR(void *p);
   static void destruct_vectorlETMatrixTlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TMatrixT<double> >*)
   {
      vector<TMatrixT<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TMatrixT<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TMatrixT<double> >", -2, "vector", 477,
                  typeid(vector<TMatrixT<double> >), DefineBehavior(ptr, ptr),
                  &vectorlETMatrixTlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TMatrixT<double> >) );
      instance.SetNew(&new_vectorlETMatrixTlEdoublegRsPgR);
      instance.SetNewArray(&newArray_vectorlETMatrixTlEdoublegRsPgR);
      instance.SetDelete(&delete_vectorlETMatrixTlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlETMatrixTlEdoublegRsPgR);
      instance.SetDestructor(&destruct_vectorlETMatrixTlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TMatrixT<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TMatrixT<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETMatrixTlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TMatrixT<double> >*)0x0)->GetClass();
      vectorlETMatrixTlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETMatrixTlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETMatrixTlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TMatrixT<double> > : new vector<TMatrixT<double> >;
   }
   static void *newArray_vectorlETMatrixTlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TMatrixT<double> >[nElements] : new vector<TMatrixT<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETMatrixTlEdoublegRsPgR(void *p) {
      delete ((vector<TMatrixT<double> >*)p);
   }
   static void deleteArray_vectorlETMatrixTlEdoublegRsPgR(void *p) {
      delete [] ((vector<TMatrixT<double> >*)p);
   }
   static void destruct_vectorlETMatrixTlEdoublegRsPgR(void *p) {
      typedef vector<TMatrixT<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TMatrixT<double> >

namespace ROOT {
   static TClass *vectorlETLorentzVectorgR_Dictionary();
   static void vectorlETLorentzVectorgR_TClassManip(TClass*);
   static void *new_vectorlETLorentzVectorgR(void *p = 0);
   static void *newArray_vectorlETLorentzVectorgR(Long_t size, void *p);
   static void delete_vectorlETLorentzVectorgR(void *p);
   static void deleteArray_vectorlETLorentzVectorgR(void *p);
   static void destruct_vectorlETLorentzVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TLorentzVector>*)
   {
      vector<TLorentzVector> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TLorentzVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TLorentzVector>", -2, "vector", 477,
                  typeid(vector<TLorentzVector>), DefineBehavior(ptr, ptr),
                  &vectorlETLorentzVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<TLorentzVector>) );
      instance.SetNew(&new_vectorlETLorentzVectorgR);
      instance.SetNewArray(&newArray_vectorlETLorentzVectorgR);
      instance.SetDelete(&delete_vectorlETLorentzVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlETLorentzVectorgR);
      instance.SetDestructor(&destruct_vectorlETLorentzVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TLorentzVector> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETLorentzVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TLorentzVector>*)0x0)->GetClass();
      vectorlETLorentzVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETLorentzVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETLorentzVectorgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLorentzVector> : new vector<TLorentzVector>;
   }
   static void *newArray_vectorlETLorentzVectorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) vector<TLorentzVector>[nElements] : new vector<TLorentzVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETLorentzVectorgR(void *p) {
      delete ((vector<TLorentzVector>*)p);
   }
   static void deleteArray_vectorlETLorentzVectorgR(void *p) {
      delete [] ((vector<TLorentzVector>*)p);
   }
   static void destruct_vectorlETLorentzVectorgR(void *p) {
      typedef vector<TLorentzVector> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TLorentzVector>

namespace ROOT {
   static TClass *setlEstringgR_Dictionary();
   static void setlEstringgR_TClassManip(TClass*);
   static void *new_setlEstringgR(void *p = 0);
   static void *newArray_setlEstringgR(Long_t size, void *p);
   static void delete_setlEstringgR(void *p);
   static void deleteArray_setlEstringgR(void *p);
   static void destruct_setlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<string>*)
   {
      set<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<string>));
      static ::ROOT::TGenericClassInfo 
         instance("set<string>", -2, "set", 398,
                  typeid(set<string>), DefineBehavior(ptr, ptr),
                  &setlEstringgR_Dictionary, isa_proxy, 4,
                  sizeof(set<string>) );
      instance.SetNew(&new_setlEstringgR);
      instance.SetNewArray(&newArray_setlEstringgR);
      instance.SetDelete(&delete_setlEstringgR);
      instance.SetDeleteArray(&deleteArray_setlEstringgR);
      instance.SetDestructor(&destruct_setlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const set<string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<string>*)0x0)->GetClass();
      setlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) set<string> : new set<string>;
   }
   static void *newArray_setlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) set<string>[nElements] : new set<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEstringgR(void *p) {
      delete ((set<string>*)p);
   }
   static void deleteArray_setlEstringgR(void *p) {
      delete [] ((set<string>*)p);
   }
   static void destruct_setlEstringgR(void *p) {
      typedef set<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<string>

namespace ROOT {
   static TClass *setlEintgR_Dictionary();
   static void setlEintgR_TClassManip(TClass*);
   static void *new_setlEintgR(void *p = 0);
   static void *newArray_setlEintgR(Long_t size, void *p);
   static void delete_setlEintgR(void *p);
   static void deleteArray_setlEintgR(void *p);
   static void destruct_setlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const set<int>*)
   {
      set<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(set<int>));
      static ::ROOT::TGenericClassInfo 
         instance("set<int>", -2, "set", 398,
                  typeid(set<int>), DefineBehavior(ptr, ptr),
                  &setlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(set<int>) );
      instance.SetNew(&new_setlEintgR);
      instance.SetNewArray(&newArray_setlEintgR);
      instance.SetDelete(&delete_setlEintgR);
      instance.SetDeleteArray(&deleteArray_setlEintgR);
      instance.SetDestructor(&destruct_setlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Insert< set<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const set<int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *setlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const set<int>*)0x0)->GetClass();
      setlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void setlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_setlEintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) set<int> : new set<int>;
   }
   static void *newArray_setlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) set<int>[nElements] : new set<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_setlEintgR(void *p) {
      delete ((set<int>*)p);
   }
   static void deleteArray_setlEintgR(void *p) {
      delete [] ((set<int>*)p);
   }
   static void destruct_setlEintgR(void *p) {
      typedef set<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class set<int>

namespace ROOT {
   static TClass *maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR_Dictionary();
   static void maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p = 0);
   static void *newArray_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(Long_t size, void *p);
   static void delete_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p);
   static void deleteArray_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p);
   static void destruct_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned short,vector<larlite::ide> >*)
   {
      map<unsigned short,vector<larlite::ide> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned short,vector<larlite::ide> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned short,vector<larlite::ide> >", -2, "map", 783,
                  typeid(map<unsigned short,vector<larlite::ide> >), DefineBehavior(ptr, ptr),
                  &maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<unsigned short,vector<larlite::ide> >) );
      instance.SetNew(&new_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR);
      instance.SetNewArray(&newArray_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR);
      instance.SetDelete(&delete_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR);
      instance.SetDestructor(&destruct_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned short,vector<larlite::ide> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned short,vector<larlite::ide> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned short,vector<larlite::ide> >*)0x0)->GetClass();
      maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<unsigned short,vector<larlite::ide> > : new map<unsigned short,vector<larlite::ide> >;
   }
   static void *newArray_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<unsigned short,vector<larlite::ide> >[nElements] : new map<unsigned short,vector<larlite::ide> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p) {
      delete ((map<unsigned short,vector<larlite::ide> >*)p);
   }
   static void deleteArray_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p) {
      delete [] ((map<unsigned short,vector<larlite::ide> >*)p);
   }
   static void destruct_maplEunsignedsPshortcOvectorlElarlitecLcLidegRsPgR(void *p) {
      typedef map<unsigned short,vector<larlite::ide> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned short,vector<larlite::ide> >

namespace ROOT {
   static TClass *maplEunsignedsPshortcOlarlitecLcLsimchgR_Dictionary();
   static void maplEunsignedsPshortcOlarlitecLcLsimchgR_TClassManip(TClass*);
   static void *new_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p = 0);
   static void *newArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(Long_t size, void *p);
   static void delete_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p);
   static void deleteArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p);
   static void destruct_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<unsigned short,larlite::simch>*)
   {
      map<unsigned short,larlite::simch> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<unsigned short,larlite::simch>));
      static ::ROOT::TGenericClassInfo 
         instance("map<unsigned short,larlite::simch>", -2, "map", 783,
                  typeid(map<unsigned short,larlite::simch>), DefineBehavior(ptr, ptr),
                  &maplEunsignedsPshortcOlarlitecLcLsimchgR_Dictionary, isa_proxy, 4,
                  sizeof(map<unsigned short,larlite::simch>) );
      instance.SetNew(&new_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetNewArray(&newArray_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetDelete(&delete_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetDeleteArray(&deleteArray_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.SetDestructor(&destruct_maplEunsignedsPshortcOlarlitecLcLsimchgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<unsigned short,larlite::simch> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<unsigned short,larlite::simch>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEunsignedsPshortcOlarlitecLcLsimchgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<unsigned short,larlite::simch>*)0x0)->GetClass();
      maplEunsignedsPshortcOlarlitecLcLsimchgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEunsignedsPshortcOlarlitecLcLsimchgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<unsigned short,larlite::simch> : new map<unsigned short,larlite::simch>;
   }
   static void *newArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<unsigned short,larlite::simch>[nElements] : new map<unsigned short,larlite::simch>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      delete ((map<unsigned short,larlite::simch>*)p);
   }
   static void deleteArray_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      delete [] ((map<unsigned short,larlite::simch>*)p);
   }
   static void destruct_maplEunsignedsPshortcOlarlitecLcLsimchgR(void *p) {
      typedef map<unsigned short,larlite::simch> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<unsigned short,larlite::simch>

namespace ROOT {
   static TClass *maplEstringcOvectorlEstringgRsPgR_Dictionary();
   static void maplEstringcOvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEstringgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEstringgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<string> >*)
   {
      map<string,vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<string> >", -2, "map", 783,
                  typeid(map<string,vector<string> >), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<string> >) );
      instance.SetNew(&new_maplEstringcOvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<string> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<string> >*)0x0)->GetClass();
      maplEstringcOvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<string> > : new map<string,vector<string> >;
   }
   static void *newArray_maplEstringcOvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<string> >[nElements] : new map<string,vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEstringgRsPgR(void *p) {
      delete ((map<string,vector<string> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEstringgRsPgR(void *p) {
      delete [] ((map<string,vector<string> >*)p);
   }
   static void destruct_maplEstringcOvectorlEstringgRsPgR(void *p) {
      typedef map<string,vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<string> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary();
   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<int> >*)
   {
      map<string,vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<int> >", -2, "map", 783,
                  typeid(map<string,vector<int> >), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<int> >) );
      instance.SetNew(&new_maplEstringcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<int> >*)0x0)->GetClass();
      maplEstringcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<int> > : new map<string,vector<int> >;
   }
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<int> >[nElements] : new map<string,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete ((map<string,vector<int> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete [] ((map<string,vector<int> >*)p);
   }
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p) {
      typedef map<string,vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<int> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<double> >*)
   {
      map<string,vector<double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<double> >", -2, "map", 783,
                  typeid(map<string,vector<double> >), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<double> >) );
      instance.SetNew(&new_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<double> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<double> >*)0x0)->GetClass();
      maplEstringcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<double> > : new map<string,vector<double> >;
   }
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<double> >[nElements] : new map<string,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete ((map<string,vector<double> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete [] ((map<string,vector<double> >*)p);
   }
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      typedef map<string,vector<double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<double> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEboolgRsPgR_Dictionary();
   static void maplEstringcOvectorlEboolgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEboolgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEboolgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEboolgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEboolgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<bool> >*)
   {
      map<string,vector<bool> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<bool> >", -2, "map", 783,
                  typeid(map<string,vector<bool> >), DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEboolgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<bool> >) );
      instance.SetNew(&new_maplEstringcOvectorlEboolgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEboolgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEboolgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<bool> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<bool> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<bool> >*)0x0)->GetClass();
      maplEstringcOvectorlEboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEboolgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<bool> > : new map<string,vector<bool> >;
   }
   static void *newArray_maplEstringcOvectorlEboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,vector<bool> >[nElements] : new map<string,vector<bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEboolgRsPgR(void *p) {
      delete ((map<string,vector<bool> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEboolgRsPgR(void *p) {
      delete [] ((map<string,vector<bool> >*)p);
   }
   static void destruct_maplEstringcOvectorlEboolgRsPgR(void *p) {
      typedef map<string,vector<bool> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<bool> >

namespace ROOT {
   static TClass *maplEstringcOstringgR_Dictionary();
   static void maplEstringcOstringgR_TClassManip(TClass*);
   static void *new_maplEstringcOstringgR(void *p = 0);
   static void *newArray_maplEstringcOstringgR(Long_t size, void *p);
   static void delete_maplEstringcOstringgR(void *p);
   static void deleteArray_maplEstringcOstringgR(void *p);
   static void destruct_maplEstringcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,string>*)
   {
      map<string,string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,string>", -2, "map", 783,
                  typeid(map<string,string>), DefineBehavior(ptr, ptr),
                  &maplEstringcOstringgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,string>) );
      instance.SetNew(&new_maplEstringcOstringgR);
      instance.SetNewArray(&newArray_maplEstringcOstringgR);
      instance.SetDelete(&delete_maplEstringcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOstringgR);
      instance.SetDestructor(&destruct_maplEstringcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,string>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,string>*)0x0)->GetClass();
      maplEstringcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOstringgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,string> : new map<string,string>;
   }
   static void *newArray_maplEstringcOstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,string>[nElements] : new map<string,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOstringgR(void *p) {
      delete ((map<string,string>*)p);
   }
   static void deleteArray_maplEstringcOstringgR(void *p) {
      delete [] ((map<string,string>*)p);
   }
   static void destruct_maplEstringcOstringgR(void *p) {
      typedef map<string,string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,string>

namespace ROOT {
   static TClass *maplEstringcOlarlitecLcLsubrun_basemUgR_Dictionary();
   static void maplEstringcOlarlitecLcLsubrun_basemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p = 0);
   static void *newArray_maplEstringcOlarlitecLcLsubrun_basemUgR(Long_t size, void *p);
   static void delete_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p);
   static void deleteArray_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p);
   static void destruct_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,larlite::subrun_base*>*)
   {
      map<string,larlite::subrun_base*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,larlite::subrun_base*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,larlite::subrun_base*>", -2, "map", 783,
                  typeid(map<string,larlite::subrun_base*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOlarlitecLcLsubrun_basemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,larlite::subrun_base*>) );
      instance.SetNew(&new_maplEstringcOlarlitecLcLsubrun_basemUgR);
      instance.SetNewArray(&newArray_maplEstringcOlarlitecLcLsubrun_basemUgR);
      instance.SetDelete(&delete_maplEstringcOlarlitecLcLsubrun_basemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOlarlitecLcLsubrun_basemUgR);
      instance.SetDestructor(&destruct_maplEstringcOlarlitecLcLsubrun_basemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,larlite::subrun_base*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,larlite::subrun_base*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOlarlitecLcLsubrun_basemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,larlite::subrun_base*>*)0x0)->GetClass();
      maplEstringcOlarlitecLcLsubrun_basemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOlarlitecLcLsubrun_basemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,larlite::subrun_base*> : new map<string,larlite::subrun_base*>;
   }
   static void *newArray_maplEstringcOlarlitecLcLsubrun_basemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,larlite::subrun_base*>[nElements] : new map<string,larlite::subrun_base*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p) {
      delete ((map<string,larlite::subrun_base*>*)p);
   }
   static void deleteArray_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p) {
      delete [] ((map<string,larlite::subrun_base*>*)p);
   }
   static void destruct_maplEstringcOlarlitecLcLsubrun_basemUgR(void *p) {
      typedef map<string,larlite::subrun_base*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,larlite::subrun_base*>

namespace ROOT {
   static TClass *maplEstringcOlarlitecLcLrun_basemUgR_Dictionary();
   static void maplEstringcOlarlitecLcLrun_basemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOlarlitecLcLrun_basemUgR(void *p = 0);
   static void *newArray_maplEstringcOlarlitecLcLrun_basemUgR(Long_t size, void *p);
   static void delete_maplEstringcOlarlitecLcLrun_basemUgR(void *p);
   static void deleteArray_maplEstringcOlarlitecLcLrun_basemUgR(void *p);
   static void destruct_maplEstringcOlarlitecLcLrun_basemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,larlite::run_base*>*)
   {
      map<string,larlite::run_base*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,larlite::run_base*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,larlite::run_base*>", -2, "map", 783,
                  typeid(map<string,larlite::run_base*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOlarlitecLcLrun_basemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,larlite::run_base*>) );
      instance.SetNew(&new_maplEstringcOlarlitecLcLrun_basemUgR);
      instance.SetNewArray(&newArray_maplEstringcOlarlitecLcLrun_basemUgR);
      instance.SetDelete(&delete_maplEstringcOlarlitecLcLrun_basemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOlarlitecLcLrun_basemUgR);
      instance.SetDestructor(&destruct_maplEstringcOlarlitecLcLrun_basemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,larlite::run_base*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,larlite::run_base*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOlarlitecLcLrun_basemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,larlite::run_base*>*)0x0)->GetClass();
      maplEstringcOlarlitecLcLrun_basemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOlarlitecLcLrun_basemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOlarlitecLcLrun_basemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,larlite::run_base*> : new map<string,larlite::run_base*>;
   }
   static void *newArray_maplEstringcOlarlitecLcLrun_basemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,larlite::run_base*>[nElements] : new map<string,larlite::run_base*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOlarlitecLcLrun_basemUgR(void *p) {
      delete ((map<string,larlite::run_base*>*)p);
   }
   static void deleteArray_maplEstringcOlarlitecLcLrun_basemUgR(void *p) {
      delete [] ((map<string,larlite::run_base*>*)p);
   }
   static void destruct_maplEstringcOlarlitecLcLrun_basemUgR(void *p) {
      typedef map<string,larlite::run_base*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,larlite::run_base*>

namespace ROOT {
   static TClass *maplEstringcOlarlitecLcLevent_basemUgR_Dictionary();
   static void maplEstringcOlarlitecLcLevent_basemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOlarlitecLcLevent_basemUgR(void *p = 0);
   static void *newArray_maplEstringcOlarlitecLcLevent_basemUgR(Long_t size, void *p);
   static void delete_maplEstringcOlarlitecLcLevent_basemUgR(void *p);
   static void deleteArray_maplEstringcOlarlitecLcLevent_basemUgR(void *p);
   static void destruct_maplEstringcOlarlitecLcLevent_basemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,larlite::event_base*>*)
   {
      map<string,larlite::event_base*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,larlite::event_base*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,larlite::event_base*>", -2, "map", 783,
                  typeid(map<string,larlite::event_base*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOlarlitecLcLevent_basemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,larlite::event_base*>) );
      instance.SetNew(&new_maplEstringcOlarlitecLcLevent_basemUgR);
      instance.SetNewArray(&newArray_maplEstringcOlarlitecLcLevent_basemUgR);
      instance.SetDelete(&delete_maplEstringcOlarlitecLcLevent_basemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOlarlitecLcLevent_basemUgR);
      instance.SetDestructor(&destruct_maplEstringcOlarlitecLcLevent_basemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,larlite::event_base*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,larlite::event_base*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOlarlitecLcLevent_basemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,larlite::event_base*>*)0x0)->GetClass();
      maplEstringcOlarlitecLcLevent_basemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOlarlitecLcLevent_basemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOlarlitecLcLevent_basemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,larlite::event_base*> : new map<string,larlite::event_base*>;
   }
   static void *newArray_maplEstringcOlarlitecLcLevent_basemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,larlite::event_base*>[nElements] : new map<string,larlite::event_base*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOlarlitecLcLevent_basemUgR(void *p) {
      delete ((map<string,larlite::event_base*>*)p);
   }
   static void deleteArray_maplEstringcOlarlitecLcLevent_basemUgR(void *p) {
      delete [] ((map<string,larlite::event_base*>*)p);
   }
   static void destruct_maplEstringcOlarlitecLcLevent_basemUgR(void *p) {
      typedef map<string,larlite::event_base*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,larlite::event_base*>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = 0);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 783,
                  typeid(map<string,int>), DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int>*)0x0)->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete ((map<string,int>*)p);
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] ((map<string,int>*)p);
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace ROOT {
   static TClass *maplEstringcOdoublegR_Dictionary();
   static void maplEstringcOdoublegR_TClassManip(TClass*);
   static void *new_maplEstringcOdoublegR(void *p = 0);
   static void *newArray_maplEstringcOdoublegR(Long_t size, void *p);
   static void delete_maplEstringcOdoublegR(void *p);
   static void deleteArray_maplEstringcOdoublegR(void *p);
   static void destruct_maplEstringcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,double>*)
   {
      map<string,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,double>", -2, "map", 783,
                  typeid(map<string,double>), DefineBehavior(ptr, ptr),
                  &maplEstringcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,double>) );
      instance.SetNew(&new_maplEstringcOdoublegR);
      instance.SetNewArray(&newArray_maplEstringcOdoublegR);
      instance.SetDelete(&delete_maplEstringcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOdoublegR);
      instance.SetDestructor(&destruct_maplEstringcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,double>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,double>*)0x0)->GetClass();
      maplEstringcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,double> : new map<string,double>;
   }
   static void *newArray_maplEstringcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,double>[nElements] : new map<string,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOdoublegR(void *p) {
      delete ((map<string,double>*)p);
   }
   static void deleteArray_maplEstringcOdoublegR(void *p) {
      delete [] ((map<string,double>*)p);
   }
   static void destruct_maplEstringcOdoublegR(void *p) {
      typedef map<string,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,double>

namespace ROOT {
   static TClass *maplEstringcOboolgR_Dictionary();
   static void maplEstringcOboolgR_TClassManip(TClass*);
   static void *new_maplEstringcOboolgR(void *p = 0);
   static void *newArray_maplEstringcOboolgR(Long_t size, void *p);
   static void delete_maplEstringcOboolgR(void *p);
   static void deleteArray_maplEstringcOboolgR(void *p);
   static void destruct_maplEstringcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,bool>*)
   {
      map<string,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,bool>", -2, "map", 783,
                  typeid(map<string,bool>), DefineBehavior(ptr, ptr),
                  &maplEstringcOboolgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,bool>) );
      instance.SetNew(&new_maplEstringcOboolgR);
      instance.SetNewArray(&newArray_maplEstringcOboolgR);
      instance.SetDelete(&delete_maplEstringcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOboolgR);
      instance.SetDestructor(&destruct_maplEstringcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,bool>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,bool>*)0x0)->GetClass();
      maplEstringcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOboolgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,bool> : new map<string,bool>;
   }
   static void *newArray_maplEstringcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,bool>[nElements] : new map<string,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOboolgR(void *p) {
      delete ((map<string,bool>*)p);
   }
   static void deleteArray_maplEstringcOboolgR(void *p) {
      delete [] ((map<string,bool>*)p);
   }
   static void destruct_maplEstringcOboolgR(void *p) {
      typedef map<string,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,bool>

namespace ROOT {
   static TClass *maplEstringcOTTreemUgR_Dictionary();
   static void maplEstringcOTTreemUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTTreemUgR(void *p = 0);
   static void *newArray_maplEstringcOTTreemUgR(Long_t size, void *p);
   static void delete_maplEstringcOTTreemUgR(void *p);
   static void deleteArray_maplEstringcOTTreemUgR(void *p);
   static void destruct_maplEstringcOTTreemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TTree*>*)
   {
      map<string,TTree*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TTree*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TTree*>", -2, "map", 783,
                  typeid(map<string,TTree*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOTTreemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TTree*>) );
      instance.SetNew(&new_maplEstringcOTTreemUgR);
      instance.SetNewArray(&newArray_maplEstringcOTTreemUgR);
      instance.SetDelete(&delete_maplEstringcOTTreemUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTTreemUgR);
      instance.SetDestructor(&destruct_maplEstringcOTTreemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TTree*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,TTree*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTTreemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TTree*>*)0x0)->GetClass();
      maplEstringcOTTreemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTTreemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTTreemUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,TTree*> : new map<string,TTree*>;
   }
   static void *newArray_maplEstringcOTTreemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,TTree*>[nElements] : new map<string,TTree*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTTreemUgR(void *p) {
      delete ((map<string,TTree*>*)p);
   }
   static void deleteArray_maplEstringcOTTreemUgR(void *p) {
      delete [] ((map<string,TTree*>*)p);
   }
   static void destruct_maplEstringcOTTreemUgR(void *p) {
      typedef map<string,TTree*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TTree*>

namespace ROOT {
   static TClass *maplEstringcOTChainmUgR_Dictionary();
   static void maplEstringcOTChainmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTChainmUgR(void *p = 0);
   static void *newArray_maplEstringcOTChainmUgR(Long_t size, void *p);
   static void delete_maplEstringcOTChainmUgR(void *p);
   static void deleteArray_maplEstringcOTChainmUgR(void *p);
   static void destruct_maplEstringcOTChainmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TChain*>*)
   {
      map<string,TChain*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TChain*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TChain*>", -2, "map", 783,
                  typeid(map<string,TChain*>), DefineBehavior(ptr, ptr),
                  &maplEstringcOTChainmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TChain*>) );
      instance.SetNew(&new_maplEstringcOTChainmUgR);
      instance.SetNewArray(&newArray_maplEstringcOTChainmUgR);
      instance.SetDelete(&delete_maplEstringcOTChainmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTChainmUgR);
      instance.SetDestructor(&destruct_maplEstringcOTChainmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TChain*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,TChain*>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTChainmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,TChain*>*)0x0)->GetClass();
      maplEstringcOTChainmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTChainmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTChainmUgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,TChain*> : new map<string,TChain*>;
   }
   static void *newArray_maplEstringcOTChainmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<string,TChain*>[nElements] : new map<string,TChain*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTChainmUgR(void *p) {
      delete ((map<string,TChain*>*)p);
   }
   static void deleteArray_maplEstringcOTChainmUgR(void *p) {
      delete [] ((map<string,TChain*>*)p);
   }
   static void destruct_maplEstringcOTChainmUgR(void *p) {
      typedef map<string,TChain*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,TChain*>

namespace ROOT {
   static TClass *maplElarlitecLcLproduct_idcOunsignedsPlonggR_Dictionary();
   static void maplElarlitecLcLproduct_idcOunsignedsPlonggR_TClassManip(TClass*);
   static void *new_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p = 0);
   static void *newArray_maplElarlitecLcLproduct_idcOunsignedsPlonggR(Long_t size, void *p);
   static void delete_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p);
   static void deleteArray_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p);
   static void destruct_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<larlite::product_id,unsigned long>*)
   {
      map<larlite::product_id,unsigned long> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<larlite::product_id,unsigned long>));
      static ::ROOT::TGenericClassInfo 
         instance("map<larlite::product_id,unsigned long>", -2, "map", 783,
                  typeid(map<larlite::product_id,unsigned long>), DefineBehavior(ptr, ptr),
                  &maplElarlitecLcLproduct_idcOunsignedsPlonggR_Dictionary, isa_proxy, 0,
                  sizeof(map<larlite::product_id,unsigned long>) );
      instance.SetNew(&new_maplElarlitecLcLproduct_idcOunsignedsPlonggR);
      instance.SetNewArray(&newArray_maplElarlitecLcLproduct_idcOunsignedsPlonggR);
      instance.SetDelete(&delete_maplElarlitecLcLproduct_idcOunsignedsPlonggR);
      instance.SetDeleteArray(&deleteArray_maplElarlitecLcLproduct_idcOunsignedsPlonggR);
      instance.SetDestructor(&destruct_maplElarlitecLcLproduct_idcOunsignedsPlonggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<larlite::product_id,unsigned long> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<larlite::product_id,unsigned long>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElarlitecLcLproduct_idcOunsignedsPlonggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<larlite::product_id,unsigned long>*)0x0)->GetClass();
      maplElarlitecLcLproduct_idcOunsignedsPlonggR_TClassManip(theClass);
   return theClass;
   }

   static void maplElarlitecLcLproduct_idcOunsignedsPlonggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::product_id,unsigned long> : new map<larlite::product_id,unsigned long>;
   }
   static void *newArray_maplElarlitecLcLproduct_idcOunsignedsPlonggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::product_id,unsigned long>[nElements] : new map<larlite::product_id,unsigned long>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p) {
      delete ((map<larlite::product_id,unsigned long>*)p);
   }
   static void deleteArray_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p) {
      delete [] ((map<larlite::product_id,unsigned long>*)p);
   }
   static void destruct_maplElarlitecLcLproduct_idcOunsignedsPlonggR(void *p) {
      typedef map<larlite::product_id,unsigned long> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<larlite::product_id,unsigned long>

namespace ROOT {
   static TClass *maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR_Dictionary();
   static void maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR_TClassManip(TClass*);
   static void *new_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p = 0);
   static void *newArray_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(Long_t size, void *p);
   static void delete_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p);
   static void deleteArray_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p);
   static void destruct_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<larlite::product_id,map<larlite::product_id,unsigned long> >*)
   {
      map<larlite::product_id,map<larlite::product_id,unsigned long> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<larlite::product_id,map<larlite::product_id,unsigned long> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<larlite::product_id,map<larlite::product_id,unsigned long> >", -2, "map", 783,
                  typeid(map<larlite::product_id,map<larlite::product_id,unsigned long> >), DefineBehavior(ptr, ptr),
                  &maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<larlite::product_id,map<larlite::product_id,unsigned long> >) );
      instance.SetNew(&new_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR);
      instance.SetNewArray(&newArray_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR);
      instance.SetDelete(&delete_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR);
      instance.SetDeleteArray(&deleteArray_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR);
      instance.SetDestructor(&destruct_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<larlite::product_id,map<larlite::product_id,unsigned long> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<larlite::product_id,map<larlite::product_id,unsigned long> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<larlite::product_id,map<larlite::product_id,unsigned long> >*)0x0)->GetClass();
      maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::product_id,map<larlite::product_id,unsigned long> > : new map<larlite::product_id,map<larlite::product_id,unsigned long> >;
   }
   static void *newArray_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::product_id,map<larlite::product_id,unsigned long> >[nElements] : new map<larlite::product_id,map<larlite::product_id,unsigned long> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p) {
      delete ((map<larlite::product_id,map<larlite::product_id,unsigned long> >*)p);
   }
   static void deleteArray_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p) {
      delete [] ((map<larlite::product_id,map<larlite::product_id,unsigned long> >*)p);
   }
   static void destruct_maplElarlitecLcLproduct_idcOmaplElarlitecLcLproduct_idcOunsignedsPlonggRsPgR(void *p) {
      typedef map<larlite::product_id,map<larlite::product_id,unsigned long> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<larlite::product_id,map<larlite::product_id,unsigned long> >

namespace ROOT {
   static TClass *maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR_Dictionary();
   static void maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR_TClassManip(TClass*);
   static void *new_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p = 0);
   static void *newArray_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(Long_t size, void *p);
   static void delete_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p);
   static void deleteArray_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p);
   static void destruct_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<larlite::data::DataType_t,set<string> >*)
   {
      map<larlite::data::DataType_t,set<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<larlite::data::DataType_t,set<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<larlite::data::DataType_t,set<string> >", -2, "map", 783,
                  typeid(map<larlite::data::DataType_t,set<string> >), DefineBehavior(ptr, ptr),
                  &maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<larlite::data::DataType_t,set<string> >) );
      instance.SetNew(&new_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR);
      instance.SetNewArray(&newArray_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR);
      instance.SetDelete(&delete_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR);
      instance.SetDestructor(&destruct_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<larlite::data::DataType_t,set<string> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<larlite::data::DataType_t,set<string> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<larlite::data::DataType_t,set<string> >*)0x0)->GetClass();
      maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::data::DataType_t,set<string> > : new map<larlite::data::DataType_t,set<string> >;
   }
   static void *newArray_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<larlite::data::DataType_t,set<string> >[nElements] : new map<larlite::data::DataType_t,set<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p) {
      delete ((map<larlite::data::DataType_t,set<string> >*)p);
   }
   static void deleteArray_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p) {
      delete [] ((map<larlite::data::DataType_t,set<string> >*)p);
   }
   static void destruct_maplElarlitecLcLdatacLcLDataType_tcOsetlEstringgRsPgR(void *p) {
      typedef map<larlite::data::DataType_t,set<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<larlite::data::DataType_t,set<string> >

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 783,
                  typeid(map<int,int>), DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_libLArLite_DataFormat_Impl() {
    static const char* headers[] = {
"DataFormat-TypeDef.h",
"DataFormatException.h",
"calorimetry.h",
"cluster.h",
"cosmictag.h",
"data_base.h",
"endpoint2d.h",
"event_ass.h",
"fifo.h",
"flashmatch.h",
"gtruth.h",
"hit.h",
"larlite_dataformat_utils.h",
"mcflux.h",
"mcnu.h",
"mcpart.h",
"mcshower.h",
"mctrack.h",
"mctrajectory.h",
"mctree.h",
"mctruth.h",
"minos.h",
"opflash.h",
"ophit.h",
"partid.h",
"pcaxis.h",
"pfpart.h",
"potsummary.h",
"rawdigit.h",
"seed.h",
"shower.h",
"simch.h",
"spacepoint.h",
"sparse_vector.h",
"storage_manager.h",
"track.h",
"treenode.h",
"trigger.h",
"user_info.h",
"vertex.h",
"wire.h",
0
    };
    static const char* includePaths[] = {
"/Users/niki/play0/larlite/core",
"/Applications/BasicSoftware/v6_04_00/include",
"/Users/niki/play0/larlite/core/DataFormat/",
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
namespace std{inline namespace __1{template <class _T1, class _T2> struct __attribute__((annotate("$clingAutoload$string")))  pair;
}}
namespace std{inline namespace __1{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}}
namespace larlite{namespace data{enum  __attribute__((annotate("$clingAutoload$calorimetry.h 0"))) DataType_t : unsigned int;}}
class __attribute__((annotate("$clingAutoload$calorimetry.h")))  TVector3;
template <class Element> class __attribute__((annotate("$clingAutoload$seed.h")))  TMatrixT;

class __attribute__((annotate("$clingAutoload$gtruth.h")))  TLorentzVector;
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  product_id;}
namespace larlite{class __attribute__((annotate("$clingAutoload$DataFormatException.h")))  DataFormatException;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  data_base;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  output_base;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  run_base;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  subrun_base;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  event_base;}
namespace larlite{template <class T> class __attribute__((annotate("$clingAutoload$sparse_vector.h")))  sparse_data;
}
namespace larlite{template <class T> class __attribute__((annotate("$clingAutoload$sparse_vector.h")))  sparse_vector;
}
namespace larlite{class __attribute__((annotate("$clingAutoload$potsummary.h")))  potsummary;}
namespace larlite{class __attribute__((annotate("$clingAutoload$rawdigit.h")))  rawdigit;}
namespace larlite{class __attribute__((annotate("$clingAutoload$rawdigit.h")))  event_rawdigit;}
namespace larlite{class __attribute__((annotate("$clingAutoload$wire.h")))  wire;}
namespace larlite{class __attribute__((annotate("$clingAutoload$wire.h")))  event_wire;}
namespace larlite{class __attribute__((annotate("$clingAutoload$hit.h")))  hit;}
namespace larlite{class __attribute__((annotate("$clingAutoload$hit.h")))  event_hit;}
namespace larlite{class __attribute__((annotate("$clingAutoload$ophit.h")))  ophit;}
namespace larlite{class __attribute__((annotate("$clingAutoload$ophit.h")))  event_ophit;}
namespace larlite{class __attribute__((annotate("$clingAutoload$opflash.h")))  opflash;}
namespace larlite{class __attribute__((annotate("$clingAutoload$opflash.h")))  event_opflash;}
namespace larlite{class __attribute__((annotate("$clingAutoload$cosmictag.h")))  cosmictag;}
namespace larlite{class __attribute__((annotate("$clingAutoload$cosmictag.h")))  event_cosmictag;}
namespace larlite{class __attribute__((annotate("$clingAutoload$cluster.h")))  cluster;}
namespace larlite{class __attribute__((annotate("$clingAutoload$cluster.h")))  event_cluster;}
namespace larlite{class __attribute__((annotate("$clingAutoload$endpoint2d.h")))  endpoint2d;}
namespace larlite{class __attribute__((annotate("$clingAutoload$endpoint2d.h")))  event_endpoint2d;}
namespace larlite{class __attribute__((annotate("$clingAutoload$seed.h")))  seed;}
namespace larlite{class __attribute__((annotate("$clingAutoload$seed.h")))  event_seed;}
namespace larlite{class __attribute__((annotate("$clingAutoload$seed.h")))  spacepoint;}
namespace larlite{class __attribute__((annotate("$clingAutoload$seed.h")))  event_spacepoint;}
namespace larlite{class __attribute__((annotate("$clingAutoload$track.h")))  track;}
namespace larlite{class __attribute__((annotate("$clingAutoload$track.h")))  event_track;}
namespace larlite{class __attribute__((annotate("$clingAutoload$shower.h")))  shower;}
namespace larlite{class __attribute__((annotate("$clingAutoload$shower.h")))  event_shower;}
namespace larlite{class __attribute__((annotate("$clingAutoload$vertex.h")))  vertex;}
namespace larlite{class __attribute__((annotate("$clingAutoload$vertex.h")))  event_vertex;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  calorimetry;}
namespace larlite{class __attribute__((annotate("$clingAutoload$calorimetry.h")))  event_calorimetry;}
namespace larlite{class __attribute__((annotate("$clingAutoload$pfpart.h")))  pfpart;}
namespace larlite{class __attribute__((annotate("$clingAutoload$pfpart.h")))  event_pfpart;}
namespace larlite{class __attribute__((annotate("$clingAutoload$partid.h")))  partid;}
namespace larlite{class __attribute__((annotate("$clingAutoload$partid.h")))  event_partid;}
namespace larlite{class __attribute__((annotate("$clingAutoload$user_info.h")))  user_info;}
namespace larlite{class __attribute__((annotate("$clingAutoload$user_info.h")))  event_user;}
namespace larlite{class __attribute__((annotate("$clingAutoload$gtruth.h")))  gtruth;}
namespace larlite{class __attribute__((annotate("$clingAutoload$gtruth.h")))  event_gtruth;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcshower.h")))  mcshower;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcshower.h")))  event_mcshower;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcnu.h")))  mcpart;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcnu.h")))  event_mcpart;}
class __attribute__((annotate("$clingAutoload$mctree.h")))  treenode;
namespace larlite{class __attribute__((annotate("$clingAutoload$mctree.h")))  mctree;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mctree.h")))  event_mctree;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcflux.h")))  mcflux;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcflux.h")))  event_mcflux;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcnu.h")))  mcstep;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcnu.h")))  mctrajectory;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mctrack.h")))  mctrack;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mctrack.h")))  event_mctrack;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mcnu.h")))  mcnu;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mctruth.h")))  mctruth;}
namespace larlite{class __attribute__((annotate("$clingAutoload$mctruth.h")))  event_mctruth;}
namespace larlite{class __attribute__((annotate("$clingAutoload$simch.h")))  ide;}
namespace larlite{class __attribute__((annotate("$clingAutoload$simch.h")))  simch;}
namespace std{inline namespace __1{template <class _Tp> struct __attribute__((annotate("$clingAutoload$string")))  less;
}}
namespace larlite{class __attribute__((annotate("$clingAutoload$simch.h")))  event_simch;}
namespace larlite{class __attribute__((annotate("$clingAutoload$trigger.h")))  trigger;}
namespace larlite{class __attribute__((annotate("$clingAutoload$minos.h")))  minos;}
namespace larlite{class __attribute__((annotate("$clingAutoload$minos.h")))  event_minos;}
namespace larlite{class __attribute__((annotate("$clingAutoload$pcaxis.h")))  pcaxis;}
namespace larlite{class __attribute__((annotate("$clingAutoload$pcaxis.h")))  event_pcaxis;}
namespace larlite{class __attribute__((annotate("$clingAutoload$flashmatch.h")))  flashmatch;}
namespace larlite{class __attribute__((annotate("$clingAutoload$flashmatch.h")))  event_flashmatch;}
namespace larlite{class __attribute__((annotate("$clingAutoload$event_ass.h")))  event_ass;}
namespace larlite{class __attribute__((annotate("$clingAutoload$fifo.h")))  fifo;}
namespace larlite{class __attribute__((annotate("$clingAutoload$fifo.h")))  event_fifo;}
namespace larlite{class __attribute__((annotate("$clingAutoload$storage_manager.h")))  storage_manager;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "DataFormat-TypeDef.h"
#include "DataFormatException.h"
#include "calorimetry.h"
#include "cluster.h"
#include "cosmictag.h"
#include "data_base.h"
#include "endpoint2d.h"
#include "event_ass.h"
#include "fifo.h"
#include "flashmatch.h"
#include "gtruth.h"
#include "hit.h"
#include "larlite_dataformat_utils.h"
#include "mcflux.h"
#include "mcnu.h"
#include "mcpart.h"
#include "mcshower.h"
#include "mctrack.h"
#include "mctrajectory.h"
#include "mctree.h"
#include "mctruth.h"
#include "minos.h"
#include "opflash.h"
#include "ophit.h"
#include "partid.h"
#include "pcaxis.h"
#include "pfpart.h"
#include "potsummary.h"
#include "rawdigit.h"
#include "seed.h"
#include "shower.h"
#include "simch.h"
#include "spacepoint.h"
#include "sparse_vector.h"
#include "storage_manager.h"
#include "track.h"
#include "treenode.h"
#include "trigger.h"
#include "user_info.h"
#include "vertex.h"
#include "wire.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"larlite::AssSet_t", payloadCode, "@",
"larlite::DataFormatException", payloadCode, "@",
"larlite::calorimetry", payloadCode, "@",
"larlite::cluster", payloadCode, "@",
"larlite::cosmictag", payloadCode, "@",
"larlite::data_base", payloadCode, "@",
"larlite::endpoint2d", payloadCode, "@",
"larlite::event_ass", payloadCode, "@",
"larlite::event_base", payloadCode, "@",
"larlite::event_calorimetry", payloadCode, "@",
"larlite::event_cluster", payloadCode, "@",
"larlite::event_cosmictag", payloadCode, "@",
"larlite::event_endpoint2d", payloadCode, "@",
"larlite::event_fifo", payloadCode, "@",
"larlite::event_flashmatch", payloadCode, "@",
"larlite::event_gtruth", payloadCode, "@",
"larlite::event_hit", payloadCode, "@",
"larlite::event_mcflux", payloadCode, "@",
"larlite::event_mcpart", payloadCode, "@",
"larlite::event_mcshower", payloadCode, "@",
"larlite::event_mctrack", payloadCode, "@",
"larlite::event_mctree", payloadCode, "@",
"larlite::event_mctruth", payloadCode, "@",
"larlite::event_minos", payloadCode, "@",
"larlite::event_opflash", payloadCode, "@",
"larlite::event_ophit", payloadCode, "@",
"larlite::event_partid", payloadCode, "@",
"larlite::event_pcaxis", payloadCode, "@",
"larlite::event_pfpart", payloadCode, "@",
"larlite::event_rawdigit", payloadCode, "@",
"larlite::event_seed", payloadCode, "@",
"larlite::event_shower", payloadCode, "@",
"larlite::event_simch", payloadCode, "@",
"larlite::event_spacepoint", payloadCode, "@",
"larlite::event_track", payloadCode, "@",
"larlite::event_user", payloadCode, "@",
"larlite::event_vertex", payloadCode, "@",
"larlite::event_wire", payloadCode, "@",
"larlite::fifo", payloadCode, "@",
"larlite::flashmatch", payloadCode, "@",
"larlite::gtruth", payloadCode, "@",
"larlite::hit", payloadCode, "@",
"larlite::ide", payloadCode, "@",
"larlite::mcflux", payloadCode, "@",
"larlite::mcnu", payloadCode, "@",
"larlite::mcpart", payloadCode, "@",
"larlite::mcshower", payloadCode, "@",
"larlite::mcstep", payloadCode, "@",
"larlite::mctrack", payloadCode, "@",
"larlite::mctrajectory", payloadCode, "@",
"larlite::mctree", payloadCode, "@",
"larlite::mctruth", payloadCode, "@",
"larlite::minos", payloadCode, "@",
"larlite::opflash", payloadCode, "@",
"larlite::ophit", payloadCode, "@",
"larlite::output_base", payloadCode, "@",
"larlite::partid", payloadCode, "@",
"larlite::pcaxis", payloadCode, "@",
"larlite::pfpart", payloadCode, "@",
"larlite::potsummary", payloadCode, "@",
"larlite::product_id", payloadCode, "@",
"larlite::rawdigit", payloadCode, "@",
"larlite::run_base", payloadCode, "@",
"larlite::seed", payloadCode, "@",
"larlite::shower", payloadCode, "@",
"larlite::simch", payloadCode, "@",
"larlite::spacepoint", payloadCode, "@",
"larlite::sparse_data<float>", payloadCode, "@",
"larlite::sparse_vector<float>", payloadCode, "@",
"larlite::storage_manager", payloadCode, "@",
"larlite::subrun_base", payloadCode, "@",
"larlite::track", payloadCode, "@",
"larlite::trigger", payloadCode, "@",
"larlite::user_info", payloadCode, "@",
"larlite::vertex", payloadCode, "@",
"larlite::wire", payloadCode, "@",
"map<UShort_t,larlite::simch>", payloadCode, "@",
"map<larlite::data::DataType_t,set<string> >", payloadCode, "@",
"map<larlite::data::DataType_t,std::set<string> >", payloadCode, "@",
"map<string,bool>", payloadCode, "@",
"map<string,std::vector<bool> >", payloadCode, "@",
"map<string,std::vector<double> >", payloadCode, "@",
"map<string,std::vector<int> >", payloadCode, "@",
"map<string,std::vector<string> >", payloadCode, "@",
"map<string,string>", payloadCode, "@",
"map<string,vector<bool> >", payloadCode, "@",
"map<string,vector<double> >", payloadCode, "@",
"map<string,vector<int> >", payloadCode, "@",
"map<string,vector<string> >", payloadCode, "@",
"map<unsigned short,larlite::simch>", payloadCode, "@",
"pair<larlite::data::DataType_t,string>", payloadCode, "@",
"pair<larlite::product_id,larlite::product_id>", payloadCode, "@",
"pair<size_t,size_t>", payloadCode, "@",
"pair<string,bool>", payloadCode, "@",
"pair<string,string>", payloadCode, "@",
"pair<unsigned long,unsigned long>", payloadCode, "@",
"pair<unsigned short,string>", payloadCode, "@",
"treenode", payloadCode, "@",
"vector<TLorentzVector>", payloadCode, "@",
"vector<TMatrixD>", payloadCode, "@",
"vector<TMatrixT<double> >", payloadCode, "@",
"vector<TVector3>", payloadCode, "@",
"vector<larlite::AssUnit_t>", payloadCode, "@",
"vector<larlite::calorimetry>", payloadCode, "@",
"vector<larlite::cluster>", payloadCode, "@",
"vector<larlite::cosmictag>", payloadCode, "@",
"vector<larlite::endpoint2d>", payloadCode, "@",
"vector<larlite::fifo>", payloadCode, "@",
"vector<larlite::flashmatch>", payloadCode, "@",
"vector<larlite::gtruth>", payloadCode, "@",
"vector<larlite::hit>", payloadCode, "@",
"vector<larlite::ide>", payloadCode, "@",
"vector<larlite::mcflux>", payloadCode, "@",
"vector<larlite::mcnu>", payloadCode, "@",
"vector<larlite::mcpart>", payloadCode, "@",
"vector<larlite::mcshower>", payloadCode, "@",
"vector<larlite::mcstep>", payloadCode, "@",
"vector<larlite::mctrack>", payloadCode, "@",
"vector<larlite::mctree>", payloadCode, "@",
"vector<larlite::mctruth>", payloadCode, "@",
"vector<larlite::minos>", payloadCode, "@",
"vector<larlite::opflash>", payloadCode, "@",
"vector<larlite::ophit>", payloadCode, "@",
"vector<larlite::partid>", payloadCode, "@",
"vector<larlite::pcaxis>", payloadCode, "@",
"vector<larlite::pfpart>", payloadCode, "@",
"vector<larlite::product_id>", payloadCode, "@",
"vector<larlite::rawdigit>", payloadCode, "@",
"vector<larlite::seed>", payloadCode, "@",
"vector<larlite::shower>", payloadCode, "@",
"vector<larlite::simch>", payloadCode, "@",
"vector<larlite::spacepoint>", payloadCode, "@",
"vector<larlite::sparse_data<float> >", payloadCode, "@",
"vector<larlite::track>", payloadCode, "@",
"vector<larlite::user_info>", payloadCode, "@",
"vector<larlite::vertex>", payloadCode, "@",
"vector<larlite::wire>", payloadCode, "@",
"vector<pair<larlite::product_id,larlite::product_id> >", payloadCode, "@",
"vector<std::pair<larlite::product_id,larlite::product_id> >", payloadCode, "@",
"vector<std::vector<float> >", payloadCode, "@",
"vector<treenode>", payloadCode, "@",
"vector<vector<float> >", payloadCode, "@",
"vector<vector<unsigned int> >", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLArLite_DataFormat",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLArLite_DataFormat_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLArLite_DataFormat_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLArLite_DataFormat() {
  TriggerDictionaryInitialization_libLArLite_DataFormat_Impl();
}
