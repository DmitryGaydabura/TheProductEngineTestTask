// Generated by Haxe 4.3.2
#ifndef INCLUDED_lime_graphics_opengl_ext_OES_compressed_ETC1_RGB8_texture
#define INCLUDED_lime_graphics_opengl_ext_OES_compressed_ETC1_RGB8_texture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_d9cc39cd2e451b00_6_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,OES_compressed_ETC1_RGB8_texture)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES OES_compressed_ETC1_RGB8_texture_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef OES_compressed_ETC1_RGB8_texture_obj OBJ_;
		OES_compressed_ETC1_RGB8_texture_obj();

	public:
		enum { _hx_ClassId = 0x7b517083 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture"); }

		inline static ::hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > __new() {
			::hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > __this = new OES_compressed_ETC1_RGB8_texture_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< OES_compressed_ETC1_RGB8_texture_obj > __alloc(::hx::Ctx *_hx_ctx) {
			OES_compressed_ETC1_RGB8_texture_obj *__this = (OES_compressed_ETC1_RGB8_texture_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OES_compressed_ETC1_RGB8_texture_obj), false, "lime.graphics.opengl.ext.OES_compressed_ETC1_RGB8_texture"));
			*(void **)__this = OES_compressed_ETC1_RGB8_texture_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d9cc39cd2e451b00_6_new)
HXDLIN(   6)		( ( ::lime::graphics::opengl::ext::OES_compressed_ETC1_RGB8_texture)(__this) )->ETC1_RGB8_OES = 36196;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~OES_compressed_ETC1_RGB8_texture_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("OES_compressed_ETC1_RGB8_texture",cd,f1,a0,b8); }

		int ETC1_RGB8_OES;
};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_OES_compressed_ETC1_RGB8_texture */ 
