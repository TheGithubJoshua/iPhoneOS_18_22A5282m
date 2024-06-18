@class NSString;

@interface UISUIOpenInByCopySecurityScopedResource : UISUISecurityScopedResource

@property (copy, nonatomic) NSString *bookmarkExportDataEncodedAsString;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
