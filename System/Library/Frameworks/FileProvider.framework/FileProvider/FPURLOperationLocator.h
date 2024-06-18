@interface FPURLOperationLocator : FPActionOperationLocator {
    BOOL _attachSandboxExtensionOnXPCEncoding;
    long long _size;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)filename;
- (BOOL)isFolder;
- (id)initWithObject:(id)a0;
- (id)parentIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (unsigned long long)size;
- (id)identifier;
- (BOOL)isDownloaded;
- (void)attachSandboxExtensionOnXPCEncoding;
- (BOOL)isExternalURL;
- (BOOL)requiresCrossDeviceCopy;

@end
