@class NSString;

@interface CKVSearchField : NSObject <NSCopying>

@property (readonly, nonatomic) long long fieldType;
@property (readonly, nonatomic) NSString *fieldText;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToField:(id)a0;
- (id)initWithType:(long long)a0 text:(id)a1;

@end
