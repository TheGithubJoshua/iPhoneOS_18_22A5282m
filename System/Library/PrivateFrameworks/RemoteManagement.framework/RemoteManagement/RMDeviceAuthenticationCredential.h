@interface RMDeviceAuthenticationCredential : RMAuthenticationCredential

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)debugDescription;

@end
