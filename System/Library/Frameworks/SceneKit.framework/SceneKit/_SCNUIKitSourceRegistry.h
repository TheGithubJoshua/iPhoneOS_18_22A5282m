@class NSMutableArray;

@interface _SCNUIKitSourceRegistry : NSObject {
    NSMutableArray *_sources;
}

+ (id)sharedInstance;
+ (void)registerUIKitSource:(id)a0;
+ (void)unregisterUIKitSource:(id)a0;

- (void)remove:(id)a0;
- (id)init;
- (void)add:(id)a0;
- (void)dealloc;
- (void)apply:(id /* block */)a0;

@end
