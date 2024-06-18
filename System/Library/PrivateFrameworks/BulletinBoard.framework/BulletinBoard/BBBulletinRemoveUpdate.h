@interface BBBulletinRemoveUpdate : BBBulletinUpdate

@property (readonly, nonatomic) BOOL shouldSync;

+ (BOOL)supportsSecureCoding;
+ (id)updateWithBulletin:(id)a0 feeds:(unsigned long long)a1 shouldSync:(BOOL)a2;

- (id)initWithCoder:(id)a0;
- (id)typeDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBulletin:(id)a0 feeds:(unsigned long long)a1 shouldSync:(BOOL)a2;

@end
