@class NSString, NSXPCConnection, TISupplementalLexiconController, NSObject;
@protocol _ICLexiconManaging;

@interface TITransientLexiconManager : NSObject <TISupplementalLexiconControllerDelegate, TITransientLexiconManaging> {
    struct _LXLexicon { } *_namedEntityLexiconRef;
    struct _LXLexicon { } *_namedEntityPhraseLexiconRef;
    NSObject<_ICLexiconManaging> *_inputContextLexiconManager;
    TISupplementalLexiconController *_supplementalLexicons;
    BOOL _lexiconsLoaded;
}

@property (retain, nonatomic, setter=_setOverridingCurrentConnectionForTesting:) NSXPCConnection *_overridingCurrentConnectionForTesting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) const struct _LXLexicon { } *namedEntityLexicon;
@property (readonly, nonatomic) const struct _LXLexicon { } *namedEntityPhraseLexicon;
@property (readonly, nonatomic) TISupplementalLexiconController *ensureSupplementalLexicons;
@property (readonly, nonatomic) TISupplementalLexiconController *supplementalLexicons;
@property (nonatomic, getter=isSupplementalLexiconSearchEnabled) BOOL supplementalLexiconSearchEnabled;

+ (id)sharedInstance;
+ (void)setSharedTITransientLexiconManager:(id)a0;
+ (id)singletonInstance;
+ (id)getEntries:(struct _LXLexicon { } *)a0;

- (id)_currentConnection;
- (id)init;
- (void)supplementalLexiconControllerProcessDidTerminate:(id)a0;
- (BOOL)searchForWord:(id)a0;
- (BOOL)searchForWordCaseInsensitive:(id)a0;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (BOOL)searchHelper:(struct _LXLexicon { } *)a0 forWord:(struct __CFString { } *)a1 caseSensitive:(BOOL)a2;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)getOnce:(id /* block */)a0;
- (void).cxx_destruct;
- (void)loadLexicons;
- (void)removeContactObserver:(id /* block */)a0;
- (void)dealloc;
- (void)debugLogEntities;
- (id /* block */)addContactObserver:(id /* block */)a0;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;

@end
