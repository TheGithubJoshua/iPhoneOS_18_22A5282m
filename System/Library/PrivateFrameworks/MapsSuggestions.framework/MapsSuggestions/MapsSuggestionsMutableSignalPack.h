@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (BOOL)addFromEntry:(id)a0;
- (void)removeAll;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2;
- (BOOL)addFromMapItem:(id)a0;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1;
- (BOOL)writeSignalValue:(float)a0 forType:(long long)a1 gathered:(id)a2 expires:(id)a3;
- (BOOL)removeSignalType:(long long)a0;

@end
