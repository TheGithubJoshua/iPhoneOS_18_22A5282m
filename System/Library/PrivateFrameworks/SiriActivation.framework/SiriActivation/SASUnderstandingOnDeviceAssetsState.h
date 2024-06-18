@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SASUnderstandingOnDeviceAssetsState : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uodAssetsqueue;
@property (readonly) BOOL understandingOnDeviceAssetsAvailable;

- (void)_setUODAssetsAvailable:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)updateState;
- (void)dealloc;

@end
