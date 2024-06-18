@class NSString;

@interface _HMDIDSAccountIdentifier : _HMDAccountIdentifier

@property (readonly, copy) NSString *identifierString;

+ (BOOL)supportsSecureCoding;
+ (id)namespace;

- (id)initWithCoder:(id)a0;
- (id)senderCorrelationIdentifier;
- (BOOL)isAuthenticated;
- (id)initWithIdentifier:(id)a0;
- (id)kind;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifierString:(id)a0;

@end
