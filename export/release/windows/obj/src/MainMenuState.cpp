#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CreditsState
#include <CreditsState.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_options_OptionsState
#include <options/OptionsState.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_25_new,"MainMenuState","new",0x83a7c9cb,"MainMenuState.new","MainMenuState.hx",25,0x0e5db805)
static const ::String _hx_array_data_205e8859_1[] = {
	HX_("mario-64",27,a5,5f,6f),
};
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_41_create,"MainMenuState","create",0x6b76e271,"MainMenuState.create","MainMenuState.hx",41,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_141_update,"MainMenuState","update",0x766d017e,"MainMenuState.update","MainMenuState.hx",141,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_210_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",210,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_201_changeItem,"MainMenuState","changeItem",0xf62bd498,"MainMenuState.changeItem","MainMenuState.hx",201,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_27_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",27,0x0e5db805)
HX_LOCAL_STACK_FRAME(_hx_pos_b0351dbbcbe2d566_28_boot,"MainMenuState","boot",0xa741c867,"MainMenuState.boot","MainMenuState.hx",28,0x0e5db805)

void MainMenuState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_25_new)
HXLINE( 138)		this->selectedSomethin = false;
HXLINE(  38)		this->debugstuff = true;
HXLINE(  32)		this->songlist = ::Array_obj< ::String >::fromData( _hx_array_data_205e8859_1,1);
HXLINE(  25)		super::__construct(TransIn,TransOut);
            	}

Dynamic MainMenuState_obj::__CreateEmpty() { return new MainMenuState_obj; }

void *MainMenuState_obj::_hx_vtable = 0;

Dynamic MainMenuState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MainMenuState_obj > _hx_result = new MainMenuState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MainMenuState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x3f706236 || inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x6915cded || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void MainMenuState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_41_create)
HXLINE(  42)		::WeekData_obj::loadTheFirstEnabledMod();
HXLINE(  46)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  48)		this->debugKeys = ::ClientPrefs_obj::copyKey(( (::Array< int >)(::ClientPrefs_obj::keyBinds->get(HX_("debug_1",05,20,57,5b))) ));
HXLINE(  50)		this->transIn = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransIn;
HXLINE(  51)		this->transOut = ::flixel::addons::transition::FlxTransitionableState_obj::defaultTransOut;
HXLINE(  53)		this->persistentUpdate = (this->persistentDraw = true);
HXLINE(  55)		Float yScroll = ::Math_obj::max(((Float)0.25),((Float)0.1));
HXLINE(  56)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  56)		::String library = null();
HXDLIN(  56)		 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("menuBG",24,65,6d,05),library);
HXDLIN(  56)		 ::flixel::FlxSprite bg1 = bg->loadGraphic(returnAsset,null(),null(),null(),null(),null());
HXLINE(  57)		bg1->scrollFactor->set(0,yScroll);
HXLINE(  58)		bg1->setGraphicSize(::Std_obj::_hx_int((bg1->get_width() * ((Float)1.175))),null());
HXLINE(  59)		bg1->updateHitbox();
HXLINE(  60)		bg1->screenCenter(null());
HXLINE(  61)		bg1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  62)		this->add(bg1);
HXLINE(  64)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-80,null(),null());
HXDLIN(  64)		::String library1 = null();
HXDLIN(  64)		 ::flixel::graphics::FlxGraphic returnAsset1 = ::Paths_obj::returnGraphic(HX_("menuDesat",26,91,04,72),library1);
HXDLIN(  64)		this->magenta = _hx_tmp->loadGraphic(returnAsset1,null(),null(),null(),null(),null());
HXLINE(  65)		this->magenta->scrollFactor->set(0,yScroll);
HXLINE(  66)		 ::flixel::FlxSprite _hx_tmp1 = this->magenta;
HXDLIN(  66)		_hx_tmp1->setGraphicSize(::Std_obj::_hx_int((this->magenta->get_width() * ((Float)1.175))),null());
HXLINE(  67)		this->magenta->updateHitbox();
HXLINE(  68)		this->magenta->screenCenter(null());
HXLINE(  69)		this->magenta->set_visible(false);
HXLINE(  70)		this->magenta->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  71)		this->magenta->set_color(-167525);
HXLINE(  72)		this->add(this->magenta);
HXLINE(  74)		 ::flixel::FlxSprite menu1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-801,-104,null());
HXLINE(  75)		::String library2 = null();
HXDLIN(  75)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),null());
HXDLIN(  75)		bool xmlExists = false;
HXDLIN(  75)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  75)			xmlExists = true;
            		}
