@interface _DKApplicationMetadataKey : NSObject

+ (id)dyldPlatform;
+ (id)processIdentifier;
+ (id)backboardState;
+ (id)launchReason;
+ (id)shortVersionString;
+ (id)extensionContainingBundleIdentifier;
+ (id)isNativeArchitecture;
+ (id)extensionHostIdentifier;
+ (id)exactBundleVersion;

@end
