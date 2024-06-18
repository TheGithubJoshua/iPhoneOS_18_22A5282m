@class NSDictionary;

@interface MSUUpdateBrainLoader : NSObject

@property (retain) NSDictionary *attributesDict;

- (id)initWithDictionary:(id)a0;
- (BOOL)cancel:(id *)a0;
- (void)dealloc;
- (void)adjustOptions:(id)a0 completion:(id /* block */)a1;
- (void)loadUpdateBrainWithOptions:(id)a0 progressHandler:(id /* block */)a1;
- (long long)requiredDiskSpace:(id *)a0;

@end
