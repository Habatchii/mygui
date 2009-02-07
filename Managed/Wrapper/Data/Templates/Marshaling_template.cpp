﻿
	#{ThisName}^ Convert<MyGUI::#{ThisType}*>::To(MyGUI::#{ThisType}* _value)
	{
		if (_value == nullptr) return nullptr;
		WidgetHolder * obj = _value->getUserData< WidgetHolder >(false);
		if (obj) return (#{ThisName}^)obj->toObject();
		return gcnew #{ThisName}(_value);
	}
	MyGUI::#{ThisType}* Convert<MyGUI::#{ThisType}*>::From(#{ThisName}^ _value)
	{
		if (_value == nullptr) return nullptr;
		MyGUI::Widget* widget = _value->GetNativePtr();
		if (widget == nullptr) return nullptr;
		return widget->castType<MyGUI::#{ThisType}>(false);
	}
