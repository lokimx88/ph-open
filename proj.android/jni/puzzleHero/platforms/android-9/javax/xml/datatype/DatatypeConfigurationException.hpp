/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: javax.xml.datatype.DatatypeConfigurationException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_HPP_DECL
#define J2CPP_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Exception; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Throwable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace io { class PrintWriter; } } }
namespace j2cpp { namespace java { namespace io { class PrintStream; } } }
namespace j2cpp { namespace java { namespace io { class Serializable; } } }


#include <java/io/PrintStream.hpp>
#include <java/io/PrintWriter.hpp>
#include <java/io/Serializable.hpp>
#include <java/lang/Exception.hpp>
#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <java/lang/Throwable.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace datatype {

	class DatatypeConfigurationException;
	class DatatypeConfigurationException
		: public object<DatatypeConfigurationException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)

		explicit DatatypeConfigurationException(jobject jobj)
		: object<DatatypeConfigurationException>(jobj)
		{
		}

		operator local_ref<java::lang::Exception>() const;
		operator local_ref<java::lang::Throwable>() const;
		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::io::Serializable>() const;


		DatatypeConfigurationException();
		DatatypeConfigurationException(local_ref< java::lang::String > const&);
		DatatypeConfigurationException(local_ref< java::lang::String > const&, local_ref< java::lang::Throwable > const&);
		DatatypeConfigurationException(local_ref< java::lang::Throwable > const&);
		void printStackTrace();
		void printStackTrace(local_ref< java::io::PrintStream >  const&);
		void printStackTrace(local_ref< java::io::PrintWriter >  const&);
	}; //class DatatypeConfigurationException

} //namespace datatype
} //namespace xml
} //namespace javax

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_HPP_IMPL
#define J2CPP_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_HPP_IMPL

namespace j2cpp {



javax::xml::datatype::DatatypeConfigurationException::operator local_ref<java::lang::Exception>() const
{
	return local_ref<java::lang::Exception>(get_jobject());
}

javax::xml::datatype::DatatypeConfigurationException::operator local_ref<java::lang::Throwable>() const
{
	return local_ref<java::lang::Throwable>(get_jobject());
}

javax::xml::datatype::DatatypeConfigurationException::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

javax::xml::datatype::DatatypeConfigurationException::operator local_ref<java::io::Serializable>() const
{
	return local_ref<java::io::Serializable>(get_jobject());
}


javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException()
: object<javax::xml::datatype::DatatypeConfigurationException>(
	call_new_object<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(0),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}



javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException(local_ref< java::lang::String > const &a0)
: object<javax::xml::datatype::DatatypeConfigurationException>(
	call_new_object<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(1),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(1)
	>(a0)
)
{
}



javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException(local_ref< java::lang::String > const &a0, local_ref< java::lang::Throwable > const &a1)
: object<javax::xml::datatype::DatatypeConfigurationException>(
	call_new_object<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(2),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(2)
	>(a0, a1)
)
{
}



javax::xml::datatype::DatatypeConfigurationException::DatatypeConfigurationException(local_ref< java::lang::Throwable > const &a0)
: object<javax::xml::datatype::DatatypeConfigurationException>(
	call_new_object<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(3),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(3)
	>(a0)
)
{
}


void javax::xml::datatype::DatatypeConfigurationException::printStackTrace()
{
	return call_method<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(4),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(4), 
		void
	>(get_jobject());
}

void javax::xml::datatype::DatatypeConfigurationException::printStackTrace(local_ref< java::io::PrintStream > const &a0)
{
	return call_method<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(5),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(5), 
		void
	>(get_jobject(), a0);
}

void javax::xml::datatype::DatatypeConfigurationException::printStackTrace(local_ref< java::io::PrintWriter > const &a0)
{
	return call_method<
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_CLASS_NAME,
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_NAME(6),
		javax::xml::datatype::DatatypeConfigurationException::J2CPP_METHOD_SIGNATURE(6), 
		void
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(javax::xml::datatype::DatatypeConfigurationException,"javax/xml/datatype/DatatypeConfigurationException")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,1,"<init>","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,2,"<init>","(Ljava/lang/String;Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,3,"<init>","(Ljava/lang/Throwable;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,4,"printStackTrace","()V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,5,"printStackTrace","(Ljava/io/PrintStream;)V")
J2CPP_DEFINE_METHOD(javax::xml::datatype::DatatypeConfigurationException,6,"printStackTrace","(Ljava/io/PrintWriter;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
