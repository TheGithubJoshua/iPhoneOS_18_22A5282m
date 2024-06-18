@class NSMutableDictionary;

@interface NWEntityMapperCoalitionWatcher : NWEntityMapper {
    NSMutableDictionary *_uuidCoalitionNameMap;
}

- (id)init;
- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (void)_uuidCoalitionNameMapPrune;
- (BOOL)noteUUID:(id)a0 forPid:(int)a1;

@end
