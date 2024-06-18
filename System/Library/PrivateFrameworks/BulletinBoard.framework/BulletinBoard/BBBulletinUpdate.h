@class BBBulletin;

@interface BBBulletinUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BBBulletin *bulletin;
@property (readonly, nonatomic) unsigned long long feeds;

- (id)initWithCoder:(id)a0;
- (id)typeDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBulletin:(id)a0 feeds:(unsigned long long)a1;

@end
