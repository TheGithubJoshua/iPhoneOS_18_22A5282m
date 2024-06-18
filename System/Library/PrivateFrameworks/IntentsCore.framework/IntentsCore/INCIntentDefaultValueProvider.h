@class INIntent;

@interface INCIntentDefaultValueProvider : NSObject

@property (readonly, copy, nonatomic) INIntent *intent;

- (void)loadDefaultValuesWithAttributes:(id)a0 extensionProxy:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)isExpectedDefaultValueError:(id)a0;
- (id)initWithIntent:(id)a0;
- (void).cxx_destruct;
- (void)loadDefaultValuesWithCompletionHandler:(id /* block */)a0;

@end
