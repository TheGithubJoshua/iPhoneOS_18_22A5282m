@class CPAnalyticsSystemProperties, PHPhotoLibrary, CPAnalyticsDestinationsRegistry, NSObject;
@protocol OS_dispatch_queue;

@interface CPAnalytics : NSObject {
    long long _signpostUniqueValue;
}

@property (class, readonly, nonatomic) BOOL isAllowed;

@property (retain, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) CPAnalyticsDestinationsRegistry *registry;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventsQueue;
@property (readonly, nonatomic) CPAnalyticsSystemProperties *systemProperties;

+ (id)creationDateForSignpost:(long long)a0;
+ (void)releasePhotoLibrary;
+ (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
+ (id)sharedInstance;
+ (void)removeDestination:(id)a0;
+ (id)bucketNameForDouble:(double)a0 bucketLimits:(id)a1 numberFormatter:(id)a2;
+ (id)bucketNameForInteger:(long long)a0 bucketLimits:(long long)a1;
+ (void)startAppTracking;
+ (id)systemPropertyForKey:(id)a0;
+ (void)startViewTracking;
+ (void)setupSystemPropertyProvidersForLibrary:(id)a0;
+ (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (void)activateEventQueue;
+ (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
+ (long long)startSignpost;
+ (void)addDestination:(id)a0;
+ (void)setupWithConfigurationAtURL:(id)a0;
+ (void)sendEvent:(id)a0 withPayload:(id)a1;

- (id)init;
- (void)releasePhotoLibrary;
- (void)_setupSystemPropertyProviders;
- (void)endSignpost:(long long)a0 forEventName:(id)a1 withPayload:(id)a2;
- (void)removeDestination:(id)a0;
- (long long)generateNextSignpostID;
- (void).cxx_destruct;
- (void)setupSystemPropertyProvidersForLibrary:(id)a0;
- (void)updateWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (void)activateEventQueue;
- (void)setupWithConfigurationFilename:(id)a0 inBundle:(id)a1;
- (long long)startSignpost;
- (void)addDestination:(id)a0;
- (void)setupWithConfigurationAtURL:(id)a0;
- (void)sendEvent:(id)a0 withPayload:(id)a1;

@end
