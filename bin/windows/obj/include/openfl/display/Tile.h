// Generated by Haxe 4.3.2
#ifndef INCLUDED_openfl_display_Tile
#define INCLUDED_openfl_display_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,ITileContainer)
HX_DECLARE_CLASS2(openfl,display,Shader)
HX_DECLARE_CLASS2(openfl,display,Tile)
HX_DECLARE_CLASS2(openfl,display,TileContainer)
HX_DECLARE_CLASS2(openfl,display,Tileset)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES Tile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();

	public:
		enum { _hx_ClassId = 0x2c045ac0 };

		void __construct(::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_originX,::hx::Null< Float >  __o_originY);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.Tile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.display.Tile"); }
		static ::hx::ObjectPtr< Tile_obj > __new(::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_originX,::hx::Null< Float >  __o_originY);
		static ::hx::ObjectPtr< Tile_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_id,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y,::hx::Null< Float >  __o_scaleX,::hx::Null< Float >  __o_scaleY,::hx::Null< Float >  __o_rotation,::hx::Null< Float >  __o_originX,::hx::Null< Float >  __o_originY);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Tile",4e,f7,d5,37); }

		static void __boot();
		static  ::Dynamic __meta__;
		 ::Dynamic data;
		 ::openfl::display::TileContainer parent;
		Float _hx___alpha;
		 ::Dynamic _hx___blendMode;
		 ::openfl::geom::ColorTransform _hx___colorTransform;
		bool _hx___dirty;
		int _hx___id;
		int __length;
		 ::openfl::geom::Matrix _hx___matrix;
		Float _hx___originX;
		Float _hx___originY;
		 ::openfl::geom::Rectangle _hx___rect;
		 ::Dynamic _hx___rotation;
		Float _hx___rotationCosine;
		Float _hx___rotationSine;
		 ::Dynamic _hx___scaleX;
		 ::Dynamic _hx___scaleY;
		 ::openfl::display::Shader _hx___shader;
		 ::openfl::display::Tileset _hx___tileset;
		bool _hx___visible;
		virtual  ::openfl::display::Tile clone();
		::Dynamic clone_dyn();

		virtual  ::openfl::geom::Rectangle getBounds( ::openfl::display::Tile targetCoordinateSpace);
		::Dynamic getBounds_dyn();

		void _hx___getBounds( ::openfl::geom::Rectangle result, ::openfl::geom::Matrix matrix);
		::Dynamic _hx___getBounds_dyn();

		bool hitTestTile( ::openfl::display::Tile obj);
		::Dynamic hitTestTile_dyn();

		void invalidate();
		::Dynamic invalidate_dyn();

		void _hx___findTileRect( ::openfl::geom::Rectangle result);
		::Dynamic _hx___findTileRect_dyn();

		 ::openfl::display::Tileset _hx___findTileset();
		::Dynamic _hx___findTileset_dyn();

		 ::openfl::geom::Matrix _hx___getWorldTransform();
		::Dynamic _hx___getWorldTransform_dyn();

		void _hx___setRenderDirty();
		::Dynamic _hx___setRenderDirty_dyn();

		Float get_alpha();
		::Dynamic get_alpha_dyn();

		Float set_alpha(Float value);
		::Dynamic set_alpha_dyn();

		 ::Dynamic get_blendMode();
		::Dynamic get_blendMode_dyn();

		 ::Dynamic set_blendMode( ::Dynamic value);
		::Dynamic set_blendMode_dyn();

		 ::openfl::geom::ColorTransform get_colorTransform();
		::Dynamic get_colorTransform_dyn();

		 ::openfl::geom::ColorTransform set_colorTransform( ::openfl::geom::ColorTransform value);
		::Dynamic set_colorTransform_dyn();

		virtual Float get_height();
		::Dynamic get_height_dyn();

		virtual Float set_height(Float value);
		::Dynamic set_height_dyn();

		int get_id();
		::Dynamic get_id_dyn();

		int set_id(int value);
		::Dynamic set_id_dyn();

		 ::openfl::geom::Matrix get_matrix();
		::Dynamic get_matrix_dyn();

		 ::openfl::geom::Matrix set_matrix( ::openfl::geom::Matrix value);
		::Dynamic set_matrix_dyn();

		Float get_originX();
		::Dynamic get_originX_dyn();

		Float set_originX(Float value);
		::Dynamic set_originX_dyn();

		Float get_originY();
		::Dynamic get_originY_dyn();

		Float set_originY(Float value);
		::Dynamic set_originY_dyn();

		 ::openfl::geom::Rectangle get_rect();
		::Dynamic get_rect_dyn();

		 ::openfl::geom::Rectangle set_rect( ::openfl::geom::Rectangle value);
		::Dynamic set_rect_dyn();

		Float get_rotation();
		::Dynamic get_rotation_dyn();

		Float set_rotation(Float value);
		::Dynamic set_rotation_dyn();

		Float get_scaleX();
		::Dynamic get_scaleX_dyn();

		Float set_scaleX(Float value);
		::Dynamic set_scaleX_dyn();

		Float get_scaleY();
		::Dynamic get_scaleY_dyn();

		Float set_scaleY(Float value);
		::Dynamic set_scaleY_dyn();

		 ::openfl::display::Shader get_shader();
		::Dynamic get_shader_dyn();

		 ::openfl::display::Shader set_shader( ::openfl::display::Shader value);
		::Dynamic set_shader_dyn();

		 ::openfl::display::Tileset get_tileset();
		::Dynamic get_tileset_dyn();

		 ::openfl::display::Tileset set_tileset( ::openfl::display::Tileset value);
		::Dynamic set_tileset_dyn();

		bool get_visible();
		::Dynamic get_visible_dyn();

		bool set_visible(bool value);
		::Dynamic set_visible_dyn();

		virtual Float get_width();
		::Dynamic get_width_dyn();

		virtual Float set_width(Float value);
		::Dynamic set_width_dyn();

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

#endif /* INCLUDED_openfl_display_Tile */ 
