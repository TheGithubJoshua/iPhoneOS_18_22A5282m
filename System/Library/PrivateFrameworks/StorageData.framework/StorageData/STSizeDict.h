@class NSDictionary, STSizeVector;

@interface STSizeDict : NSObject

@property (readonly) NSDictionary *dictionary;
@property (readonly) STSizeVector *total;

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)get:(id)a0;
- (id)plus:(id)a0;
- (id)remapKeys:(id)a0 removeMissing:(BOOL)a1;

@end
