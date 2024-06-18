@class NSString;

@interface PHASEDefinition : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uid;

+ (id)new;

- (id)init;
- (void)setUid:(id)a0;
- (id)initInternal;
- (id)uid;
- (void).cxx_destruct;

@end
