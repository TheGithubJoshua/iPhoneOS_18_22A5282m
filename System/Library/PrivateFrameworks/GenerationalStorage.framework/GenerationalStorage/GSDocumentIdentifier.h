@interface GSDocumentIdentifier : NSObject <NSCopying, NSSecureCoding> {
    unsigned char volumeUUID[16];
    unsigned long long documentID;
    int deviceID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDocumentIdentifier:(id)a0;
- (id)initWithFileDescriptor:(int)a0 forItemAtURL:(id)a1 allocateIfNone:(BOOL)a2 error:(id *)a3;

@end
