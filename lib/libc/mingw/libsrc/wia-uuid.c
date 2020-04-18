/* unknwn-uuid.c */
/* Generate GUIDs for WIA interfaces */

/* All IIDs defined in this file were extracted from
 * HKEY_LOCAL_MACHINE\SOFTWARE\Classes\Interface\ */

#define INITGUID
#include <basetyps.h>

// Image types
DEFINE_GUID(WiaImgFmt_UNDEFINED,0xb96b3ca9,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_RAWRGB,0xbca48b55,0xf272,0x4371,0xb0,0xf1,0x4a,0x15,0x0d,0x05,0x7b,0xb4);
DEFINE_GUID(WiaImgFmt_MEMORYBMP,0xb96b3caa,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_BMP,0xb96b3cab,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_EMF,0xb96b3cac,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_WMF,0xb96b3cad,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_JPEG,0xb96b3cae,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_PNG,0xb96b3caf,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_GIF,0xb96b3cb0,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_TIFF,0xb96b3cb1,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_EXIF,0xb96b3cb2,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_PHOTOCD,0xb96b3cb3,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_FLASHPIX,0xb96b3cb4,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_ICO,0xb96b3cb5,0x0728,0x11d3,0x9d,0x7b,0x00,0x00,0xf8,0x1e,0xf3,0x2e);
DEFINE_GUID(WiaImgFmt_CIFF,0x9821a8ab,0x3a7e,0x4215,0x94,0xe0,0xd2,0x7a,0x46,0x0c,0x03,0xb2);
DEFINE_GUID(WiaImgFmt_PICT,0xa6bc85d8,0x6b3e,0x40ee,0xa9,0x5c,0x25,0xd4,0x82,0xe4,0x1a,0xdc);
DEFINE_GUID(WiaImgFmt_JPEG2K,0x344ee2b2,0x39db,0x4dde,0x81,0x73,0xc4,0xb7,0x5f,0x8f,0x1e,0x49);
DEFINE_GUID(WiaImgFmt_JPEG2KX,0x43e14614,0xc80a,0x4850,0xba,0xf3,0x4b,0x15,0x2d,0xc8,0xda,0x27);

// Document and other types
DEFINE_GUID(WiaImgFmt_RTF,0x573dd6a3,0x4834,0x432d,0xa9,0xb5,0xe1,0x98,0xdd,0x9e,0x89,0x0d);
DEFINE_GUID(WiaImgFmt_XML,0xb9171457,0xdac8,0x4884,0xb3,0x93,0x15,0xb4,0x71,0xd5,0xf0,0x7e);
DEFINE_GUID(WiaImgFmt_HTML,0xc99a4e62,0x99de,0x4a94,0xac,0xca,0x71,0x95,0x6a,0xc2,0x97,0x7d);
DEFINE_GUID(WiaImgFmt_TXT,0xfafd4d82,0x723f,0x421f,0x93,0x18,0x30,0x50,0x1a,0xc4,0x4b,0x59);
DEFINE_GUID(WiaImgFmt_MPG,0xecd757e4,0xd2ec,0x4f57,0x95,0x5d,0xbc,0xf8,0xa9,0x7c,0x4e,0x52);
DEFINE_GUID(WiaImgFmt_AVI,0x32f8ca14,0x087c,0x4908,0xb7,0xc4,0x67,0x57,0xfe,0x7e,0x90,0xab);
DEFINE_GUID(WiaImgFmt_ASF,0x8d948ee9,0xd0aa,0x4a12,0x9d,0x9a,0x9c,0xc5,0xde,0x36,0x19,0x9b);
DEFINE_GUID(WiaImgFmt_SCRIPT,0xfe7d6c53,0x2dac,0x446a,0xb0,0xbd,0xd7,0x3e,0x21,0xe9,0x24,0xc9);
DEFINE_GUID(WiaImgFmt_EXEC,0x485da097,0x141e,0x4aa5,0xbb,0x3b,0xa5,0x61,0x8d,0x95,0xd0,0x2b);
DEFINE_GUID(WiaImgFmt_UNICODE16,0x1b7639b6,0x6357,0x47d1,0x9a,0x07,0x12,0x45,0x2d,0xc0,0x73,0xe9);
DEFINE_GUID(WiaImgFmt_DPOF,0x369eeeab,0xa0e8,0x45ca,0x86,0xa6,0xa8,0x3c,0xe5,0x69,0x7e,0x28);

// Audio types
DEFINE_GUID(WiaAudFmt_WAV,0xf818e146,0x07af,0x40ff,0xae,0x55,0xbe,0x8f,0x2c,0x06,0x5d,0xbe);
DEFINE_GUID(WiaAudFmt_MP3,0x0fbc71fb,0x43bf,0x49f2,0x91,0x90,0xe6,0xfe,0xcf,0xf3,0x7e,0x54);
DEFINE_GUID(WiaAudFmt_AIFF,0x66e2bf4f,0xb6fc,0x443f,0x94,0xc8,0x2f,0x33,0xc8,0xa6,0x5a,0xaf);
DEFINE_GUID(WiaAudFmt_WMA,0xd61d6413,0x8bc2,0x438f,0x93,0xad,0x21,0xbd,0x48,0x4d,0xb6,0xa1);

