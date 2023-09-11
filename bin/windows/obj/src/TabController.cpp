// Generated by Haxe 4.3.2
#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_TabController
#include <TabController.h>
#endif
#ifndef INCLUDED_TabModel
#include <TabModel.h>
#endif
#ifndef INCLUDED_TabView
#include <TabView.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ee52968f6f3d1b6_9_new,"TabController","new",0x3911f0a3,"TabController.new","TabController.hx",9,0x8320342d)
HX_LOCAL_STACK_FRAME(_hx_pos_6ee52968f6f3d1b6_16_tabClicked,"TabController","tabClicked",0x7d7e26ef,"TabController.tabClicked","TabController.hx",16,0x8320342d)

void TabController_obj::__construct( ::TabModel model, ::TabView view, ::Main main){
            	HX_STACKFRAME(&_hx_pos_6ee52968f6f3d1b6_9_new)
HXLINE(  10)		this->model = model;
HXLINE(  11)		this->view = view;
HXLINE(  12)		this->main = main;
            	}

Dynamic TabController_obj::__CreateEmpty() { return new TabController_obj; }

void *TabController_obj::_hx_vtable = 0;

Dynamic TabController_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< TabController_obj > _hx_result = new TabController_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool TabController_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x65fda8c5;
}

void TabController_obj::tabClicked(){
            	HX_STACKFRAME(&_hx_pos_6ee52968f6f3d1b6_16_tabClicked)
HXDLIN(  16)		this->view->update(this->model->content);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TabController_obj,tabClicked,(void))


::hx::ObjectPtr< TabController_obj > TabController_obj::__new( ::TabModel model, ::TabView view, ::Main main) {
	::hx::ObjectPtr< TabController_obj > __this = new TabController_obj();
	__this->__construct(model,view,main);
	return __this;
}

::hx::ObjectPtr< TabController_obj > TabController_obj::__alloc(::hx::Ctx *_hx_ctx, ::TabModel model, ::TabView view, ::Main main) {
	TabController_obj *__this = (TabController_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(TabController_obj), true, "TabController"));
	*(void **)__this = TabController_obj::_hx_vtable;
	__this->__construct(model,view,main);
	return __this;
}

TabController_obj::TabController_obj()
{
}

void TabController_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TabController);
	HX_MARK_MEMBER_NAME(model,"model");
	HX_MARK_MEMBER_NAME(view,"view");
	HX_MARK_MEMBER_NAME(main,"main");
	HX_MARK_END_CLASS();
}

void TabController_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(model,"model");
	HX_VISIT_MEMBER_NAME(view,"view");
	HX_VISIT_MEMBER_NAME(main,"main");
}

::hx::Val TabController_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { return ::hx::Val( view ); }
		if (HX_FIELD_EQ(inName,"main") ) { return ::hx::Val( main ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { return ::hx::Val( model ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tabClicked") ) { return ::hx::Val( tabClicked_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val TabController_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"view") ) { view=inValue.Cast<  ::TabView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"main") ) { main=inValue.Cast<  ::Main >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"model") ) { model=inValue.Cast<  ::TabModel >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TabController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("model",a9,23,58,0c));
	outFields->push(HX_("view",65,32,4f,4e));
	outFields->push(HX_("main",39,38,56,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo TabController_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::TabModel */ ,(int)offsetof(TabController_obj,model),HX_("model",a9,23,58,0c)},
	{::hx::fsObject /*  ::TabView */ ,(int)offsetof(TabController_obj,view),HX_("view",65,32,4f,4e)},
	{::hx::fsObject /*  ::Main */ ,(int)offsetof(TabController_obj,main),HX_("main",39,38,56,48)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *TabController_obj_sStaticStorageInfo = 0;
#endif

static ::String TabController_obj_sMemberFields[] = {
	HX_("model",a9,23,58,0c),
	HX_("view",65,32,4f,4e),
	HX_("main",39,38,56,48),
	HX_("tabClicked",d2,68,04,bc),
	::String(null()) };

::hx::Class TabController_obj::__mClass;

void TabController_obj::__register()
{
	TabController_obj _hx_dummy;
	TabController_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("TabController",31,63,46,1d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(TabController_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< TabController_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TabController_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TabController_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

