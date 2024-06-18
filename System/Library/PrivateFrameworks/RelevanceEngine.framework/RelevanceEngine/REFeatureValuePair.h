@class REFeature;

@interface REFeatureValuePair : NSObject <NSCopying>

@property (readonly, nonatomic) REFeature *feature;
@property (readonly, nonatomic) unsigned long long value;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithFeature:(id)a0 value:(unsigned long long)a1;

@end
