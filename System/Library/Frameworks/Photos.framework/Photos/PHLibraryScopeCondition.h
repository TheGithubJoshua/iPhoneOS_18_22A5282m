@class PLLibraryScopeCondition;

@interface PHLibraryScopeCondition : NSObject <NSCopying>

@property (retain, nonatomic) PLLibraryScopeCondition *proxyObject;
@property (readonly, nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long criteria;

+ (id)forwardingTargetForSelector:(SEL)a0;
+ (Class)_mappedPLConditionClass;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)initWithProxyObject:(id)a0;

@end
