@class NSMutableArray;

@interface _ICNullLexiconManager : NSObject <_ICLexiconManaging> {
    NSMutableArray *_contactObservers;
}

- (void)hibernate;
- (id)init;
- (void)unloadLexicons;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (void).cxx_destruct;
- (id)loadLexicons;
- (void)removeContactObserver:(id /* block */)a0;
- (void)warmUp;
- (id)loadLexicons:(id /* block */)a0;
- (id)loadLexiconsUsingFilter:(id /* block */)a0;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (id)test_loadLexicons;

@end
