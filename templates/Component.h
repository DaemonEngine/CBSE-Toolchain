//* TODO: Add license from input file.
// TODO: Insert license statement.
//%L
#ifndef {{component.get_name().upper()}}_COMPONENT_H_
#define {{component.get_name().upper()}}_COMPONENT_H_
//%L
//* TODO: Add include from parameter.
// TODO: Include header that provides the component base classes.
//%L
class {{component.get_type_name()}}: public {{component.get_base_type_name()}} {
//* TODO: Uncomment after changing message handler visibility to protected.
//*	friend class Entity;
//*//%L
	public:
		// ///////////////////// //
		// Autogenerated Members //
		// ///////////////////// //
//%L
		/**
		 * @brief Default constructor of the {{component.get_type_name()}}.
		 * @param entity The entity that owns the component instance.
		{% for param in component.get_param_names() %}
		 * @param {{param}}
		{% endfor %}
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		{{component.get_constructor_declaration()}};
//%L
//* TODO: Uncomment after changing message handler visibility to protected.
//*	protected:
//*//%L
		{% for message in component.get_messages_to_handle() %}
		/**
		 * @brief Handle the {{message.get_name()}} message.
		{% for param in message.get_arg_names() %}
		 * @param {{param}}
		{% endfor %}
		 * @note This method is an interface for autogenerated code, do not modify its signature.
		 */
		{{message.get_return_type()}} {{message.get_handler_declaration()}};
//%L
		{% endfor %}
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //
//%L
//%L
//%L
	private:
		// /////////////////// //
		// Handwritten Members //
		// /////////////////// //
//%L
//%L
};
//%L
#endif // {{component.get_name().upper()}}_COMPONENT_H_
//%L