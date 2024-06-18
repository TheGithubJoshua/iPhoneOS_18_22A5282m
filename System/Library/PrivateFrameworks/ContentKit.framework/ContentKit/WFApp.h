@class NSString;

@interface WFApp : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)allApps;
+ (id)findAppWithBundleIdentifier:(id)a0 name:(id)a1;

- (BOOL)isFrontmost;
- (id)initWithCoder:(id)a0;
- (id)icon;
- (BOOL)isRunning;
- (id)initWithRecord:(id)a0;
- (id)bundleURL;
- (unsigned long long)hash;
- (id)processIdentifier;
- (BOOL)isHidden;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)launchDate;
- (id)initWithBundleIdentifier:(id)a0 localizedName:(id)a1;

@end
