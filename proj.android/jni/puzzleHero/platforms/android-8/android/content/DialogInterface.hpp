/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.content.DialogInterface
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_DECL
#define J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_DECL


namespace j2cpp { namespace android { namespace view { class KeyEvent; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <android/view/KeyEvent.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace content {

	class DialogInterface;
	namespace DialogInterface_ {

		class OnClickListener;
		class OnClickListener
			: public object<OnClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnClickListener(jobject jobj)
			: object<OnClickListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onClick(local_ref< android::content::DialogInterface >  const&, jint);
		}; //class OnClickListener

		class OnMultiChoiceClickListener;
		class OnMultiChoiceClickListener
			: public object<OnMultiChoiceClickListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnMultiChoiceClickListener(jobject jobj)
			: object<OnMultiChoiceClickListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onClick(local_ref< android::content::DialogInterface >  const&, jint, jboolean);
		}; //class OnMultiChoiceClickListener

		class OnCancelListener;
		class OnCancelListener
			: public object<OnCancelListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnCancelListener(jobject jobj)
			: object<OnCancelListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onCancel(local_ref< android::content::DialogInterface >  const&);
		}; //class OnCancelListener

		class OnKeyListener;
		class OnKeyListener
			: public object<OnKeyListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnKeyListener(jobject jobj)
			: object<OnKeyListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			jboolean onKey(local_ref< android::content::DialogInterface >  const&, jint, local_ref< android::view::KeyEvent >  const&);
		}; //class OnKeyListener

		class OnDismissListener;
		class OnDismissListener
			: public object<OnDismissListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnDismissListener(jobject jobj)
			: object<OnDismissListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onDismiss(local_ref< android::content::DialogInterface >  const&);
		}; //class OnDismissListener

		class OnShowListener;
		class OnShowListener
			: public object<OnShowListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnShowListener(jobject jobj)
			: object<OnShowListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onShow(local_ref< android::content::DialogInterface >  const&);
		}; //class OnShowListener

	} //namespace DialogInterface_

	class DialogInterface
		: public object<DialogInterface>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)

		typedef DialogInterface_::OnClickListener OnClickListener;
		typedef DialogInterface_::OnMultiChoiceClickListener OnMultiChoiceClickListener;
		typedef DialogInterface_::OnCancelListener OnCancelListener;
		typedef DialogInterface_::OnKeyListener OnKeyListener;
		typedef DialogInterface_::OnDismissListener OnDismissListener;
		typedef DialogInterface_::OnShowListener OnShowListener;

		explicit DialogInterface(jobject jobj)
		: object<DialogInterface>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		void cancel();
		void dismiss();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), jint > BUTTON_POSITIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), jint > BUTTON_NEGATIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), jint > BUTTON_NEUTRAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), jint > BUTTON1;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), jint > BUTTON2;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), jint > BUTTON3;
	}; //class DialogInterface

} //namespace content
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_IMPL
#define J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_IMPL

