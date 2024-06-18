@interface AMSOptional : NSObject

@property (readonly, nonatomic) id value;

+ (id)optionalWithValue:(id)a0;
+ (id)optionalWithNil;

- (id)init;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;

@end
