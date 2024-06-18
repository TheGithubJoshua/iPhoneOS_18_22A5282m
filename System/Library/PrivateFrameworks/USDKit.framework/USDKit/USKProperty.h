@class NSString, USKScene, USKToken, USKNode;

@interface USKProperty : USKObject {
    struct UsdProperty { int _type; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *px; } _p; } _prim; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _proxyPrimPath; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *_ptrAndBits; } _rep; } _propName; } _property;
    USKScene *_sceneOwner;
    USKNode *_nodeOwner;
}

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) USKToken *typeName;
@property (readonly, nonatomic) NSString *role;
@property (readonly, nonatomic) USKToken *roleName;

- (int)intValue;
- (void)setStringValue:(id)a0;
- (double)doubleValue;
- (id)data;
- (id)resourcePath;
- (void)setBoolValue:(BOOL)a0;
- (void)setFloatValue:(float)a0;
- (float)floatValue;
- (void)setDoubleValue:(double)a0;
- (BOOL)boolValue;
- (void)setURL:(id)a0;
- (id)path;
- (unsigned long long)hash;
- (BOOL)isAnimated;
- (id)name;
- (id)stringValue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)stringArray;
- (void)setData:(id)a0;
- (id)metadata;
- (id)parentNode;
- (void)setIntValue:(int)a0;
- (id)urlValue;
- (void /* unknown type, empty encoding */)float3Value;
- (void /* unknown type, empty encoding */)float4Value;
- (id)tokenValue;
- (void)setResourcePath:(id)a0;
- (void /* unknown type, empty encoding */)float2Value;
- (void)setFloat3Value:(SEL)a0;
- (void)setFloat2Value:(SEL)a0;
- (void)setFloat4Value:(SEL)a0;
- (id)targetObject;
- (id)dictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1;
- (id)resourcePathArray;
- (void)setDouble3Array:(void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setDouble4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1;
- (void)setDoubleArray:(double *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setFloat3Array:(void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setFloat4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1;
- (void)setFloatArray:(float *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setStringArray:(id)a0;
- (void)clearValue;
- (BOOL)setConnectionWithTargetPaths:(id)a0;
- (BOOL)setDictionaryMetadataWithKey:(id)a0 dictionaryKey:(id)a1 value:(id)a2;
- (void)setDouble3Value:(SEL)a0;
- (void)setDouble4x4Value:(struct { void /* unknown type, empty encoding */ x0[4]; })a0;
- (void)setDouble4x4Value:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 atTime:(double)a1;
- (void)setFloat2Array:(void *)a0 count:(unsigned long long)a1;
- (void)setFloat3Array:(void *)a0 count:(unsigned long long)a1;
- (void)setFloat3Value:(SEL)a0 atTime:(double)a1;
- (void)setFloatArray:(float *)a0 count:(unsigned long long)a1;
- (void)setFloatValue:(float)a0 atTime:(double)a1;
- (void)setIntArray:(int *)a0 count:(unsigned long long)a1;
- (BOOL)setMetadataWithKey:(id)a0 value:(id)a1;
- (void)setObjectPath:(id)a0;
- (void)setObjectPathArray:(id)a0;
- (void)setQuatfArray:(struct { } *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setQuatfValue:(struct { })a0;
- (void)setQuatfValue:(struct { })a0 atTime:(double)a1;
- (void)setTokenArray:(id)a0;
- (void)setTokenValue:(id)a0;
- (id)tokenArray;
- (id)objectPathArray;
- (void /* unknown type, empty encoding */)double3Value;
- (id)metadataWithKey:(id)a0;
- (id)objectPath;
- (unsigned long long)arraySize;
- (unsigned long long)arraySizeAtTime:(double)a0;
- (id)customMetadataWithKey:(id)a0;
- (unsigned long long)double4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (struct { void /* unknown type, empty encoding */ x0[4]; })double4x4Value;
- (unsigned long long)float3Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (unsigned long long)floatArray:(float *)a0 maxCount:(unsigned long long)a1;
- (float)floatValueAtTime:(double)a0;
- (unsigned long long)intArray:(int *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (unsigned long long)quatfArray:(struct { } *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (id)timeCodeValue;
- (id)timeSamples;
- (unsigned long long)double4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void)setData:(id)a0 atTime:(double)a1;
- (void)setDouble4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)clearConnections;
- (void)clearMetadata;
- (id)connectedPropertyPath;
- (id)connectedPropertyPaths;
- (id)dataAtTime:(double)a0;
- (unsigned long long)double2Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)double2Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)double2Value;
- (void /* unknown type, empty encoding */)double2ValueAtTime:(double)a0;
- (unsigned long long)double3Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)double3Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)double3ValueAtTime:(double)a0;
- (unsigned long long)double4Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)double4Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)double4Value;
- (void /* unknown type, empty encoding */)double4ValueAtTime:(double)a0;
- (struct { void /* unknown type, empty encoding */ x0[4]; })double4x4ValueAtTime:(double)a0;
- (unsigned long long)doubleArray:(double *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)doubleArray:(double *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (double)doubleValueAtTime:(double)a0;
- (unsigned long long)float2Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)float2Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)float2ValueAtTime:(double)a0;
- (unsigned long long)float3Array:(void *)a0 maxCount:(unsigned long long)a1;
- (void /* unknown type, empty encoding */)float3ValueAtTime:(double)a0;
- (unsigned long long)float4Array:(void *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)float4Array:(void *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (void /* unknown type, empty encoding */)float4ValueAtTime:(double)a0;
- (unsigned long long)float4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)float4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (unsigned long long)floatArray:(float *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (id)initWithUsdProperty:(struct UsdProperty { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0;
- (id)initWithUsdProperty:(struct UsdProperty { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0 withNodeOwner:(id)a1;
- (id)initWithUsdProperty:(struct UsdProperty { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })a0 withSceneOwner:(id)a1;
- (unsigned long long)intArray:(int *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)quatfArray:(struct { } *)a0 maxCount:(unsigned long long)a1;
- (struct { })quatfValue;
- (struct { })quatfValueAtTime:(double)a0;
- (BOOL)setCustomMetadata:(id)a0 value:(id)a1;
- (void)setDouble2Array:(void *)a0 count:(unsigned long long)a1;
- (void)setDouble2Array:(void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setDouble2Value:(SEL)a0;
- (void)setDouble2Value:(SEL)a0 atTime:(double)a1;
- (void)setDouble3Array:(void *)a0 count:(unsigned long long)a1;
- (void)setDouble3Value:(SEL)a0 atTime:(double)a1;
- (void)setDouble4Array:(void *)a0 count:(unsigned long long)a1;
- (void)setDouble4Array:(void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setDouble4Value:(SEL)a0;
- (void)setDouble4Value:(SEL)a0 atTime:(double)a1;
- (void)setDoubleArray:(double *)a0 count:(unsigned long long)a1;
- (void)setDoubleValue:(double)a0 atTime:(double)a1;
- (void)setFloat2Array:(void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setFloat2Value:(SEL)a0 atTime:(double)a1;
- (void)setFloat4Array:(void *)a0 count:(unsigned long long)a1;
- (void)setFloat4Array:(void *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setFloat4Value:(SEL)a0 atTime:(double)a1;
- (void)setFloat4x4Array:(struct { void /* unknown type, empty encoding */ x0[4]; } *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setIntArray:(int *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setQuatfArray:(struct { } *)a0 count:(unsigned long long)a1;
- (void)setResourcePathArray:(id)a0;
- (void)setStringArray:(id)a0 atTime:(double)a1;
- (void)setTimeCodeValue:(id)a0;
- (void)setTokenArray:(id)a0 atTime:(double)a1;
- (void)setUIntArray:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setUIntArray:(unsigned int *)a0 count:(unsigned long long)a1 atTime:(double)a2;
- (void)setUIntValue:(unsigned int)a0;
- (void)setUIntValue:(unsigned int)a0 atTime:(double)a1;
- (id)stringArrayAtTime:(double)a0;
- (id)tokenArrayAtTime:(double)a0;
- (unsigned long long)uintArray:(unsigned int *)a0 maxCount:(unsigned long long)a1;
- (unsigned long long)uintArray:(unsigned int *)a0 maxCount:(unsigned long long)a1 atTime:(double)a2;
- (unsigned int)uintValue;
- (unsigned int)uintValueAtTime:(double)a0;
- (struct UsdProperty { int x0; struct Usd_PrimDataHandle { struct intrusive_ptr<const pxrInternal_v0_21__aapl__pxrReserved__::Usd_PrimData> { struct Usd_PrimData *x0; } x0; } x1; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8, 16384>::Handle, true, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x0; struct Sdf_PathNodeHandleImpl<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_Pool<pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8, 16384>::Handle, false, const pxrInternal_v0_21__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int x0; } x0; } x1; } x2; struct TfToken { struct TfPointerAndBits<const pxrInternal_v0_21__aapl__pxrReserved__::TfToken::_Rep> { struct _Rep *x0; } x0; } x3; })usdProperty;

@end