@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;

@end
