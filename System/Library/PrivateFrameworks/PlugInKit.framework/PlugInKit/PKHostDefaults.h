@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults

@property (weak) PKHostPlugIn *plugin;

- (void)registerDefaults:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)synchronize;
- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlugIn:(id)a0;

@end
