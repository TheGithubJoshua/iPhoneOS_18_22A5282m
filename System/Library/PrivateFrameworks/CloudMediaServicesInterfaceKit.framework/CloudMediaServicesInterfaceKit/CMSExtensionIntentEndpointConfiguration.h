@class NSMutableSet;

@interface CMSExtensionIntentEndpointConfiguration : CMSExtensionEndpointConfiguration

@property (retain, nonatomic) NSMutableSet *optionalMethods;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0 endpoint:(id)a1 baseURL:(id)a2 groupHeaders:(id)a3;

@end
