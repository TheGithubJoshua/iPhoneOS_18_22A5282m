@class NSString;

@interface ISO18013ReaderAuthInfo : NSObject <NSSecureCoding> {
    NSString *_identifier;
    NSString *_organization;
    NSString *_organizationUnit;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
