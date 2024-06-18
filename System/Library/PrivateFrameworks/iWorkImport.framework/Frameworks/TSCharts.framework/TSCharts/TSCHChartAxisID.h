@class NSString;

@interface TSCHChartAxisID : NSObject <NSCopying>

@property (readonly) int type;
@property (readonly) unsigned long long ordinal;
@property (readonly) NSString *debuggingName;

+ (id)axisIDWithType:(int)a0 ordinal:(unsigned long long)a1;

- (long long)compare:(id)a0;
- (unsigned long long)hash;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)saveToArchive:(void *)a0;
- (id)displayNameWithOrdinal:(BOOL)a0;
- (id)initWithType:(int)a0 ordinal:(unsigned long long)a1;
- (BOOL)intersectsAxisID:(id)a0;

@end
