@class NSString, NSNumber;

@interface SSDownloadPolicyUserDefaultState : NSObject <NSSecureCoding, SSXPCCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSNumber *fallbackNumberValue;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL shouldInvertBoolValue;
@property (readonly, nonatomic) BOOL currentBoolValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
