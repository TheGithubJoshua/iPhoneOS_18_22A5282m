@class NSString, AFInstanceContext, NSObject;
@protocol OS_dispatch_queue;

@interface AFMediaRemoteDeviceInfo : NSObject {
    NSString *_routeIdentifier;
    NSString *_groupIdentifier;
    AFInstanceContext *_instanceContext;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)localDeviceInfo;
+ (id)currentDevice;

- (void)_activeDeviceInfoChanged:(id)a0;
- (id)init;
- (void)getRouteIdentifierWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateWithRouteIdentifier:(id)a0 groupIdentifier:(id)a1;
- (void)getGroupIdentifierWithCompletion:(id /* block */)a0;
- (void)_getMRDeviceInfoWithCompletion:(id /* block */)a0;

@end
