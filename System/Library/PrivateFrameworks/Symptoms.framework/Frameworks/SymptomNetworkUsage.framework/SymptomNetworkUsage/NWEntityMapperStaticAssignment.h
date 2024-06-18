@class NSMutableDictionary;

@interface NWEntityMapperStaticAssignment : NWEntityMapper {
    NSMutableDictionary *_staticUUIDToBundleIDMap;
}

- (id)identifierForUUID:(id)a0 derivation:(int *)a1;
- (void).cxx_destruct;
- (id)initWithFlavor:(id)a0;

@end
