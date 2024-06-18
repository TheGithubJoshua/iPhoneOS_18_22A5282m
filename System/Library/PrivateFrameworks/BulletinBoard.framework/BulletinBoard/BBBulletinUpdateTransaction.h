@class BBBulletinUpdate;

@interface BBBulletinUpdateTransaction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BBBulletinUpdate *bulletinUpdate;
@property (readonly, nonatomic) unsigned long long transactionID;

+ (id)transactionWithBulletinUpdate:(id)a0 transactionID:(unsigned long long)a1;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithBulletinUpdate:(id)a0 transactionID:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
