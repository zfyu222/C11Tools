#pragma once
template <typename  T>
class Singleton
{
public:
	static T* Instance()
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T();
		return m_pInstance;
	}
	template<typename T0>
	static T* Instance(T0 arg0)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0);
		return m_pInstance;
	}
	template<typename T0, typename T1>
	static T* Instance(T0 arg0, T1 arg1)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0, arg1);
		return m_pInstance;
	}
	template<typename T0, typename T1, typename T2>
	static T* Instance(T0 arg0, T1 arg1,T2 arg2)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0,arg1,arg2);
		return m_pInstance;
	}
	template<typename T0, typename T1, typename T2, typename T3>
	static T* Instance(T0 arg0, T1 arg1, T2 arg2,T3 arg3)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0, arg1, arg2,arg3);
		return m_pInstance;
	}
	template<typename T0, typename T1, typename T2, typename T3 , typename T4>
	static T* Instance(T0 arg0, T1 arg1, T2 arg2, T3 arg3,T4 arg4)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0, arg1, arg2, arg3,arg4);
		return m_pInstance;
	}
	template<typename T0, typename T1, typename T2, typename T3, typename T4,typename  T5>
	static T* Instance(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4,T5 arg5)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0, arg1, arg2, arg3, arg4,arg5);
		return m_pInstance;
	}
	template<typename T0, typename T1, typename T2, typename T3, typename T4, typename  T5,typename T6>
	static T* Instance(T0 arg0, T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5,T6 arg6)
	{
		if (m_pInstance == nullptr)
			m_pInstance = new T(arg0, arg1, arg2, arg3, arg4, arg5,arg6);
		return m_pInstance;
	}
	static T* GetInstance()
	{
		if(m_pInstance==nullptr)
		{
			throw std::
		}
		return m_pInstance;
	}
	static void DestroyInstace()
	{
		delete m_pInstance;
		m_pInstance = nullptr;
	}
private:
	Singleton();
	virtual ~Singleton();
	Singleton(const Singleton&);
	Singleton& operator=(const Singleton&);
private:
	static T* m_pInstance;
};

