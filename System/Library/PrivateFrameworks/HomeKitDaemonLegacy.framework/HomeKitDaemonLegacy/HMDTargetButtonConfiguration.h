@class NSString;

@interface HMDTargetButtonConfiguration : HMFObject

@property (readonly, nonatomic) unsigned char identifier;
@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *name;

- (id)init;
- (id)shortDescription;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)buttonName;

@end
