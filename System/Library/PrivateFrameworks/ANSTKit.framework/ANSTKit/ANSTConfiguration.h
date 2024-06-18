@interface ANSTConfiguration : NSObject

@property (nonatomic) long long networkEngineType;
@property (nonatomic) unsigned int qualityOfService;

+ (id)new;

- (id)init;
- (id)_init;

@end
