@class NSString, NSKeyValueUnnestedProperty;

@interface NSKeyValueNestedProperty : NSKeyValueProperty {
    NSString *_relationshipKey;
    NSString *_keyPathFromRelatedObject;
    NSKeyValueUnnestedProperty *_relationshipProperty;
    NSString *_keyPathWithoutOperatorComponents;
    BOOL _isAllowedToResultInForwarding;
    id _dependentValueKeyOrKeys;
    BOOL _dependentValueKeyOrKeysIsASet;
}

- (void)_givenPropertiesBeingInitialized:(struct __CFSet { } *)a0 getAffectingProperties:(id)a1;
- (id)dependentValueKeyOrKeysIsASet:(BOOL *)a0;
- (BOOL)object:(id)a0 withObservance:(id)a1 willChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; } *)a4;
- (id)_keyPathIfAffectedByValueForMemberOfKeys:(id)a0;
- (void)object:(id)a0 withObservance:(id)a1 didChangeValueForKeyOrKeys:(id)a2 recurse:(BOOL)a3 forwardingValues:(struct { id x0; id x1; })a4;
- (BOOL)matchesWithoutOperatorComponentsKeyPath:(id)a0;
- (void)_addDependentValueKey:(id)a0;
- (id)description;
- (void)dealloc;
- (id)_initWithContainerClass:(id)a0 keyPath:(id)a1 firstDotIndex:(unsigned long long)a2 propertiesBeingInitialized:(struct __CFSet { } *)a3;
- (void)object:(id)a0 didRemoveObservance:(id)a1 recurse:(BOOL)a2;
- (id)_keyPathIfAffectedByValueForKey:(id)a0 exactMatch:(BOOL *)a1;
- (void)object:(id)a0 didAddObservance:(id)a1 recurse:(BOOL)a2;
- (Class)_isaForAutonotifying;

@end