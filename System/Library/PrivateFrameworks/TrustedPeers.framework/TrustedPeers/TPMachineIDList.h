@class NSArray;

@interface TPMachineIDList : NSObject

@property (readonly) NSArray *entries;

- (id)machineIDsInStatus:(unsigned long long)a0;
- (id)entryFor:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEntries:(id)a0;

@end
