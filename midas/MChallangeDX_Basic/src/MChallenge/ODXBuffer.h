#pragma once

#define COUNTOF(a) ( sizeof( a ) / sizeof( ( a )[0] ) )

class ODXBuffer
{
public:
	UINT					m_iCount;
	UINT					m_iBindFlags;
	UINT					m_iSize;
	D3D11_BUFFER_DESC		m_BufferDesc;
	D3D11_SUBRESOURCE_DATA  m_SubResourceData;
public:
	ID3D11Buffer*			m_pBuffer;


public:
	HRESULT				Create(ID3D11Device* pDevice,
		UINT iSize,
		UINT iCounter,
		void* pPoint,
		UINT  BindFlags,
		D3D11_USAGE uSage = D3D11_USAGE_DEFAULT,
		ID3D11Buffer** ppGetBuffer = 0);
	bool				Release();
	void				Apply(ID3D11DeviceContext* pd3dDeviceContext);

	UINT		GetCount();

public:
	ODXBuffer(void);
	virtual ~ODXBuffer(void);
};


