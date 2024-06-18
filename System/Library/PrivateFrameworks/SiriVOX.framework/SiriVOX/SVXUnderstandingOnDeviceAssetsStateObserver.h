@class AFSettingsConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SVXUnderstandingOnDeviceAssetsStateObserver : NSObject

@property (retain, nonatomic) AFSettingsConnection *settingsConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *uodAssetsqueue;
@property (nonatomic) BOOL understandingOnDeviceAssetsAvailable;

- (void)_setUODAssetsAvailable:(BOOL)a0;
- (id)init;
- (void)_updateState;
- (void).cxx_destruct;
- (void)dealloc;

@end
