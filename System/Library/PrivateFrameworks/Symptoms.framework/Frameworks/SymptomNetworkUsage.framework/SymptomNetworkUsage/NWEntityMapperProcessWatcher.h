@class NSString, NSMutableDictionary;

@interface NWEntityMapperProcessWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidProcessNameMap;
    NSString *_niluuidProcessName;
}

- (id)init;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void)noteUUID:(id)a0 forProcessName:(id)a1;
- (id)stateDictionary;
- (void).cxx_destruct;
- (void)_uuidProcessNameMapPrune;

@end
