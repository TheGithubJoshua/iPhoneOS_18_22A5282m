@class NSMutableDictionary, _UISelectorDictionary;

@interface _UICommandIdentifierDictionary : NSObject <NSCopying> {
    _UISelectorDictionary *_actionDictionary;
    NSMutableDictionary *_actionPropertyListDictionary;
}

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)intersectingIdentifiersFromDictionary:(id)a0;
- (BOOL)intersectsEntriesFromDictionary:(id)a0;
- (id)objectForAction:(SEL)a0 propertyList:(id)a1;
- (void)removeEntriesFromDictionary:(id)a0;
- (void)removeObjectForAction:(SEL)a0 propertyList:(id)a1;
- (void)setObject:(id)a0 forAction:(SEL)a1 propertyList:(id)a2;

@end
