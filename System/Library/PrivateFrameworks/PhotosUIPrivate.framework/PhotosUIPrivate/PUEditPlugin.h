@class NSString, UIImage, UIApplicationExtensionActivity, NSExtension;

@interface PUEditPlugin : NSObject

@property (readonly, nonatomic) UIApplicationExtensionActivity *applicationExtensionActivity;
@property (nonatomic) unsigned long long category;
@property (readonly, nonatomic) NSExtension *extension;
@property (readonly, nonatomic) UIImage *smallIcon;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) UIImage *icon;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithExtension:(id)a0 pluginCategoryType:(unsigned long long)a1;

@end
