@class NSString;

@interface STRestrictionItem : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *rmConfiguration;
@property (readonly, copy, nonatomic) NSString *payloadKey;
@property (readonly, copy, nonatomic) NSString *uiLabel;
@property (readonly, nonatomic) unsigned long long restrictionType;
@property (readonly, copy, nonatomic) id otherInfo;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfiguration:(id)a0 restrictionKey:(id)a1 labelName:(id)a2 type:(unsigned long long)a3 restrictionValue:(id)a4;

@end
