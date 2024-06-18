@class NSSet;

@interface PLAssetChangeNotification : PLChangeNotification

@property (copy, nonatomic) NSSet *updatedAssets;

+ (id)notificationWithChangedAssets:(id)a0;

- (id)_init;
- (id)object;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (id)userInfo;
- (id)_initWithChangedObjects:(id)a0;

@end
