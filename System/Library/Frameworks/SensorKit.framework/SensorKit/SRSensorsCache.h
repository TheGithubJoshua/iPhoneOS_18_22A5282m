@class NSCache, NSArray;

@interface SRSensorsCache : NSObject {
    NSCache *_sensorsCache;
    NSArray *_sensorDescriptionsDirs;
}

@property (class, retain, nonatomic) SRSensorsCache *defaultCache;

- (id)init;
- (id)initWithDirectories:(id)a0;
- (void)dealloc;

@end
