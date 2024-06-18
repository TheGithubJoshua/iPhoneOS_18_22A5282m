@class NSString, NSURL;

@interface SNLPSSUApplicationInfo : NSObject

@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSURL *assetURL;

+ (id)applicationInfoWithBundleIdentifier:(id)a0 assetURL:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 assetURL:(id)a1;

@end
