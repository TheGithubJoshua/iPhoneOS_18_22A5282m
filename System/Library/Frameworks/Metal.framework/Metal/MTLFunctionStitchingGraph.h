@class NSString, NSArray, MTLFunctionStitchingFunctionNode;

@interface MTLFunctionStitchingGraph : NSObject <NSCopying>

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) MTLFunctionStitchingFunctionNode *outputNode;
@property (copy, nonatomic) NSArray *attributes;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithFunctionName:(id)a0 nodes:(id)a1 outputNode:(id)a2 attributes:(id)a3;

@end
