@class FCFileCoordinatedDictionary;

@interface FCFileCoordinatedTodayPersonalizationUpdate : NSObject

@property (retain, nonatomic) FCFileCoordinatedDictionary *fileCoordinatedDictionary;

- (id)initWithFileURL:(id)a0;
- (id)init;
- (void)submitUpdate:(id)a0 withCompletion:(id /* block */)a1;
- (void)readWithAccessor:(id /* block */)a0;
- (void).cxx_destruct;
- (void)clearUpdates;

@end
