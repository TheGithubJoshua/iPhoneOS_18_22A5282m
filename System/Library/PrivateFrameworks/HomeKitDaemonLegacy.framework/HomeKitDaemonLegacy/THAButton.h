@interface THAButton : NSObject

@property (nonatomic) unsigned char identifier;
@property (nonatomic) unsigned long long type;

- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)a0 identifier:(unsigned char)a1;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
