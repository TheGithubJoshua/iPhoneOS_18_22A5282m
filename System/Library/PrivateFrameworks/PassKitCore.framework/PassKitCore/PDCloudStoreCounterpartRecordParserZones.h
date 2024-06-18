@class NSMutableDictionary;

@interface PDCloudStoreCounterpartRecordParserZones : NSObject {
    NSMutableDictionary *_zoneNameToRecords;
}

- (void)removeIdentifiers:(id)a0;
- (void)addRecord:(id)a0;
- (id)init;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)allRecords;

@end
