@class NSString;

@interface PPContactDiskCache : NSObject {
    long long _lastCreatedAt;
    NSString *_path;
}

- (id)init;
- (id)initWithPath:(id)a0;
- (id)path;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)_cacheObjectFromFilePath:(id)a0 error:(id *)a1;
- (BOOL)iterNameRecordCacheWithError:(id *)a0 block:(id /* block */)a1;

@end
