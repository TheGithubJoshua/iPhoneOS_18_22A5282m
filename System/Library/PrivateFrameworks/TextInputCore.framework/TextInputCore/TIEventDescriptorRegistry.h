@class NSDictionary, NSMutableDictionary, NSLock;

@interface TIEventDescriptorRegistry : NSObject {
    NSMutableDictionary *_eventDescriptors;
    NSMutableDictionary *_eventSpecs;
    NSLock *_lock;
}

@property (retain, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSDictionary *eventDescriptors;
@property (readonly, nonatomic) NSDictionary *eventSpecs;
@property (nonatomic) BOOL loaded;

+ (id)registry;
+ (id)registryWithConfig:(id)a0;
+ (id)registryWithDescriptors:(id)a0 andSpecs:(id)a1;

- (id)initWithDescriptors:(id)a0 andSpecs:(id)a1;
- (void)_loadEventDescriptors;
- (id)eventSpecWithName:(id)a0;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)allEventDescriptors;
- (id)valueFromError:(id)a0 forKey:(id)a1;
- (void)loadEventDescriptorsIfNecessary;
- (id)eventDescriptorWithName:(id)a0;
- (id)contextFromError:(id)a0;

@end
