@class NSString, NSMutableDictionary;

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSMutableDictionary *_preferences;
}

@property (readonly) unsigned long long synchronizeCount;
@property (readonly) unsigned long long setupAutosyncCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)setPrimitiveObject:(id)a0 forKey:(id)a1;
- (void)setupAutosync;
- (void)primitiveRemoveObjectForKey:(id)a0;
- (BOOL)synchronize;
- (long long)primitiveIntegerValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (BOOL)primitiveBoolValueForKey:(id)a0 keyExists:(BOOL *)a1;
- (id)primitiveObjectForKey:(id)a0;
- (void).cxx_destruct;

@end