HXDLIN(  75)		 ::Dynamic _hx_tmp2;
HXDLIN(  75)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  75)			_hx_tmp2 = imageLoaded;
            		}
            		else {
HXLINE(  75)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),library2);
HXDLIN(  75)			_hx_tmp2 = returnAsset;
            		}
HXDLIN(  75)		::String _hx_tmp3;
HXDLIN(  75)		if (xmlExists) {
HXLINE(  75)			_hx_tmp3 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  75)			_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library2);
            		}
HXDLIN(  75)		menu1->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp2,_hx_tmp3));
HXLINE(  76)		menu1->animation->addByPrefix(HX_("thing",ee,87,89,0f),HX_("background",ee,93,1d,26),24,false,null(),null());
HXLINE(  77)		menu1->animation->play(HX_("thing",ee,87,89,0f),null(),null(),null());
HXLINE(  78)		this->add(menu1);
HXLINE(  80)		 ::flixel::FlxSprite menu2 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,93,637,null());
HXLINE(  81)		::String library3 = null();
HXDLIN(  81)		 ::flixel::graphics::FlxGraphic imageLoaded1 = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),null());
HXDLIN(  81)		bool xmlExists1 = false;
HXDLIN(  81)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  81)			xmlExists1 = true;
            		}
HXDLIN(  81)		 ::Dynamic _hx_tmp4;
HXDLIN(  81)		if (::hx::IsNotNull( imageLoaded1 )) {
HXLINE(  81)			_hx_tmp4 = imageLoaded1;
            		}
            		else {
HXLINE(  81)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),library3);
HXDLIN(  81)			_hx_tmp4 = returnAsset;
            		}
HXDLIN(  81)		::String _hx_tmp5;
HXDLIN(  81)		if (xmlExists1) {
HXLINE(  81)			_hx_tmp5 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  81)			_hx_tmp5 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library3);
            		}
HXDLIN(  81)		menu2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp4,_hx_tmp5));
HXLINE(  82)		menu2->animation->addByPrefix(HX_("thing",ee,87,89,0f),HX_("table",0e,b8,e3,0a),24,false,null(),null());
HXLINE(  83)		menu2->animation->play(HX_("thing",ee,87,89,0f),null(),null(),null());
HXLINE(  84)		this->add(menu2);
HXLINE(  86)		 ::flixel::FlxSprite menu3 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,960,76,null());
HXLINE(  87)		::String library4 = null();
HXDLIN(  87)		 ::flixel::graphics::FlxGraphic imageLoaded2 = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),null());
HXDLIN(  87)		bool xmlExists2 = false;
HXDLIN(  87)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  87)			xmlExists2 = true;
            		}
HXDLIN(  87)		 ::Dynamic _hx_tmp6;
HXDLIN(  87)		if (::hx::IsNotNull( imageLoaded2 )) {
HXLINE(  87)			_hx_tmp6 = imageLoaded2;
            		}
            		else {
HXLINE(  87)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),library4);
HXDLIN(  87)			_hx_tmp6 = returnAsset;
            		}
HXDLIN(  87)		::String _hx_tmp7;
HXDLIN(  87)		if (xmlExists2) {
HXLINE(  87)			_hx_tmp7 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  87)			_hx_tmp7 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library4);
            		}
HXDLIN(  87)		menu3->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp6,_hx_tmp7));
HXLINE(  88)		menu3->animation->addByPrefix(HX_("thing",ee,87,89,0f),HX_("shelf",aa,e8,1f,7c),24,false,null(),null());
HXLINE(  89)		menu3->animation->play(HX_("thing",ee,87,89,0f),null(),null(),null());
HXLINE(  90)		this->add(menu3);
HXLINE(  92)		 ::flixel::FlxSprite menu4 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,228,367,null());
HXLINE(  93)		::String library5 = null();
HXDLIN(  93)		 ::flixel::graphics::FlxGraphic imageLoaded3 = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),null());
HXDLIN(  93)		bool xmlExists3 = false;
HXDLIN(  93)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  93)			xmlExists3 = true;
            		}
HXDLIN(  93)		 ::Dynamic _hx_tmp8;
HXDLIN(  93)		if (::hx::IsNotNull( imageLoaded3 )) {
HXLINE(  93)			_hx_tmp8 = imageLoaded3;
            		}
            		else {
HXLINE(  93)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),library5);
HXDLIN(  93)			_hx_tmp8 = returnAsset;
            		}
