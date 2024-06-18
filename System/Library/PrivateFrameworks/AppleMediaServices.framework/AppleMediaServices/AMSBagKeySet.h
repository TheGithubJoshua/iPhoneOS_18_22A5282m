@class NSMutableDictionary;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSMutableDictionary *defaultValues;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *defaultValues;

+ (void)registerBagKeySet:(id)a0 forProfile:(id)a1 profileVersion:(id)a2;
+ (id)defaultValueForKey:(id)a0 profile:(id)a1 profileVersion:(id)a2;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
