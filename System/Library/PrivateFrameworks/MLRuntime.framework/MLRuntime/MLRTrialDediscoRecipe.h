@class NSString, NSDictionary;

@interface MLRTrialDediscoRecipe : NSObject

@property (readonly, nonatomic) NSString *baseKeyFormat;
@property (readonly, nonatomic) NSDictionary *encodingSchema;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetURL:(id)a0 configOverride:(id)a1 error:(id *)a2;

@end
