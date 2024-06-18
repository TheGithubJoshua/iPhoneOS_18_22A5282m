@interface TLAlertStoppingOptions : NSObject <NSCopying>

@property (nonatomic) double fadeOutDuration;
@property (nonatomic) BOOL shouldWaitUntilEndOfCurrentRepetition;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
