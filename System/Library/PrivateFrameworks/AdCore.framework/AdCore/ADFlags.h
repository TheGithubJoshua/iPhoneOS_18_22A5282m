@interface ADFlags : NSObject <NSCopying>

@property unsigned long long flags;

+ (id)initWithFlags:(unsigned long long)a0;

- (id)init;
- (void)unset:(unsigned long long)a0;
- (void)set:(unsigned long long)a0;
- (BOOL)noneSet;
- (unsigned long long)anySet:(unsigned long long)a0;
- (BOOL)isSet:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)allSet:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;

@end
