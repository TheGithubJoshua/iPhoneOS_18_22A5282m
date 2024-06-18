@class NSString;

@interface TRIFactorProviderIdent : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) NSString *value;

+ (id)identWithType:(unsigned char)a0 value:(id)a1;

- (id)init;
- (id)copyWithReplacementType:(unsigned char)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToIdent:(id)a0;
- (id)initWithType:(unsigned char)a0 value:(id)a1;
- (id)copyWithReplacementValue:(id)a0;

@end
