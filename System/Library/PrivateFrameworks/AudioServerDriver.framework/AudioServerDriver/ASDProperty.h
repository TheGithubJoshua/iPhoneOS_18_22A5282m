@class ASDPropertyAddress;

@interface ASDProperty : NSObject <NSCopying>

@property (readonly, nonatomic) ASDPropertyAddress *address;
@property (retain, nonatomic) id value;

- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(id)a0 value:(id)a1;

@end