// Event GUIDs
DEFINE_GUID(WIA_EVENT_DEVICE_DISCONNECTED,0x143e4e83,0x6497,0x11d2,0xa2,0x31,0x00,0xc0,0x4f,0xa3,0x18,0x09);
DEFINE_GUID(WIA_EVENT_DEVICE_CONNECTED,0xa28bbade,0x64b6,0x11d2,0xa2,0x31,0x00,0xc0,0x4f,0xa3,0x18,0x09);
DEFINE_GUID(WIA_EVENT_ITEM_DELETED,0x1d22a559,0xe14f,0x11d2,0xb3,0x26,0x00,0xc0,0x4f,0x68,0xce,0x61);
DEFINE_GUID(WIA_EVENT_ITEM_CREATED,0x4c8f4ef5,0xe14f,0x11d2,0xb3,0x26,0x00,0xc0,0x4f,0x68,0xce,0x61);
DEFINE_GUID(WIA_EVENT_TREE_UPDATED,0xc9859b91,0x4ab2,0x4cd6,0xa1,0xfc,0x58,0x2e,0xec,0x55,0xe5,0x85);
DEFINE_GUID(WIA_EVENT_VOLUME_INSERT,0x9638bbfd,0xd1bd,0x11d2,0xb3,0x1f,0x00,0xc0,0x4f,0x68,0xce,0x61);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE,0xa6c5a715,0x8c6e,0x11d2,0x97,0x7a,0x00,0x00,0xf8,0x7a,0x92,0x6f);
DEFINE_GUID(WIA_EVENT_SCAN_PRINT_IMAGE,0xb441f425,0x8c6e,0x11d2,0x97,0x7a,0x00,0x00,0xf8,0x7a,0x92,0x6f);
DEFINE_GUID(WIA_EVENT_SCAN_FAX_IMAGE,0xc00eb793,0x8c6e,0x11d2,0x97,0x7a,0x00,0x00,0xf8,0x7a,0x92,0x6f);
DEFINE_GUID(WIA_EVENT_SCAN_OCR_IMAGE,0x9d095b89,0x37d6,0x4877,0xaf,0xed,0x62,0xa2,0x97,0xdc,0x6d,0xbe);
DEFINE_GUID(WIA_EVENT_SCAN_EMAIL_IMAGE,0xc686dcee,0x54f2,0x419e,0x9a,0x27,0x2f,0xc7,0xf2,0xe9,0x8f,0x9e);
DEFINE_GUID(WIA_EVENT_SCAN_FILM_IMAGE,0x9b2b662c,0x6185,0x438c,0xb6,0x8b,0xe3,0x9e,0xe2,0x5e,0x71,0xcb);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE2,0xfc4767c1,0xc8b3,0x48a2,0x9c,0xfa,0x2e,0x90,0xcb,0x3d,0x35,0x90);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE3,0x154e27be,0xb617,0x4653,0xac,0xc5,0x0f,0xd7,0xbd,0x4c,0x65,0xce);
DEFINE_GUID(WIA_EVENT_SCAN_IMAGE4,0xa65b704a,0x7f3c,0x4447,0xa7,0x5d,0x8a,0x26,0xdf,0xca,0x1f,0xdf);
DEFINE_GUID(WIA_EVENT_STORAGE_CREATED,0x353308b2,0xfe73,0x46c8,0x89,0x5e,0xfa,0x45,0x51,0xcc,0xc8,0x5a);
DEFINE_GUID(WIA_EVENT_STORAGE_DELETED,0x5e41e75e,0x9390,0x44c5,0x9a,0x51,0xe4,0x70,0x19,0xe3,0x90,0xcf);
DEFINE_GUID(WIA_EVENT_STI_PROXY,0xd711f81f,0x1f0d,0x422d,0x86,0x41,0x92,0x7d,0x1b,0x93,0xe5,0xe5);
DEFINE_GUID(WIA_EVENT_CANCEL_IO,0xc860f7b8,0x9ccd,0x41ea,0xbb,0xbf,0x4d,0xd0,0x9c,0x5b,0x17,0x95);

// Power management event GUIDs,sent by the WIA service to drivers
DEFINE_GUID(WIA_EVENT_POWER_SUSPEND,0xa0922ff9,0xc3b4,0x411c,0x9e,0x29,0x03,0xa6,0x69,0x93,0xd2,0xbe);
DEFINE_GUID(WIA_EVENT_POWER_RESUME,0x618f153e,0xf686,0x4350,0x96,0x34,0x41,0x15,0xa3,0x04,0x83,0x0c);

