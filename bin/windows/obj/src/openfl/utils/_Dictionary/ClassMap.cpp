// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif
#ifndef INCLUDED_openfl_utils__Dictionary_ClassMap
#include <openfl/utils/_Dictionary/ClassMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e4d60601e770703e_211_new,"openfl.utils._Dictionary.ClassMap","new",0xf688c28a,"openfl.utils._Dictionary.ClassMap.new","openfl/utils/Dictionary.hx",211,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_218_clear,"openfl.utils._Dictionary.ClassMap","clear",0xeb50c237,"openfl.utils._Dictionary.ClassMap.clear","openfl/utils/Dictionary.hx",218,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_226_copy,"openfl.utils._Dictionary.ClassMap","copy",0xb9e3ae4b,"openfl.utils._Dictionary.ClassMap.copy","openfl/utils/Dictionary.hx",226,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_236_exists,"openfl.utils._Dictionary.ClassMap","exists",0xb39161f2,"openfl.utils._Dictionary.ClassMap.exists","openfl/utils/Dictionary.hx",236,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_241_get,"openfl.utils._Dictionary.ClassMap","get",0xf68372c0,"openfl.utils._Dictionary.ClassMap.get","openfl/utils/Dictionary.hx",241,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_247_keyValueIterator,"openfl.utils._Dictionary.ClassMap","keyValueIterator",0x4d7a48f6,"openfl.utils._Dictionary.ClassMap.keyValueIterator","openfl/utils/Dictionary.hx",247,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_253_keys,"openfl.utils._Dictionary.ClassMap","keys",0xbf25d48a,"openfl.utils._Dictionary.ClassMap.keys","openfl/utils/Dictionary.hx",253,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_258_iterator,"openfl.utils._Dictionary.ClassMap","iterator",0xc9353f84,"openfl.utils._Dictionary.ClassMap.iterator","openfl/utils/Dictionary.hx",258,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_262_remove,"openfl.utils._Dictionary.ClassMap","remove",0xf839e05a,"openfl.utils._Dictionary.ClassMap.remove","openfl/utils/Dictionary.hx",262,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_268_set,"openfl.utils._Dictionary.ClassMap","set",0xf68c8dcc,"openfl.utils._Dictionary.ClassMap.set","openfl/utils/Dictionary.hx",268,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_277_toString,"openfl.utils._Dictionary.ClassMap","toString",0x6e09c642,"openfl.utils._Dictionary.ClassMap.toString","openfl/utils/Dictionary.hx",277,0x5979b1eb)
HX_LOCAL_STACK_FRAME(_hx_pos_e4d60601e770703e_205_boot,"openfl.utils._Dictionary.ClassMap","boot",0xb93a76c8,"openfl.utils._Dictionary.ClassMap.boot","openfl/utils/Dictionary.hx",205,0x5979b1eb)
namespace openfl{
namespace utils{
namespace _Dictionary{

void ClassMap_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e4d60601e770703e_211_new)
HXLINE( 212)		this->types =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 213)		this->values =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic ClassMap_obj::__CreateEmpty() { return new ClassMap_obj; }

void *ClassMap_obj::_hx_vtable = 0;

Dynamic ClassMap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClassMap_obj > _hx_result = new ClassMap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClassMap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x33486378;
}

static ::haxe::IMap_obj _hx_openfl_utils__Dictionary_ClassMap__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::ClassMap_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::openfl::utils::_Dictionary::ClassMap_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::ClassMap_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::openfl::utils::_Dictionary::ClassMap_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::ClassMap_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::ClassMap_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::openfl::utils::_Dictionary::ClassMap_obj::keyValueIterator,
};

void ClassMap_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *ClassMap_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_openfl_utils__Dictionary_ClassMap__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void ClassMap_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_218_clear)
HXLINE( 219)		this->types->clear();
HXLINE( 220)		this->values->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassMap_obj,clear,(void))

 ::openfl::utils::_Dictionary::ClassMap ClassMap_obj::copy(){
            	HX_GC_STACKFRAME(&_hx_pos_e4d60601e770703e_226_copy)
HXLINE( 227)		 ::openfl::utils::_Dictionary::ClassMap copied =  ::openfl::utils::_Dictionary::ClassMap_obj::__alloc( HX_CTX );
HXLINE( 228)		{
HXLINE( 228)			 ::Dynamic key = this->keys();
HXDLIN( 228)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 228)				 ::Dynamic key1 = key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)();
HXLINE( 229)				copied->set(key1,this->get(key1));
            			}
            		}
