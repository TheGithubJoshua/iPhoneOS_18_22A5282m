@class NSString, NSURL;

@interface SBLockScreenPluginApplicationAction : SBLockScreenPluginAction

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic, setter=setURL:) NSURL *url;
@property (nonatomic) unsigned long long transitionStyle;

+ (id)actionWithBundleID:(id)a0;
+ (id)actionWithURL:(id)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)description;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (BOOL)isApplicationAction;

@end
