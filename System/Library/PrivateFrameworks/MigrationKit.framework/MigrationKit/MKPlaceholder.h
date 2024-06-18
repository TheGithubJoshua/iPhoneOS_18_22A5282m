@class NSString, NSData;

@interface MKPlaceholder : NSObject

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *appStoreIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *developer;
@property (copy, nonatomic) NSString *container;
@property (retain, nonatomic) NSData *icon;

- (id)initWithJSONData:(id)a0;
- (void)uninstall;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)install;
- (id)initWithBundleIdentifier:(id)a0 appStoreIdentifier:(id)a1 bundleName:(id)a2 developer:(id)a3 icon:(id)a4;
- (id)initWithTestBundleIdentifier;

@end
