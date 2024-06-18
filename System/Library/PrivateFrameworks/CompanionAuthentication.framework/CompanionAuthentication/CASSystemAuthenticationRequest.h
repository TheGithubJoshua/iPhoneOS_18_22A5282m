@class NSString;

@interface CASSystemAuthenticationRequest : CASAuthenticationRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long service;
@property (nonatomic) unsigned long long options;
@property (retain, nonatomic) NSString *appleAccountAltDSID;

- (id)initWithCoder:(id)a0;
- (long long)authType;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
