@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject

@property (readonly, nonatomic) NSMutableSet *entries;
@property (retain, nonatomic) HMDVendorModelEntry *defaultEntry;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)attributeDescriptions;
- (void)addEntry:(id)a0;
- (id)lookupModel:(id)a0;
- (id)lookupProductData:(id)a0;

@end
