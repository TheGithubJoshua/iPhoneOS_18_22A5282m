@class NSString, FBProcess, FBSOpenApplicationOptions;

@interface FBSystemServiceOpenApplicationRequest : NSObject

@property (nonatomic, getter=isTrusted) BOOL trusted;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) FBSOpenApplicationOptions *options;
@property (retain, nonatomic) FBProcess *clientProcess;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleId:(id)a0;

@end
