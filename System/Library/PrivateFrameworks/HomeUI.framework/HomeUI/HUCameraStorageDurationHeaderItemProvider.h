@class NSSet;

@interface HUCameraStorageDurationHeaderItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) unsigned long long displayStyle;
@property (readonly, copy, nonatomic) NSSet *cameraProfiles;

- (void).cxx_destruct;
- (id)initWithItems:(id)a0;
- (id)initWithCameraProfiles:(id)a0 displayStyle:(unsigned long long)a1;
- (id)invalidationReasons;

@end
