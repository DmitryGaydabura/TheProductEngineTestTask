// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_pack_reverse_row_order
#include <lime/graphics/opengl/ext/ANGLE_pack_reverse_row_order.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1c02b5b920f81ba_6_new,"lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order","new",0xf68bfd86,"lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order.new","lime/graphics/opengl/ext/ANGLE_pack_reverse_row_order.hx",6,0xfa7dce48)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_pack_reverse_row_order_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_c1c02b5b920f81ba_6_new)
HXDLIN(   6)		this->PACK_REVERSE_ROW_ORDER_ANGLE = 37796;
            	}

Dynamic ANGLE_pack_reverse_row_order_obj::__CreateEmpty() { return new ANGLE_pack_reverse_row_order_obj; }

void *ANGLE_pack_reverse_row_order_obj::_hx_vtable = 0;

Dynamic ANGLE_pack_reverse_row_order_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ANGLE_pack_reverse_row_order_obj > _hx_result = new ANGLE_pack_reverse_row_order_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_pack_reverse_row_order_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1182a038;
}


ANGLE_pack_reverse_row_order_obj::ANGLE_pack_reverse_row_order_obj()
{
}

::hx::Val ANGLE_pack_reverse_row_order_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"PACK_REVERSE_ROW_ORDER_ANGLE") ) { return ::hx::Val( PACK_REVERSE_ROW_ORDER_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ANGLE_pack_reverse_row_order_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 28:
		if (HX_FIELD_EQ(inName,"PACK_REVERSE_ROW_ORDER_ANGLE") ) { PACK_REVERSE_ROW_ORDER_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_pack_reverse_row_order_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("PACK_REVERSE_ROW_ORDER_ANGLE",ba,ed,cd,94));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ANGLE_pack_reverse_row_order_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ANGLE_pack_reverse_row_order_obj,PACK_REVERSE_ROW_ORDER_ANGLE),HX_("PACK_REVERSE_ROW_ORDER_ANGLE",ba,ed,cd,94)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ANGLE_pack_reverse_row_order_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_pack_reverse_row_order_obj_sMemberFields[] = {
	HX_("PACK_REVERSE_ROW_ORDER_ANGLE",ba,ed,cd,94),
	::String(null()) };

::hx::Class ANGLE_pack_reverse_row_order_obj::__mClass;

void ANGLE_pack_reverse_row_order_obj::__register()
{
	ANGLE_pack_reverse_row_order_obj _hx_dummy;
	ANGLE_pack_reverse_row_order_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.ANGLE_pack_reverse_row_order",94,82,99,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ANGLE_pack_reverse_row_order_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ANGLE_pack_reverse_row_order_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_pack_reverse_row_order_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_pack_reverse_row_order_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
