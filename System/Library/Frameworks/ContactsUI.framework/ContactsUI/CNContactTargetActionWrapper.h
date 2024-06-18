@interface CNContactTargetActionWrapper : NSObject

@property (readonly, weak, nonatomic) id target;
@property (readonly, nonatomic) SEL action;

- (void).cxx_destruct;
- (id)description;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)performActionWithSender:(id)a0;

@end
