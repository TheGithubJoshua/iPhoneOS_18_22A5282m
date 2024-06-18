@class NSString;

@interface SNTestFailure : NSObject

@property (readonly, copy, nonatomic) NSString *message;

- (void).cxx_destruct;
- (id)initWithMissingClass:(Class)a0;
- (id)initWithMessage:(id)a0;

@end
