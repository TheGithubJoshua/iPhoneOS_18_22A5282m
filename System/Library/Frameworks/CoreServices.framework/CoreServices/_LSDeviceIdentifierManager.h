@class NSMutableDictionary;

@interface _LSDeviceIdentifierManager : NSObject {
    NSMutableDictionary *_sharedCaches;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)cacheForPersona:(id)a0;

@end