HXDLIN(  93)		::String _hx_tmp9;
HXDLIN(  93)		if (xmlExists3) {
HXLINE(  93)			_hx_tmp9 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  93)			_hx_tmp9 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library5);
            		}
HXDLIN(  93)		menu4->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp8,_hx_tmp9));
HXLINE(  94)		menu4->animation->addByPrefix(HX_("thing",ee,87,89,0f),HX_("screen uhhh",47,a9,cf,de),24,false,null(),null());
HXLINE(  95)		menu4->animation->play(HX_("thing",ee,87,89,0f),null(),null(),null());
HXLINE(  96)		this->add(menu4);
HXLINE(  98)		 ::flixel::FlxSprite menu5 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,276,387,null());
HXLINE(  99)		::String library6 = null();
HXDLIN(  99)		 ::flixel::graphics::FlxGraphic imageLoaded4 = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),null());
HXDLIN(  99)		bool xmlExists4 = false;
HXDLIN(  99)		if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  99)			xmlExists4 = true;
            		}
HXDLIN(  99)		 ::Dynamic _hx_tmp10;
HXDLIN(  99)		if (::hx::IsNotNull( imageLoaded4 )) {
HXLINE(  99)			_hx_tmp10 = imageLoaded4;
            		}
            		else {
HXLINE(  99)			 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("game room",09,fd,6e,5a),library6);
HXDLIN(  99)			_hx_tmp10 = returnAsset;
            		}
HXDLIN(  99)		::String _hx_tmp11;
HXDLIN(  99)		if (xmlExists4) {
HXLINE(  99)			_hx_tmp11 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE(  99)			_hx_tmp11 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("game room",09,fd,6e,5a)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library6);
            		}
HXDLIN(  99)		menu5->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp10,_hx_tmp11));
HXLINE( 100)		menu5->animation->addByPrefix(HX_("thing",ee,87,89,0f),HX_("screen stuff",40,b7,0f,f8),24,false,null(),null());
HXLINE( 101)		menu5->animation->play(HX_("thing",ee,87,89,0f),null(),null(),null());
HXLINE( 102)		this->add(menu5);
HXLINE( 106)		this->menuItems =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 107)		this->add(this->menuItems);
HXLINE( 109)		Float scale = ( (Float)(1) );
HXLINE( 111)		{
HXLINE( 111)			int _g = 0;
HXDLIN( 111)			int _g1 = this->songlist->length;
HXDLIN( 111)			while((_g < _g1)){
HXLINE( 111)				_g = (_g + 1);
HXDLIN( 111)				int i = (_g - 1);
HXLINE( 113)				Float offset = (( (Float)(108) ) - ((::Math_obj::max(( (Float)(this->songlist->length) ),( (Float)(4) )) - ( (Float)(4) )) * ( (Float)(80) )));
HXLINE( 114)				 ::flixel::FlxSprite menuItem =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(1012 + (i * 110)),220,null());
HXLINE( 115)				menuItem->scale->set_x(scale);
HXLINE( 116)				menuItem->scale->set_y(scale);
HXLINE( 117)				::String library = null();
HXDLIN( 117)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::returnGraphic(HX_("cartrages",66,ea,87,09),null());
HXDLIN( 117)				bool xmlExists = false;
HXDLIN( 117)				if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("cartrages",66,ea,87,09)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 117)					xmlExists = true;
            				}
HXDLIN( 117)				 ::Dynamic _hx_tmp;
HXDLIN( 117)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 117)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 117)					 ::flixel::graphics::FlxGraphic returnAsset = ::Paths_obj::returnGraphic(HX_("cartrages",66,ea,87,09),library);
HXDLIN( 117)					_hx_tmp = returnAsset;
            				}
HXDLIN( 117)				::String _hx_tmp1;
HXDLIN( 117)				if (xmlExists) {
HXLINE( 117)					_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("cartrages",66,ea,87,09)) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE( 117)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("cartrages",66,ea,87,09)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN( 117)				menuItem->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 118)				menuItem->animation->addByPrefix(HX_("idle",14,a7,b3,45),this->songlist->__get(i),24,null(),null(),null());
HXLINE( 119)				menuItem->animation->addByPrefix(HX_("selected",5b,2a,6d,b1),(this->songlist->__get(i) + HX_(" selected",7b,4a,9a,0f)),24,null(),null(),null());
HXLINE( 120)				menuItem->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 121)				menuItem->ID = i;
HXLINE( 122)				this->menuItems->add(menuItem).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 123)				Float scr = (( (Float)((this->songlist->length - 4)) ) * ((Float)0.135));
HXLINE( 124)				if ((this->songlist->length < 6)) {
HXLINE( 124)					scr = ( (Float)(0) );
            				}
