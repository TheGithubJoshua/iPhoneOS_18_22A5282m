@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayDropbox : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (id)init;
- (void)depositWithAccessor:(id /* block */)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)peekWithAccessor:(id /* block */)a0;

@end
