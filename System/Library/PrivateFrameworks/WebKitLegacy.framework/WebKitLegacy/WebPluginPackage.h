@class NSBundle;

@interface WebPluginPackage : WebBasePluginPackage {
    NSBundle *nsBundle;
}

- (BOOL)load;
- (id)initWithPath:(id)a0;
- (id)bundle;
- (void)dealloc;
- (Class)viewFactory;

@end
