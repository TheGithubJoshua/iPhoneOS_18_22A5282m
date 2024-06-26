@class NSSet;

@interface SBHSetDiff : NSObject <NSCopying>

@property (readonly, nonatomic) NSSet *additions;
@property (readonly, nonatomic) NSSet *deletions;
@property (readonly, nonatomic) NSSet *updates;
@property (readonly, nonatomic) NSSet *fromSet;
@property (readonly, nonatomic) NSSet *toSet;

+ (id)diffFromSet:(id)a0 toSet:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithFromSet:(id)a0 toSet:(id)a1 additions:(id)a2 deletions:(id)a3 updates:(id)a4;

@end
