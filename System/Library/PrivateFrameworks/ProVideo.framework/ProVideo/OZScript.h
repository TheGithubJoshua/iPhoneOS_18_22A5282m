@class NSRegularExpression, JSContext, NSURL, NSMutableArray;

@interface OZScript : NSObject

@property (retain, nonatomic) NSRegularExpression *paramRegex;
@property (nonatomic) BOOL alertShown;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) JSContext *context;
@property (readonly, nonatomic) NSMutableArray *parameterDescriptors;

- (id)init;
- (id)process:(id)a0;
- (void)dispatch:(id)a0;
- (id)objectWithName:(id)a0;
- (void)dealloc;
- (void)exportObject:(id)a0 as:(id)a1;
- (void)loadScriptWithURL:(id)a0;
- (id)preprocess:(id)a0;

@end
