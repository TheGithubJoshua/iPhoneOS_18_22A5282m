@class NSSet, NSArray, NSString;

@interface TVRXManagedConfigManager : NSObject <MCProfileConnectionObserver>

@property (retain, nonatomic) NSSet *allowedDeviceNames;
@property (retain, nonatomic) NSArray *allowedTVs;
@property (readonly, nonatomic, getter=isManagedConfigProfileInstalled) BOOL managedConfigProfileInstalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)refreshState;
- (void).cxx_destruct;
- (void)dealloc;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;
- (id)_convertMACAddressesToData:(id)a0;
- (BOOL)allowedDeviceWithName:(id)a0;

@end
