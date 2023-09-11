// Generated by Haxe 4.3.2
#ifndef INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_
#define INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DBlendFactor,Context3DBlendFactor_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DBlendFactor{


class HXCPP_CLASS_ATTRIBUTES Context3DBlendFactor_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DBlendFactor_Impl__obj OBJ_;
		Context3DBlendFactor_Impl__obj();

	public:
		enum { _hx_ClassId = 0x5aaca684 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_"); }

		inline static ::hx::ObjectPtr< Context3DBlendFactor_Impl__obj > __new() {
			::hx::ObjectPtr< Context3DBlendFactor_Impl__obj > __this = new Context3DBlendFactor_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DBlendFactor_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DBlendFactor_Impl__obj *__this = (Context3DBlendFactor_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DBlendFactor_Impl__obj), false, "openfl.display3D._Context3DBlendFactor.Context3DBlendFactor_Impl_"));
			*(void **)__this = Context3DBlendFactor_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DBlendFactor_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DBlendFactor_Impl_",40,80,2d,4a); }

		static void __boot();
		static  ::Dynamic DESTINATION_ALPHA;
		static  ::Dynamic DESTINATION_COLOR;
		static  ::Dynamic ONE;
		static  ::Dynamic ONE_MINUS_DESTINATION_ALPHA;
		static  ::Dynamic ONE_MINUS_DESTINATION_COLOR;
		static  ::Dynamic ONE_MINUS_SOURCE_ALPHA;
		static  ::Dynamic ONE_MINUS_SOURCE_COLOR;
		static  ::Dynamic SOURCE_ALPHA;
		static  ::Dynamic SOURCE_COLOR;
		static  ::Dynamic ZERO;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DBlendFactor

#endif /* INCLUDED_openfl_display3D__Context3DBlendFactor_Context3DBlendFactor_Impl_ */ 