namespace j2cpp {




android::content::DialogInterface_::OnClickListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::content::DialogInterface_::OnClickListener::onClick(local_ref< android::content::DialogInterface > const &a0, jint a1)
{
	return call_method<
		android::content::DialogInterface_::OnClickListener::J2CPP_CLASS_NAME,
		android::content::DialogInterface_::OnClickListener::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface_::OnClickListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnClickListener,"android/content/DialogInterface$OnClickListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnClickListener,0,"onClick","(Landroid/content/DialogInterface;I)V")


android::content::DialogInterface_::OnMultiChoiceClickListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::content::DialogInterface_::OnMultiChoiceClickListener::onClick(local_ref< android::content::DialogInterface > const &a0, jint a1, jboolean a2)
{
	return call_method<
		android::content::DialogInterface_::OnMultiChoiceClickListener::J2CPP_CLASS_NAME,
		android::content::DialogInterface_::OnMultiChoiceClickListener::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface_::OnMultiChoiceClickListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnMultiChoiceClickListener,"android/content/DialogInterface$OnMultiChoiceClickListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnMultiChoiceClickListener,0,"onClick","(Landroid/content/DialogInterface;IZ)V")


android::content::DialogInterface_::OnCancelListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::content::DialogInterface_::OnCancelListener::onCancel(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::content::DialogInterface_::OnCancelListener::J2CPP_CLASS_NAME,
		android::content::DialogInterface_::OnCancelListener::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface_::OnCancelListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnCancelListener,"android/content/DialogInterface$OnCancelListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnCancelListener,0,"onCancel","(Landroid/content/DialogInterface;)V")


android::content::DialogInterface_::OnKeyListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

jboolean android::content::DialogInterface_::OnKeyListener::onKey(local_ref< android::content::DialogInterface > const &a0, jint a1, local_ref< android::view::KeyEvent > const &a2)
{
	return call_method<
		android::content::DialogInterface_::OnKeyListener::J2CPP_CLASS_NAME,
		android::content::DialogInterface_::OnKeyListener::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface_::OnKeyListener::J2CPP_METHOD_SIGNATURE(0), 
		jboolean
	>(get_jobject(), a0, a1, a2);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnKeyListener,"android/content/DialogInterface$OnKeyListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnKeyListener,0,"onKey","(Landroid/content/DialogInterface;ILandroid/view/KeyEvent;)Z")


android::content::DialogInterface_::OnDismissListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::content::DialogInterface_::OnDismissListener::onDismiss(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::content::DialogInterface_::OnDismissListener::J2CPP_CLASS_NAME,
		android::content::DialogInterface_::OnDismissListener::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface_::OnDismissListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnDismissListener,"android/content/DialogInterface$OnDismissListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnDismissListener,0,"onDismiss","(Landroid/content/DialogInterface;)V")


android::content::DialogInterface_::OnShowListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::content::DialogInterface_::OnShowListener::onShow(local_ref< android::content::DialogInterface > const &a0)
{
	return call_method<
		android::content::DialogInterface_::OnShowListener::J2CPP_CLASS_NAME,
		android::content::DialogInterface_::OnShowListener::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface_::OnShowListener::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::content::DialogInterface_::OnShowListener,"android/content/DialogInterface$OnShowListener")
J2CPP_DEFINE_METHOD(android::content::DialogInterface_::OnShowListener,0,"onShow","(Landroid/content/DialogInterface;)V")



android::content::DialogInterface::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

void android::content::DialogInterface::cancel()
{
	return call_method<
		android::content::DialogInterface::J2CPP_CLASS_NAME,
		android::content::DialogInterface::J2CPP_METHOD_NAME(0),
		android::content::DialogInterface::J2CPP_METHOD_SIGNATURE(0), 
		void
	>(get_jobject());
}

void android::content::DialogInterface::dismiss()
{
	return call_method<
		android::content::DialogInterface::J2CPP_CLASS_NAME,
		android::content::DialogInterface::J2CPP_METHOD_NAME(1),
		android::content::DialogInterface::J2CPP_METHOD_SIGNATURE(1), 
		void
	>(get_jobject());
}


static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(0),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(0),
	jint
> android::content::DialogInterface::BUTTON_POSITIVE;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(1),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(1),
	jint
> android::content::DialogInterface::BUTTON_NEGATIVE;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(2),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(2),
	jint
> android::content::DialogInterface::BUTTON_NEUTRAL;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(3),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(3),
	jint
> android::content::DialogInterface::BUTTON1;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(4),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(4),
	jint
> android::content::DialogInterface::BUTTON2;

static_field<
	android::content::DialogInterface::J2CPP_CLASS_NAME,
	android::content::DialogInterface::J2CPP_FIELD_NAME(5),
	android::content::DialogInterface::J2CPP_FIELD_SIGNATURE(5),
	jint
> android::content::DialogInterface::BUTTON3;


J2CPP_DEFINE_CLASS(android::content::DialogInterface,"android/content/DialogInterface")
J2CPP_DEFINE_METHOD(android::content::DialogInterface,0,"cancel","()V")
J2CPP_DEFINE_METHOD(android::content::DialogInterface,1,"dismiss","()V")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,0,"BUTTON_POSITIVE","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,1,"BUTTON_NEGATIVE","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,2,"BUTTON_NEUTRAL","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,3,"BUTTON1","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,4,"BUTTON2","I")
J2CPP_DEFINE_FIELD(android::content::DialogInterface,5,"BUTTON3","I")

} //namespace j2cpp

#endif //J2CPP_ANDROID_CONTENT_DIALOGINTERFACE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
