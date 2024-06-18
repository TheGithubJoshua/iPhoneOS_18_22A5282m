@class NSString, NSMutableDictionary;

@interface OADColorScheme : NSObject <NSCopying> {
    NSMutableDictionary *mColors;
}

@property (copy, nonatomic) NSString *name;

- (id)init;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)colorForIndex:(int)a0;
- (void)setColor:(id)a0 index:(int)a1;
- (void)addColor:(id)a0 index:(int)a1;
- (unsigned long long)colorCount;
- (void)validateColorScheme;

@end
