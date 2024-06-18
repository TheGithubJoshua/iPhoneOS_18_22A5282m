@class NSMutableDictionary;

@interface EntityMapCache : NSObject {
    NSMutableDictionary *_uuidMap;
}

@property double hitRetainTime;
@property double missRetainTime;
@property unsigned int capacityLimit;
@property unsigned int pruneSize;

- (id)init;
- (id)stateDictionary;
- (id)entryForUUID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)pruneCache;
- (void)setEntry:(id)a0 forUUID:(id)a1;

@end
