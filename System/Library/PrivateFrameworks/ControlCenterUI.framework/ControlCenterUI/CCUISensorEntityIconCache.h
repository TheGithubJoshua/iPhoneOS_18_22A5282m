@class NSObject;
@protocol OS_dispatch_queue;

@interface CCUISensorEntityIconCache : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (struct CGSize { double x0; double x1; })iconSize;
+ (id)sharedInstance;

- (id)_init;
- (void)preheatImageForSensorEntity:(id)a0;
- (id)continuityCaptureIconForExtensionIdentifier:(id)a0;
- (id)imageForEntity:(id)a0;
- (void).cxx_destruct;
- (id)_imageInBundle:(id)a0 named:(id)a1 needsTreatment:(BOOL)a2;
- (id)_keyboardSettingsIcon;

@end
