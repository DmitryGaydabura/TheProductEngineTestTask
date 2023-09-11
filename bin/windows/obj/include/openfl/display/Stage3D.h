// Generated by Haxe 4.3.2
#ifndef INCLUDED_openfl_display_Stage3D
#define INCLUDED_openfl_display_Stage3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,ObjectVector)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,display,Stage3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Stage3D_obj : public  ::openfl::events::EventDispatcher_obj
{
	public:
		typedef  ::openfl::events::EventDispatcher_obj super;
		typedef Stage3D_obj OBJ_;
		Stage3D_obj();

	public:
		enum { _hx_ClassId = 0x13273a9d };

		void __construct( ::openfl::display::Stage stage);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Stage3D")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Stage3D"); }
		static ::hx::ObjectPtr< Stage3D_obj > __new( ::openfl::display::Stage stage);
		static ::hx::ObjectPtr< Stage3D_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Stage stage);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Stage3D_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Stage3D",cf,6a,1b,fb); }

		static bool _hx___active;
		 ::openfl::display3D::Context3D context3D;
		bool visible;
		bool _hx___contextLost;
		bool _hx___contextRequested;
		int _hx___height;
		 ::openfl::display3D::IndexBuffer3D _hx___indexBuffer;
		 ::openfl::geom::Matrix3D _hx___projectionTransform;
		 ::openfl::geom::Matrix3D _hx___renderTransform;
		 ::openfl::display::Stage _hx___stage;
		 ::openfl::display3D::VertexBuffer3D _hx___vertexBuffer;
		int _hx___width;
		Float _hx___x;
		Float _hx___y;
		void requestContext3D( ::Dynamic context3DRenderMode, ::Dynamic profile);
		::Dynamic requestContext3D_dyn();

		void requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles);
		::Dynamic requestContext3DMatchingProfiles_dyn();

		void _hx___createContext();
		::Dynamic _hx___createContext_dyn();

		void _hx___dispatchError();
		::Dynamic _hx___dispatchError_dyn();

		void _hx___dispatchCreate();
		::Dynamic _hx___dispatchCreate_dyn();

		void _hx___lostContext();
		::Dynamic _hx___lostContext_dyn();

		void _hx___resize(int width,int height);
		::Dynamic _hx___resize_dyn();

		void _hx___restoreContext();
		::Dynamic _hx___restoreContext_dyn();

		Float get_x();
		::Dynamic get_x_dyn();

		Float set_x(Float value);
		::Dynamic set_x_dyn();

		Float get_y();
		::Dynamic get_y_dyn();

		Float set_y(Float value);
		::Dynamic set_y_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_Stage3D */ 
