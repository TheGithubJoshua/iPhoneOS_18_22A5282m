@interface WFSecurityScopedFileCoder : WFFileCoder

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)sharedDirectory;
- (void)archiveFileAtURL:(id)a0 fileShouldBeDeletedOnDeallocation:(BOOL)a1 withCoder:(id)a2;
- (id)decodeFileWithCoder:(id)a0 fileShouldBeDeletedOnDeallocation:(BOOL *)a1 fileIsSecurityScoped:(BOOL *)a2;
- (void)waitForFileAvailabilityWithCompletionHandler:(id /* block */)a0;
- (id)sharedTemporaryDirectory;

@end
