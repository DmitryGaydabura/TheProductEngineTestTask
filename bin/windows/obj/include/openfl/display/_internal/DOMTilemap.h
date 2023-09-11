// Generated by Haxe 4.3.2
#ifndef INCLUDED_openfl_display__internal_DOMTilemap
#define INCLUDED_openfl_display__internal_DOMTilemap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,DOMRenderer)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Tilemap)
HX_DECLARE_CLASS3(openfl,display,_internal,DOMTilemap)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES DOMTilemap_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DOMTilemap_obj OBJ_;
		DOMTilemap_obj();

	public:
		enum { _hx_ClassId = 0x5a774196 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.DOMTilemap")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.DOMTilemap"); }

		inline static ::hx::ObjectPtr< DOMTilemap_obj > __new() {
			::hx::ObjectPtr< DOMTilemap_obj > __this = new DOMTilemap_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< DOMTilemap_obj > __alloc(::hx::Ctx *_hx_ctx) {
			DOMTilemap_obj *__this = (DOMTilemap_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DOMTilemap_obj), false, "openfl.display._internal.DOMTilemap"));
			*(void **)__this = DOMTilemap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DOMTilemap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DOMTilemap",ec,a9,53,73); }

		static void __boot();
		static  ::Dynamic __meta__;
		static void clear( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic clear_dyn();

		static void render( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic render_dyn();

		static void renderDrawable( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableClear( ::openfl::display::Tilemap tilemap, ::openfl::display::DOMRenderer renderer);
		static ::Dynamic renderDrawableClear_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_DOMTilemap */ 