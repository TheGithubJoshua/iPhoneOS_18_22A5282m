@class NSDictionary;

@interface _DPAlgorithmParameters : NSObject

@property (readonly, nonatomic) NSDictionary *parameterDictionary;

+ (id)allAlgorithmNames;
+ (id)parametersFromFile:(id)a0;
+ (id)algorithmParametersFromDictionary:(id)a0;
+ (id)algorithmParametersForKey:(id)a0;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
