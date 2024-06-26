@class NSString, UIViewController;

@interface UIStoryboardSegue : NSObject

@property (copy, nonatomic) id /* block */ prepareHandler;
@property (copy, nonatomic) id /* block */ performHandler;
@property (retain, nonatomic) id sender;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) UIViewController *sourceViewController;
@property (readonly, nonatomic) UIViewController *destinationViewController;

+ (id)segueWithIdentifier:(id)a0 source:(id)a1 destination:(id)a2 performHandler:(id /* block */)a3;

- (id)init;
- (void)_prepare;
- (void).cxx_destruct;
- (void)perform;
- (id)initWithIdentifier:(id)a0 source:(id)a1 destination:(id)a2;

@end
