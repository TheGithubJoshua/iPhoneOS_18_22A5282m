@class NSString, NSFileHandle;

@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {
    NSString *_bundleIdentifier;
    NSFileHandle *_storeFileHandle;
    NSString *_storePath;
    NSString *_storeFileProtectionClass;
    NSString *_storeType;
    NSString *_storeConfigurationName;
    NSString *_containerIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)dealloc;

@end
