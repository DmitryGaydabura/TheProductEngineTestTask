// Generated by Haxe 4.3.2
#ifndef INCLUDED_TabModel
#define INCLUDED_TabModel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f1a86decdb599b7d_8_new)
HX_DECLARE_CLASS0(TabModel)



class HXCPP_CLASS_ATTRIBUTES TabModel_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef TabModel_obj OBJ_;
		TabModel_obj();

	public:
		enum { _hx_ClassId = 0x07213958 };

		void __construct(::String title,::String content);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="TabModel")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"TabModel"); }

		inline static ::hx::ObjectPtr< TabModel_obj > __new(::String title,::String content) {
			::hx::ObjectPtr< TabModel_obj > __this = new TabModel_obj();
			__this->__construct(title,content);
			return __this;
		}

		inline static ::hx::ObjectPtr< TabModel_obj > __alloc(::hx::Ctx *_hx_ctx,::String title,::String content) {
			TabModel_obj *__this = (TabModel_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabModel_obj), true, "TabModel"));
			*(void **)__this = TabModel_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f1a86decdb599b7d_8_new)
HXLINE(   9)		( ( ::TabModel)(__this) )->title = title;
HXLINE(  10)		( ( ::TabModel)(__this) )->content = content;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~TabModel_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("TabModel",34,61,ae,54); }

		::String title;
		::String content;
};


#endif /* INCLUDED_TabModel */ 
