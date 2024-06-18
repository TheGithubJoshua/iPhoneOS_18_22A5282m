@class NSArray, NSDictionary;

@interface MTLLinkedFunctionsInternal : MTLLinkedFunctions {
    struct MTLLinkedFunctionsPrivate { NSArray *functions; NSArray *privateFunctions; NSArray *binaryFunctions; NSDictionary *groups; } _private;
}

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)setFunctions:(id)a0;
- (id)groups;
- (void)setGroups:(id)a0;
- (void)setBinaryFunctions:(id)a0;
- (id)privateFunctions;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setPrivateFunctions:(id)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)functions;
- (id)binaryFunctions;

@end
