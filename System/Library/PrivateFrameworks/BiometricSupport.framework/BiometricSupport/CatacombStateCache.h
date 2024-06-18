@class NSMutableDictionary;

@interface CatacombStateCache : NSObject {
    NSMutableDictionary *_cachedStates;
}

- (id)init;
- (void)removeUser:(unsigned int)a0;
- (int)addUserStatesFromBuffer:(id)a0;
- (id)cachedComponents;
- (void).cxx_destruct;
- (unsigned int)stateOfUserComponent:(unsigned int)a0;
- (id)cachedUserComponents;
- (unsigned int)stateOfComponent:(id)a0;
- (void)reset;
- (unsigned int)stateOfMasterComponent;

@end
