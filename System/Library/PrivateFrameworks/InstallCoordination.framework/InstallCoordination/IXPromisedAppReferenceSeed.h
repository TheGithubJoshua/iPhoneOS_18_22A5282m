@class IXApplicationIdentity;

@interface IXPromisedAppReferenceSeed : IXOwnedDataPromiseSeed <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long installationDomain;
@property (retain, nonatomic) IXApplicationIdentity *identity;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)clientPromiseClass;

@end
