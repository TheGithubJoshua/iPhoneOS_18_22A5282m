@class NSSet, NSDictionary, NSMutableArray;

@interface _ATXScoreInterpreter : NSObject {
    NSDictionary *_bytecode;
    NSMutableArray *_bytecodeDependencies;
}

@property (readonly, nonatomic) NSSet *subscoreNames;

- (id)evaluateWithInputScores:(id)a0 intentType:(id)a1;
- (id)initWithParseRoot:(id)a0;
- (void).cxx_destruct;
- (id)evaluateWithInputScoreDict:(id)a0 intentType:(id)a1;

@end
