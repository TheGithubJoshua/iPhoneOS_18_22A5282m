@class NSString, HDRaceRouteClusterManager;

@interface HDRaceRouteClusterServer : HDStandardTaskServer <HKRaceRouteClusterStoreServer> {
    HDRaceRouteClusterManager *_raceRouteClusterManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;
+ (id)taskIdentifier;
+ (id)requiredEntitlements;

@end
