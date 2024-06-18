@class NSArray, NSUUID, NSString, NSMutableArray;

@interface TIUserDictionaryServerMock : NSObject <TIUserDictionaryServing> {
    NSMutableArray *_observers;
}

@property (retain, nonatomic) NSArray *pairs;
@property (readonly, copy, nonatomic) NSUUID *userDictionaryUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)getPhraseShortcutPairs:(id /* block */)a0;
- (void).cxx_destruct;
- (void)startServer;
- (id)addObserver:(id /* block */)a0;

@end
