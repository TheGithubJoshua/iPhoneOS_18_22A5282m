@class NSString, NSDictionary;

@interface CUStateEvent : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)enterState;
+ (id)initialTransition;
+ (id)exitState;

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithName:(id)a0 userInfo:(id)a1;

@end
