@class NSMutableDictionary;

@interface _UIVisualStyleRegistry : NSObject {
    NSMutableDictionary *__classToVisualStyleClass;
}

@property (class, readonly, nonatomic) _UIVisualStyleRegistry *defaultRegistry;

+ (id)registryForTraitEnvironment:(id)a0;
+ (id)registryForIdiom:(long long)a0;

- (id)init;
- (Class)visualStyleClassForStylableClass:(Class)a0;
- (void)registerVisualStyleClass:(Class)a0 forStylableClass:(Class)a1;
- (void).cxx_destruct;
- (Class)visualStyleClassForView:(id)a0;

@end
