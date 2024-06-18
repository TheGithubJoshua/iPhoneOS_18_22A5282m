@interface _NSFileProviderEmptyItemVersion : NSFileProviderItemVersion

+ (BOOL)supportsSecureCoding;
+ (id)emptyVersion;

- (id)initWithCoder:(id)a0;
- (id)contentVersion;
- (id)init;
- (id)metadataVersion;

@end
