@class NSUserDefaults;

@interface MTDefaultsChangeNotifier : MTDictionaryDiff

@property (nonatomic, getter=isRunning) BOOL running;
@property (retain, nonatomic) NSUserDefaults *defaults;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_defaultsChanged;
- (id)initWithProperties:(id)a0 defaults:(id)a1;

@end
