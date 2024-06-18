@class NSString, UIImage, INIntent;

@interface REUIDonatedElementDemoProperties : REUIDonatedElementProperties {
    NSString *_demoBundleIdentifier;
    INIntent *_demoIntent;
    NSString *_demoAppName;
    UIImage *_demoAppIcon;
}

+ (id)createWithIntent:(id)a0 bundleIdentifier:(id)a1 appName:(id)a2 appIcon:(id)a3;

- (id)appName;
- (id)intent;
- (void).cxx_destruct;
- (id)appIcon;
- (id)bundleIdentifier;

@end
