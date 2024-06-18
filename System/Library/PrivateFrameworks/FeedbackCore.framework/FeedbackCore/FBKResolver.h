@class NSArray;

@interface FBKResolver : NSObject

@property (readonly) NSArray *arguments;

+ (id)name;
+ (id)resolverForName:(id)a0;
+ (id)resolverForName:(id)a0 arguments:(id)a1;
+ (id)resolverForQuestion:(id)a0;

- (void)setArguments:(id)a0;
- (void).cxx_destruct;
- (id)run;
- (long long)expectedArguments;

@end
