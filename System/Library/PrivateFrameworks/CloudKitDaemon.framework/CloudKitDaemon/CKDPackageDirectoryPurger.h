@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface CKDPackageDirectoryPurger : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *rootDirectories;

+ (id)sharedPurger;
+ (void)schedulePeriodicPurgesInDirectory:(id)a0;

- (id)init;
- (void)addRootDirectory:(id)a0;
- (void)purgeDirectory:(id)a0;
- (void)purgeRootDirectory:(id)a0;
- (void).cxx_destruct;
- (void)purgeAll;
- (void)registerXPCActivity;

@end
