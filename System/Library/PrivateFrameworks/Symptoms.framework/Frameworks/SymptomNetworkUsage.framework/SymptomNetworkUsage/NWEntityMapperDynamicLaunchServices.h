@class EntityMapCache;

@interface NWEntityMapperDynamicLaunchServices : NWEntityMapperNEHelper {
    EntityMapCache *_entityMap;
}

- (id)init;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (id)stateDictionary;
- (id)_attemptConvertingPluginNameToContainingAppName:(id)a0;
- (void).cxx_destruct;
- (id)_identifierForUUID:(id)a0 fromSet:(id)a1;
- (id)handleNewUUID:(id)a0;

@end