// No action handler and prompt handler
DEFINE_GUID(WIA_EVENT_HANDLER_NO_ACTION,0xe0372b7d,0xe115,0x4525,0xbc,0x55,0xb6,0x29,0xe6,0x8c,0x74,0x5a);
DEFINE_GUID(WIA_EVENT_HANDLER_PROMPT,0x5f4baad0,0x4d59,0x4fcd,0xb2,0x13,0x78,0x3c,0xe7,0xa9,0x2f,0x22);

// WIA Commands
DEFINE_GUID(WIA_CMD_SYNCHRONIZE,0x9b26b7b2,0xacad,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_TAKE_PICTURE,0xaf933cac,0xacad,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_DELETE_ALL_ITEMS,0xe208c170,0xacad,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_CHANGE_DOCUMENT,0x04e725b0,0xacae,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_UNLOAD_DOCUMENT,0x1f3b3d8e,0xacae,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(WIA_CMD_DIAGNOSTIC,0x10ff52f5,0xde04,0x4cf0,0xa5,0xad,0x69,0x1f,0x8d,0xce,0x01,0x41);

DEFINE_GUID(WIA_CMD_DELETE_DEVICE_TREE,0x73815942,0xdbea,0x11d2,0x84,0x16,0x00,0xc0,0x4f,0xa3,0x61,0x45);
DEFINE_GUID(WIA_CMD_BUILD_DEVICE_TREE,0x9cba5ce0,0xdbea,0x11d2,0x84,0x16,0x00,0xc0,0x4f,0xa3,0x61,0x45);

DEFINE_GUID(IID_IWiaUIExtension,0xDA319113,0x50EE,0x4C80,0xB4,0x60,0x57,0xD0,0x05,0xD4,0x4A,0x2C);

DEFINE_GUID(IID_IWiaDevMgr,0x5eb2502a,0x8cf1,0x11d1,0xbf,0x92,0x00,0x60,0x08,0x1e,0xd8,0x11);
DEFINE_GUID(IID_IEnumWIA_DEV_INFO,0x5e38b83c,0x8cf1,0x11d1,0xbf,0x92,0x00,0x60,0x08,0x1e,0xd8,0x11);
DEFINE_GUID(IID_IWiaEventCallback,0xae6287b0,0x0084,0x11d2,0x97,0x3b,0x00,0xa0,0xc9,0x06,0x8f,0x2e);
DEFINE_GUID(IID_IWiaDataCallback,0xa558a866,0xa5b0,0x11d2,0xa0,0x8f,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(IID_IWiaDataTransfer,0xa6cef998,0xa5b0,0x11d2,0xa0,0x8f,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(IID_IWiaItem,0x4db1ad10,0x3391,0x11d2,0x9a,0x33,0x00,0xc0,0x4f,0xa3,0x61,0x45);
DEFINE_GUID(IID_IWiaPropertyStorage,0x98B5E8A0,0x29CC,0x491a,0xAA,0xC0,0xE6,0xDB,0x4F,0xDC,0xCE,0xB6);
DEFINE_GUID(IID_IEnumWiaItem,0x5e8383fc,0x3391,0x11d2,0x9a,0x33,0x00,0xc0,0x4f,0xa3,0x61,0x45);
DEFINE_GUID(IID_IEnumWIA_DEV_CAPS,0x1fcc4287,0xaca6,0x11d2,0xa0,0x93,0x00,0xc0,0x4f,0x72,0xdc,0x3c);
DEFINE_GUID(IID_IEnumWIA_FORMAT_INFO,0x81BEFC5B,0x656D,0x44f1,0xB2,0x4C,0xD4,0x1D,0x51,0xB4,0xDC,0x81);
DEFINE_GUID(IID_IWiaLog,0xA00C10B6,0x82A1,0x452f,0x8B,0x6C,0x86,0x06,0x2A,0xAD,0x68,0x90);
DEFINE_GUID(IID_IWiaLogEx,0xAF1F22AC,0x7A40,0x4787,0xB4,0x21,0xAE,0xb4,0x7A,0x1F,0xBD,0x0B);
DEFINE_GUID(IID_IWiaNotifyDevMgr,0x70681EA0,0xE7BF,0x4291,0x9F,0xB1,0x4E,0x88,0x13,0xA3,0xF7,0x8E);
DEFINE_GUID(IID_IWiaItemExtras,0x6291ef2c,0x36ef,0x4532,0x87,0x6a,0x8e,0x13,0x25,0x93,0x77,0x8d);
DEFINE_GUID(CLSID_WiaDevMgr,0xa1f4e726,0x8cf1,0x11d1,0xbf,0x92,0x00,0x60,0x08,0x1e,0xd8,0x11);
DEFINE_GUID(CLSID_WiaLog,0xA1E75357,0x881A,0x419e,0x83,0xE2,0xBB,0x16,0xDB,0x19,0x7C,0x68);