@class NSMutableDictionary;

@interface ATXRootOfAppDataWithHashes : ATXRootOfAppData {
    NSMutableDictionary *_dataForBundleId;
}

- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSerialized:(id)a0;
- (void)recordSessionWithBundleId:(id)a0 firstAction:(id)a1;
- (unsigned long long)sessionCountForBundleId:(id)a0;
- (unsigned long long)sessionCountForBundleId:(id)a0 firstAction:(id)a1;

@end
