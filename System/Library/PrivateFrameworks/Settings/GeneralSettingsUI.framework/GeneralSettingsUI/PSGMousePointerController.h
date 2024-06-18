@class NSString, NSMutableSet;
@protocol BSInvalidatable;

@interface PSGMousePointerController : NSObject <BKSMousePointerDeviceObserver>

@property (retain) id<BSInvalidatable> observerToken;
@property (retain, nonatomic) NSMutableSet *pointerDevices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)globalDevicePreferences;
- (BOOL)hasTrackpad;
- (BOOL)hasMagicMouse;
- (BOOL)hasMouse;
- (void)mousePointerDevicesDidConnect:(id)a0;
- (void)setGlobalDevicePreferences:(id)a0;
- (void).cxx_destruct;
- (void)setTrackingSpeedIndex:(int)a0;
- (void)mousePointerDevicesDidDisconnect:(id)a0;
- (int)trackingSpeedIndex;

@end
