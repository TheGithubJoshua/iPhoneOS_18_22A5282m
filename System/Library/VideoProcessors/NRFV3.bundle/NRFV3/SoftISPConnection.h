@class NSString;

@interface SoftISPConnection : NSObject {
    NSString *_sourceStageName;
    NSString *_sourcePropertyName;
    NSString *_destinationStageName;
    NSString *_destinationPropertyName;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)destinationIsGraphOutput;
- (id)initFromStage:(id)a0 fromProperty:(id)a1 toStage:(id)a2 toProperty:(id)a3;
- (BOOL)sourceIsGraphInput;

@end
