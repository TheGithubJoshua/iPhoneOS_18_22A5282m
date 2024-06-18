@class NSString;

@interface VNMTLDeviceWisdomParameters : NSObject <VNMTLDeviceWisdomParametersProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_flushMetalDeviceWisdomParametersCache;
- (id)wisdomParameterForMTLDeviceWithName:(id)a0 error:(id *)a1;
- (id)wisdomParameterForMTLDevice:(id)a0 error:(id *)a1;
- (id)_wisdomResourcesPath;
- (id)_cachedMetalDeviceWisdomParametersAndReturnError:(id *)a0;

@end