HXLINE( 230)		return copied;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassMap_obj,copy,return )

bool ClassMap_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_236_exists)
HXDLIN( 236)		::Dynamic this1 = this->types;
HXDLIN( 236)		return ( ( ::haxe::ds::StringMap)(this1) )->exists(::Type_obj::getClassName(key));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassMap_obj,exists,return )

 ::Dynamic ClassMap_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_241_get)
HXDLIN( 241)		::Dynamic this1 = this->values;
HXDLIN( 241)		return ( ( ::haxe::ds::StringMap)(this1) )->get(::Type_obj::getClassName(key));
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassMap_obj,get,return )

 ::Dynamic ClassMap_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_e4d60601e770703e_247_keyValueIterator)
HXDLIN( 247)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassMap_obj,keyValueIterator,return )

 ::Dynamic ClassMap_obj::keys(){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_253_keys)
HXDLIN( 253)		return this->types->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassMap_obj,keys,return )

 ::Dynamic ClassMap_obj::iterator(){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_258_iterator)
HXDLIN( 258)		return this->values->iterator();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassMap_obj,iterator,return )

bool ClassMap_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_262_remove)
HXLINE( 263)		::String name = ::Type_obj::getClassName(key);
HXLINE( 264)		if (!(this->types->remove(name))) {
HXLINE( 264)			return this->values->remove(name);
            		}
            		else {
HXLINE( 264)			return true;
            		}
HXDLIN( 264)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ClassMap_obj,remove,return )

void ClassMap_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_268_set)
HXLINE( 269)		::String name = ::Type_obj::getClassName(key);
HXLINE( 271)		this->types->set(name,key);
HXLINE( 272)		this->values->set(name,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ClassMap_obj,set,(void))

::String ClassMap_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_277_toString)
HXDLIN( 277)		return this->values->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClassMap_obj,toString,return )


::hx::ObjectPtr< ClassMap_obj > ClassMap_obj::__new() {
	::hx::ObjectPtr< ClassMap_obj > __this = new ClassMap_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ClassMap_obj > ClassMap_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ClassMap_obj *__this = (ClassMap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ClassMap_obj), true, "openfl.utils._Dictionary.ClassMap"));
	*(void **)__this = ClassMap_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ClassMap_obj::ClassMap_obj()
{
}

void ClassMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ClassMap);
	HX_MARK_MEMBER_NAME(types,"types");
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void ClassMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(types,"types");
	HX_VISIT_MEMBER_NAME(values,"values");
}

::hx::Val ClassMap_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return ::hx::Val( copy_dyn() ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { return ::hx::Val( types ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ClassMap_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"types") ) { types=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClassMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("types",79,70,cb,1a));
	outFields->push(HX_("values",e2,03,b7,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ClassMap_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ClassMap_obj,types),HX_("types",79,70,cb,1a)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(ClassMap_obj,values),HX_("values",e2,03,b7,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ClassMap_obj_sStaticStorageInfo = 0;
#endif

static ::String ClassMap_obj_sMemberFields[] = {
	HX_("types",79,70,cb,1a),
	HX_("values",e2,03,b7,4f),
	HX_("clear",8d,71,5b,48),
	HX_("copy",b5,bb,c4,41),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("keys",f4,e1,06,47),
	HX_("iterator",ee,49,9a,93),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("toString",ac,d0,6e,38),
	::String(null()) };

::hx::Class ClassMap_obj::__mClass;

void ClassMap_obj::__register()
{
	ClassMap_obj _hx_dummy;
	ClassMap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils._Dictionary.ClassMap",98,75,06,f6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ClassMap_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ClassMap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClassMap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClassMap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClassMap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e4d60601e770703e_205_boot)
HXDLIN( 205)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace utils
} // end namespace _Dictionary
