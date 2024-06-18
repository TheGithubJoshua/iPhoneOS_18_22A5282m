@class NSObject;
@protocol KVDatasetReader;

@interface KVDataset : NSObject {
    NSObject<KVDatasetReader> *_datasetReader;
}

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)datasetInfo;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithReader:(id)a0;

@end
