@class NSString;

@interface _UIObjectIdentifierPathProxy : NSObject <NSSecureCoding> {
    NSString *_identifierPath;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;

@end
