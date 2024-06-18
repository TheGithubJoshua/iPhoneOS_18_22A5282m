@interface SUSFollowUp : NSObject

+ (id)representingBundlePath;
+ (id)groupIdentifier;
+ (id)extensionIdentifier;
+ (id)bundleIconName;
+ (id)actions;
+ (unsigned long long)displayStyle;
+ (id)uniqueIdentifier;
+ (id)identifier;
+ (id)categoryIdentifier;
+ (id)generateFollowUpWithDescriptor:(id)a0 userInfo:(id)a1;
+ (id)informativeTextWithDescriptor:(id)a0;
+ (id)notificationWithDescriptor:(id)a0;
+ (id)titleWithDescriptor:(id)a0;

@end
