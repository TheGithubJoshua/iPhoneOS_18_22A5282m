@class NSSet, NSString;

@interface PBFDataFreshnessState : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) NSSet *freshnessProviders;
@property (readonly, nonatomic, getter=isFresh) BOOL fresh;
@property (readonly, nonatomic) NSSet *dataComponents;
@property (readonly, nonatomic) NSSet *freshComponents;
@property (readonly, nonatomic) NSSet *outOfDateComponents;
@property (readonly, nonatomic) NSString *freshnessDebugDescription;

+ (id)new;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateComponentEntities:(id /* block */)a0;
- (id)initWithFreshnessProvider:(id)a0;
- (BOOL)isDataComponentFresh:(id)a0;

@end