HXLINE( 125)				menuItem->scrollFactor->set(0,scr);
HXLINE( 126)				menuItem->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 128)				menuItem->updateHitbox();
            			}
            		}
HXLINE( 133)		this->changeItem(null());
HXLINE( 135)		this->super::create();
            	}


void MainMenuState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_141_update)
HXLINE( 142)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.8))) {
HXLINE( 144)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 144)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 147)		Float lerpVal = ::Math_obj::max(( (Float)(0) ),::Math_obj::min(( (Float)(1) ),(elapsed * ((Float)7.5))));
HXLINE( 149)		if (!(this->selectedSomethin)) {
HXLINE( 151)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 153)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 153)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 154)				this->changeItem(-1);
            			}
HXLINE( 157)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 159)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 159)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 160)				this->changeItem(1);
            			}
HXLINE( 163)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
HXLINE( 165)				this->selectedSomethin = true;
HXLINE( 166)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 166)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 167)				::MusicBeatState_obj::switchState( ::TitleState_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE( 170)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 172)				this->selectedSomethin = true;
HXLINE( 173)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 173)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 174)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(this->songlist->__get(::MainMenuState_obj::curSelected),this->songlist->__get(::MainMenuState_obj::curSelected));
HXLINE( 175)				::PlayState_obj::isStoryMode = false;
HXLINE( 176)				::PlayState_obj::storyDifficulty = 1;
HXLINE( 177)				::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            			}
            			else {
HXLINE( 179)				 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 179)				if (_this->keyManager->checkStatus(49,_this->status)) {
HXLINE( 181)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 183)					 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 183)					if (_this->keyManager->checkStatus(50,_this->status)) {
HXLINE( 185)						::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            					}
            					else {
HXLINE( 187)						 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 187)						if (_this->keyManager->checkStatus(51,_this->status)) {
HXLINE( 189)							::MusicBeatState_obj::switchState( ::CreditsState_obj::__alloc( HX_CTX ,null(),null()));
            						}
            						else {
HXLINE( 191)							 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->justPressed) );
HXDLIN( 191)							if (_this->keyManager->checkStatus(52,_this->status)) {
HXLINE( 193)								::MusicBeatState_obj::switchState( ::options::OptionsState_obj::__alloc( HX_CTX ,null(),null()));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 197)		this->super::update(elapsed);
            	}


void MainMenuState_obj::changeItem(::hx::Null< int >  __o_huh){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::MainMenuState,_gthis) HXARGC(1)
            		void _hx_run( ::flixel::FlxSprite spr){
            			HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_210_changeItem)
HXLINE( 211)			spr->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 212)			spr->updateHitbox();
HXLINE( 214)			if ((spr->ID == ::MainMenuState_obj::curSelected)) {
HXLINE( 216)				spr->animation->play(HX_("selected",5b,2a,6d,b1),null(),null(),null());
HXLINE( 217)				Float add = ( (Float)(0) );
HXLINE( 218)				if ((_gthis->menuItems->length > 4)) {
HXLINE( 219)					add = ( (Float)((_gthis->menuItems->length * 8)) );
            				}
HXLINE( 221)				spr->centerOffsets(null());
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		int huh = __o_huh.Default(0);
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_201_changeItem)
HXDLIN( 201)		 ::MainMenuState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 202)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::MainMenuState >();
HXDLIN( 202)		::MainMenuState_obj::curSelected = (::MainMenuState_obj::curSelected + huh);
HXLINE( 204)		if ((::MainMenuState_obj::curSelected >= this->menuItems->length)) {
HXLINE( 205)			::MainMenuState_obj::curSelected = 0;
            		}
HXLINE( 206)		if ((::MainMenuState_obj::curSelected < 0)) {
HXLINE( 207)			::MainMenuState_obj::curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 209)		this->menuItems->forEach( ::Dynamic(new _hx_Closure_0(_gthis)),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(MainMenuState_obj,changeItem,(void))

::String MainMenuState_obj::psychEngineVersion;

int MainMenuState_obj::curSelected;


::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< MainMenuState_obj > __this = new MainMenuState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< MainMenuState_obj > MainMenuState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	MainMenuState_obj *__this = (MainMenuState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MainMenuState_obj), true, "MainMenuState"));
	*(void **)__this = MainMenuState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

MainMenuState_obj::MainMenuState_obj()
{
}

void MainMenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MainMenuState);
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(songlist,"songlist");
	HX_MARK_MEMBER_NAME(magenta,"magenta");
	HX_MARK_MEMBER_NAME(debugKeys,"debugKeys");
	HX_MARK_MEMBER_NAME(debugstuff,"debugstuff");
	HX_MARK_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MainMenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(songlist,"songlist");
	HX_VISIT_MEMBER_NAME(magenta,"magenta");
	HX_VISIT_MEMBER_NAME(debugKeys,"debugKeys");
	HX_VISIT_MEMBER_NAME(debugstuff,"debugstuff");
	HX_VISIT_MEMBER_NAME(selectedSomethin,"selectedSomethin");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MainMenuState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { return ::hx::Val( magenta ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songlist") ) { return ::hx::Val( songlist ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"debugKeys") ) { return ::hx::Val( debugKeys ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debugstuff") ) { return ::hx::Val( debugstuff ); }
		if (HX_FIELD_EQ(inName,"changeItem") ) { return ::hx::Val( changeItem_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { return ::hx::Val( selectedSomethin ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MainMenuState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"psychEngineVersion") ) { outValue = ( psychEngineVersion ); return true; }
	}
	return false;
}

::hx::Val MainMenuState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"magenta") ) { magenta=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"songlist") ) { songlist=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugKeys") ) { debugKeys=inValue.Cast< ::Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"debugstuff") ) { debugstuff=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"selectedSomethin") ) { selectedSomethin=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MainMenuState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"psychEngineVersion") ) { psychEngineVersion=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void MainMenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("songlist",b3,4e,b2,4a));
	outFields->push(HX_("magenta",29,ba,9d,0e));
	outFields->push(HX_("debugKeys",e7,85,52,2a));
	outFields->push(HX_("debugstuff",c1,f7,d0,ef));
	outFields->push(HX_("selectedSomethin",c8,ec,fb,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MainMenuState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(MainMenuState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(MainMenuState_obj,songlist),HX_("songlist",b3,4e,b2,4a)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(MainMenuState_obj,magenta),HX_("magenta",29,ba,9d,0e)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(MainMenuState_obj,debugKeys),HX_("debugKeys",e7,85,52,2a)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,debugstuff),HX_("debugstuff",c1,f7,d0,ef)},
	{::hx::fsBool,(int)offsetof(MainMenuState_obj,selectedSomethin),HX_("selectedSomethin",c8,ec,fb,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MainMenuState_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &MainMenuState_obj::psychEngineVersion,HX_("psychEngineVersion",3b,61,cc,fc)},
	{::hx::fsInt,(void *) &MainMenuState_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MainMenuState_obj_sMemberFields[] = {
	HX_("menuItems",e1,15,e5,5c),
	HX_("songlist",b3,4e,b2,4a),
	HX_("magenta",29,ba,9d,0e),
	HX_("debugKeys",e7,85,52,2a),
	HX_("debugstuff",c1,f7,d0,ef),
	HX_("create",fc,66,0f,7c),
	HX_("selectedSomethin",c8,ec,fb,99),
	HX_("update",09,86,05,87),
	HX_("changeItem",a3,fa,08,20),
	::String(null()) };

static void MainMenuState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MainMenuState_obj::psychEngineVersion,"psychEngineVersion");
	HX_MARK_MEMBER_NAME(MainMenuState_obj::curSelected,"curSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MainMenuState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::psychEngineVersion,"psychEngineVersion");
	HX_VISIT_MEMBER_NAME(MainMenuState_obj::curSelected,"curSelected");
};

#endif

::hx::Class MainMenuState_obj::__mClass;

static ::String MainMenuState_obj_sStaticFields[] = {
	HX_("psychEngineVersion",3b,61,cc,fc),
	HX_("curSelected",fb,eb,ab,32),
	::String(null())
};

void MainMenuState_obj::__register()
{
	MainMenuState_obj _hx_dummy;
	MainMenuState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MainMenuState",59,88,5e,20);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MainMenuState_obj::__GetStatic;
	__mClass->mSetStaticField = &MainMenuState_obj::__SetStatic;
	__mClass->mMarkFunc = MainMenuState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MainMenuState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MainMenuState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MainMenuState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MainMenuState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MainMenuState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MainMenuState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_27_boot)
HXDLIN(  27)		psychEngineVersion = HX_("0.5.2h",8d,63,bb,d0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b0351dbbcbe2d566_28_boot)
HXDLIN(  28)		curSelected = 0;
            	}
}

